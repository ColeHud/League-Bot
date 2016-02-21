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
	CGEventRef w = CGEventCreateKeyboardEvent(
        NULL, (CGKeyCode)13, true
    );

    CGEventPost(kCGHIDEventTap, w);
    CFRelease(w);

    usleep(100000);

	return 0;
}

int eKey()
{
	CGEventRef e = CGEventCreateKeyboardEvent(
        NULL, (CGKeyCode)14, true
    );

    CGEventPost(kCGHIDEventTap, e);
    CFRelease(e);

    usleep(100000);

	return 0;
}

int rKey()
{
	CGEventRef r = CGEventCreateKeyboardEvent(
        NULL, (CGKeyCode)15, true
    );

    CGEventPost(kCGHIDEventTap, r);
    CFRelease(r);

    usleep(100000);

	return 0;
}

int main(int argc, char *argv[])
{
	char key = argv[1][0];
	switch (key)
	{
		case 'q':
			qKey();
		break;

		case 'w':
			wKey();
		break;

		case 'e':
			eKey();
		break;

		case 'r':
			rKey();
		break;

		default:
			printf("WRONG KEY!!!\n");
		break;
	}

	return 0;
}