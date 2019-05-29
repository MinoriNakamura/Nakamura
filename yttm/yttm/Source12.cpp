#include <stdio.h>
typedef struct testscore
{
	int m_Japanese;
	int m_Mathematics;
	int m_Science;
	int m_Socience;
	int m_English;
}TypeScore;

int main() 
{
	TypeScore satou={ 100,75,68,42,84 };
	TypeScore* p_satou;
	p_satou = &satou;
	int japanese = p_satou->m_Japanese;
	int mathematick = p_satou->m_Mathematics;
	int science = p_satou->m_Science;
	int socience = p_satou->m_Socience;
	int english = p_satou->m_English;

	int a = (japanese + mathematick + science + socience + english) / 5;

	printf("国語:%d点\n数学:%d点\n理科:%d点\n社会:%d点\n英語:%d点\n平均:%d点\n", japanese, mathematick, science, socience, english, a);

	return 0;

}
