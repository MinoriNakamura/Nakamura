#include <stdio.h>
void PlayInit(float* Speed, bool* DethFlg, int* State)
{
	*Speed = 10;
	*DethFlg = false;
	*State = 0;

}

int main() 
{
	float Speed;
	bool DethFlg;
	int State;
	PlayInit(&Speed, &DethFlg, &State);
	printf("速度：%f\nチェックフラグ：%d\nState:%d\n", Speed, DethFlg, State);
}
