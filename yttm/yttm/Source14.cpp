#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int dice_number = 0;
	srand((unsigned int)time(NULL));
	
		int a = dice_number = rand() % 4;
		printf("%d\n", a);

		int b = dice_number = rand() % 4;
		printf("%d\n", b);

		int c = dice_number = rand() % 4;
		printf("%d\n", c);

		int d = dice_number = rand() % 4;
		printf("%d\n", d);

		int e = dice_number = rand() % 4;
		printf("%d\n", e);

		int f = dice_number = rand() % 4;
		printf("%d", f);

		return 0;
}
