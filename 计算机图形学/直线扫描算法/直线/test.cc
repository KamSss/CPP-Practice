#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<windows.h>
#include<graphics.h>
#include<conio.h>
//#include<GL/GL.H>
//#include<gl/glu.h>


//using namespace std;

void MidPLine(int x1, int y1, int x2, int y2){
	int x, y, d0, d1, d2, a, b;
	y = y1;
	a = y1 - y2;
	b = x2 - x1;
	d0 = 2 * a + b;
	d1 = 2 * a;
	d2 = 2 * (a + b);
	for (x = x1; x <= x2; x++){
		putpixel(x, y, 255);
		if (d0 < 0){
			y++;
			d0 += d2;
		}
		else{
			d0 += d1;
		}
	}
}

int main(){
	initgraph(680, 480);
	MidPLine(000, 000, 400, 300);
	_getch();
	closegraph();
	system("pause");
	return 0;
}