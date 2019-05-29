#include<stdio.h>
//—ûK–â‘è‚O‚Q@‚»‚Ì‚S
int main() {
	for (int a = 1; a <= 100; a++) {
		if (a % 4 == 0 && a % 10 == 0) {
			printf("%d=—¼•û‚Ì”{”\n", a);
		}
		else if (a % 4 == 0) {
			printf("%d=4‚Ì”{”\n", a);
		}
		else if (a%10==0) {
			printf("%d=10‚Ì”{”\n", a);
		}
	}
	return 0;
}