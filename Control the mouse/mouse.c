#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>

int main() {
    // Move to 200x200
    CGEventRef move1 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(0, 0),
        kCGMouseButtonLeft // ignored
    );
    // Move to 250x250
    CGEventRef move2 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(1439, 0),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef move3 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(1439, 899),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef move4 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(0, 899),
        kCGMouseButtonLeft // ignored
    );

    // Now, execute these events with an interval to make them noticeable
    CGEventPost(kCGHIDEventTap, move1);
    sleep(1);
    CGEventPost(kCGHIDEventTap, move2);
    sleep(1);
    CGEventPost(kCGHIDEventTap, move3);
    sleep(1);
    CGEventPost(kCGHIDEventTap, move4);
    sleep(1);


    /*
    CGEventPost(kCGHIDEventTap, move2);
    sleep(1);
    CGEventPost(kCGHIDEventTap, click1_down);
    CGEventPost(kCGHIDEventTap, click1_up);
    */

    // Release the events
    /*
    CFRelease(click1_up);
    CFRelease(click1_down);
    CFRelease(move2);
    */
    CFRelease(move1);
    CFRelease(move2);
    CFRelease(move3);
    CFRelease(move4);

    return 0;
}