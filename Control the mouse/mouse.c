#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>

int rightClickLocation(int x, int y)
{
    //move
    CGEventRef move = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(x, y),
        kCGMouseButtonLeft // ignored
    );

    CGEventPost(kCGHIDEventTap, move);

    CFRelease(move);

    usleep(10000);//SLEEP

    //click
    CGEventRef click2_down = CGEventCreateMouseEvent(
        NULL, kCGEventRightMouseDown,
        CGPointMake(x, y),
        kCGMouseButtonRight
    );

    CGEventRef click2_up = CGEventCreateMouseEvent(
        NULL, kCGEventRightMouseUp,
        CGPointMake(x, y),
        kCGMouseButtonRight
    );

    CGEventPost(kCGHIDEventTap, click2_down);
    CGEventPost(kCGHIDEventTap, click2_up);

    CFRelease(click2_up);
    CFRelease(click2_down);

    return 0;
}

int leftClickLocation(int x, int y)
{
    //move
    CGEventRef move = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(x, y),
        kCGMouseButtonLeft // ignored
    );

    CGEventPost(kCGHIDEventTap, move);

    CFRelease(move);

    usleep(10000);//SLEEP

    //click
    CGEventRef click1_down = CGEventCreateMouseEvent(
        NULL, kCGEventLeftMouseDown,
        CGPointMake(x, y),
        kCGMouseButtonLeft
    );

    CGEventRef click1_up = CGEventCreateMouseEvent(
        NULL, kCGEventLeftMouseUp,
        CGPointMake(x, y),
        kCGMouseButtonLeft
    );

    CGEventPost(kCGHIDEventTap, click1_down);
    CGEventPost(kCGHIDEventTap, click1_up);

    CFRelease(click1_up);
    CFRelease(click1_down);
    return 0;
}

int main(int argc, char *argv[]) 
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    rightClickLocation(x, y);
    sleep(1);

    return 0;
}