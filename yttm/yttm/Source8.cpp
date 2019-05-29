#include<stdio.h>

struct MyRect {
	float m_X;
	float m_Y;
	float m_Width;
	float m_Height;
};

bool IsInside(float posx, float posy, MyRect rect) {
	if ((posx >= rect.m_X && posy >= rect.m_Y) 
		&& (posx <= rect.m_Width + rect.m_X  && posy <= rect.m_Height + rect.m_Y)) {
		return true;
	}
	return false;
}

int main() {
	struct MyRect rect = { 100,50,100,100 }; //x = 200 y = 150
	if (IsInside(150, 200, rect)) {
		printf("true");
	}
	else {
		printf("false");
	}
	
	return 0;
}