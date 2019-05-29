#include<stdio.h>
#include<string.h>//文字列
struct Food {
	char m_Name[64];
	int m_Price;
	int m_Kind;
};

int main() {
	struct Food menu[6];
	menu[0]={"ハンバーグ",800,1 };
	menu[1]={"カルボナーラ",400,2 };
	menu[2]={"ステーキ",1200,1 };
	menu[3]={"鳥のから揚げ",600,1 };
	menu[4]={"ペペロンチーノ",380,2};
	menu[5]={"チョコレートケーキ",300,3 };

	/*strcpy_s(menu[0].m_Name, "ハンバーグ");
	menu[0].m_Price = 800;
	menu[0].m_Kind = 1;

	strcpy_s(menu[1].m_Name, "カルボナーラ");
	menu[1].m_Price = 400;
	menu[1].m_Kind = 2;

	strcpy_s(menu[0].m_Name, 64, "ステーキ");
	menu[0].m_Price = 1200;
	menu[0].m_Kind = 1;

	strcpy_s(menu[1].m_Name, 64, "鳥のから揚げ");
	menu[1].m_Price = 600;
	menu[1].m_Kind = 1;

	strcpy_s(menu[0].m_Name, 64, "ペペロンチーノ");
	menu[0].m_Price = 380;
	menu[0].m_Kind = 2;

	strcpy_s(menu[1].m_Name, 64, "チョコレートケーキ");
	menu[1].m_Price = 300;
	menu[1].m_Kind = 3;
*/
	/*struct Food menu[6]={
	{"ハンバーグ",800,1}
	{"カルボナーラ"400,2}
		   .
		   .
		   .
		   .
	};

	↑	int array[4]={1,2,3,4};と一緒
	*/

	printf("種類を入力してください\nメイン->1\n麺類->2\nデザート->3\n");
	int kind;
	scanf_s("%d", &kind);
	for (int i = 0; i < 6; i++) {
		if (menu[i].m_Kind == kind) {
			printf("名前:%s 金額:%d円", menu[i].m_Name,menu[i].m_Price);
			//break;	と書くとループを抜け出す
		}
	}
	return 0;
}