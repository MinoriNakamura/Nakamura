#include<stdio.h>
//���K���O�Q�@���̂S
int main() {
	for (int a = 1; a <= 100; a++) {
		if (a % 4 == 0 && a % 10 == 0) {
			printf("%d=�����̔{��\n", a);
		}
		else if (a % 4 == 0) {
			printf("%d=4�̔{��\n", a);
		}
		else if (a%10==0) {
			printf("%d=10�̔{��\n", a);
		}
	}
	return 0;
}