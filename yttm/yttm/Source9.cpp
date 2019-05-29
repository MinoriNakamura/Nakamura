#include <stdio.h>
bool FindNum(int array[], int list_size, int number) 
{
	for (int i = 0; i < list_size; i++) 
	{
		if (array[i] == number) 
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int Array[10] = { 0,1,2,3,4,5,6,7,8,9 };
	scanf_s("%d", Array);
	int a=FindNum(Array, 10, 2);

	printf("%d", a);

}