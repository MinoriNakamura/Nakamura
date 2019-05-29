#include <stdio.h>
typedef struct testscore 
{
	int m_Japanese;
	int m_Math;
	int m_Science;
	int m_Society;
	int m_English;
}TestScore;

void menu(testscore* t) {
	printf("‘Œê:%d\n",t->m_Japanese);
	printf("”Šw:%d\n",t->m_Math);
	printf("—‰È:%d\n",t->m_Science);
	printf("Ğ‰ï:%d\n",t->m_Society);
	printf("‰pŒê:%d\n",t->m_English);
}

int main()
{
	TestScore satou = { 100,75,68,42,84 };
	menu(&satou);
	return 0;
}
