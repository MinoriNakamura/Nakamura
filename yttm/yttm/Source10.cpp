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
	printf("���x�F%f\n�`�F�b�N�t���O�F%d\nState:%d\n", Speed, DethFlg, State);
}
