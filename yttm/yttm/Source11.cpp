#include <stdio.h>
int main()
{
	int a;
	int* b;
	b = &a;
	* b = 10;
	printf("%d", a);
	return 0;
}