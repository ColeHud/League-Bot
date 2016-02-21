#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>

int qKey()
{
	CGEventRef q = CGEventCreateKeyboardEvent(
        NULL, (CGKeyCode)12, true
    );

    CGEventPost(kCGHIDEventTap, q);
    CFRelease(q);

    usleep(100000);

	return 0;
}

int wKey()
{
	return 0;
}

int eKey()
{
	return 0;
}

int rKey()
{
	return 0;
}

int main()
{
	qKey();

	return 0;
}