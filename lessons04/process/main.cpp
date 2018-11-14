#include <stdio.h>

#define MUL_DEMO


int main() {
	int a=5;
	int b=4;
	int c;

#ifdef MUL_DEMO
	c=a*b;
#else
	c=a+b;
#endif

    printf("%d\n", c);

	return 0;
}