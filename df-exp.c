#include <stdio.h>
#include <stdlib.h>

#ifdef VOLATILE
void doStuff(volatile int* ps)
{
	printf("VOLATILE");
#else
void doStuff(int* ps)
{
        printf("NON-VOLATILE");
#endif
	//At least 5 cases needed to generate a jump table.
        switch(*ps)
	{
		case 0: { printf("0"); break; }
                case 1: { printf("1"); break; }
                case 2: { printf("2"); break; }
                case 3: { printf("3"); break; }
                case 4: { printf("4"); break; }
		default: { printf("default"); break; }
	}

	return;
}

void main(int argc, void *argv)
{
	int i = rand();
	doStuff(&i);
}


