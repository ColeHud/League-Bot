cmake_minimum_required(VERSION 2.8)
project( LeagueTest )
find_package( OpenCV REQUIRED )
add_executable( LeagueTest LeagueBotTest.cpp )
target_link_libraries( LeagueTest ${OpenCV_LIBS} )
