#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <stdlib.h>

using namespace std;
using namespace cv;

/// Global Variables
Mat img; Mat templ; Mat result;
char* image_window = "Source Image";
char* result_window = "Result window";

int match_method = 1;
int max_Trackbar = 5;

/// Function Headers
void MatchingMethod( int, void* );

/** @function main */
int main( int argc, char** argv )
{
  /// Load image and template
  templ = imread( "minion.png", 1 );

  /// Create windows
  namedWindow( image_window, CV_WINDOW_AUTOSIZE );
  namedWindow( result_window, CV_WINDOW_AUTOSIZE );

  sleep(5);

  while(true)
  {
  	//get screen from computer
  	system("screencapture -x ~/Desktop/Hackathons/MHacks\\ 7/League\\ Bot/Recognize\\ Enemies/screenshot.jpg");
  	img = imread( "screenshot.jpg", 1 );

  	/// Create Trackbar
  	char* trackbar_label = "Method: \n 0: SQDIFF \n 1: SQDIFF NORMED \n 2: TM CCORR \n 3: TM CCORR NORMED \n 4: TM COEFF \n 5: TM COEFF NORMED";
  	createTrackbar( trackbar_label, image_window, &match_method, max_Trackbar, MatchingMethod );

  	MatchingMethod( 0, 0 );
  	sleep(1);
  }
  

  return 0;
}

/**
 * @function MatchingMethod
 * @brief Trackbar callback
 */
void MatchingMethod( int, void* )
{
  /// Source image to display
  Mat img_display;
  img.copyTo( img_display );

  /// Create the result matrix
  int result_cols =  img.cols - templ.cols + 1;
  int result_rows = img.rows - templ.rows + 1;

  result.create( result_rows, result_cols, CV_32FC1 );

  /// Do the Matching and Normalize
  matchTemplate( img, templ, result, match_method);
  normalize( result, result, 0, 1, NORM_MINMAX, -1, Mat() );

  /// Localizing the best match with minMaxLoc
  double minVal; double maxVal; Point minLoc; Point maxLoc;
  Point matchLoc;

  minMaxLoc( result, &minVal, &maxVal, &minLoc, &maxLoc, Mat() );

  /// For SQDIFF and SQDIFF_NORMED, the best matches are lower values. For all the other methods, the higher the better
  if( match_method  == CV_TM_SQDIFF || match_method == CV_TM_SQDIFF_NORMED )
    { matchLoc = minLoc; }
  else
    { matchLoc = maxLoc; }

  
  cout << matchLoc.x << endl;
  cout << matchLoc.y << endl;

  int x = matchLoc.x + (templ.cols/2);
  int y = matchLoc.y + (templ.rows/2);
  

  //possible moves
  string command = "./mouse " + to_string(x - 30) + " " + to_string(y + 24);
  string qqq = "./keyboard q";
  string www = "./keyboard w";
  string eee = "./keyboard e";
  string rrr = "./keyboard r";

  //choose what to do
  int random = rand() % 100;

  if(random >= 0 && random < 2)// 11% r
  {
  	system(rrr.c_str());
  }
  else if(random >= 20 && random < 100)// right click
  {
  	system(command.c_str());
  }
  else if(random >= 2 && random < 8)// q
  {
  	system(qqq.c_str());
  }
  else if(random >= 14 && random < 10)//w
  {
  	system(www.c_str());
  }
  else if(random >= 16 && random < 20)//e
  {
  	system(eee.c_str());
  }
  

  rectangle( img_display, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );
  rectangle( result, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );

  
  imshow( image_window, img_display );
  imshow( result_window, result );

  return;
}