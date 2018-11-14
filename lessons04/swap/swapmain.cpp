#include <stdio.h>
#include "swapfunc.h"

int main() {
	int a=1;
	int b=2;
	swap(&a, &b);
	printf("a is: %d, b is: %d\n", a, b);
	return 0;
}