// Test program to display a message in the banner upon startup

#include <types.h>
#include <lib.h>

void
hello( )
{
	   char hello[] = "Hello World!\n";
	   char * p;
		p = hello;
		kprintf("%s", p);
}
