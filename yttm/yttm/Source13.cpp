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
	printf("国語:%d\n",t->m_Japanese);
	printf("数学:%d\n",t->m_Math);
	printf("理科:%d\n",t->m_Science);
	printf("社会:%d\n",t->m_Society);
	printf("英語:%d\n",t->m_English);
}

int main()
{
	TestScore satou = { 100,75,68,42,84 };
	menu(&satou);
	return 0;
}
