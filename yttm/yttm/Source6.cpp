#include<stdio.h>
bool IsScoreOver(int num, int max_num) {
	if (num < max_num) {
		return false;
	}
	return true;
}
int main() {
	int a = 0;
	int b = 4;
	int c=IsScoreOver(a, b);
	printf("%d", c);
	return 0;
}
