#include<stdio.h>
//練習問題０１　その４
int main() {
	printf("数字を入力してください");
	int a;
	int b;
	scanf_s("%d", &a);
	b = a * 1.08;
	printf("この値に８％加算すると%d", b);
	return 0;
}