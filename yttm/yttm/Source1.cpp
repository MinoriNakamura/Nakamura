#include<stdio.h>
//���K���O�P�@���̂R
int main() {
	int a = 1;
	while (a < 100) {
		printf("%d\n", a);
		a += a;
	}
	return 0;
}