#define _CRT_SECURE_NO_WARNINGS

#include <graphics.h>
#include <iostream>
using namespace std;


//��������㷨����ͨ�㷨
int BoundaryFill(int x, int y){
	int c = 0;
	c = getpixel(x, y);
	if (c != WHITE){
		putpixel(x, y, WHITE);
	}
	if (c == WHITE)
		return 0;
	//Ϊ��ʵЧ�����ӳ�ʱ��Ŀ�ѭ��
	for (int i = 0; i < 1000000; i++); {
		BoundaryFill(x + 1, y);
		BoundaryFill(x - 1, y);
		BoundaryFill(x, y + 1);
		BoundaryFill(x, y - 1);
	}
}


int main(){
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "");//���ݲ��Խ����ʼ��ͼ�ν���
	int points2[] = { 325, 25, 400, 50, 400, 125, 350, 125, 325, 40, 325, 25 };
	drawpoly(6, points2);
	BoundaryFill(350, 55);//��������㷨
	getchar();
	closegraph();
	return 0;
}