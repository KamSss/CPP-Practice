#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>

//1.访问限定符和封装的例子
class SeqList{
	//在类外可以访问
public:
	void PushBack(int x){

	}
	//在类外不可访问
private:
	int* _a;
	size_t _size;
	size_t _capacity;
};

//此函数测试在类外是否可以访问public和private类
int main(){
	//创建一个SeqList类型的对象，C语言里叫变量，CPP叫对象，称谓不同。
	SeqList s;
	//访问public，成功
	s.PushBack(1);
	//访问private，失败，说明不可在类外访问
	//s._size++;
	system("pause");
	return 0;
}

//2.类的实例化例子
class SeqList{
public:
	//这是类里面的函数定义
	void PushBack(int x);

private:
	int* _a;			//这是声明
	size_t _size;
	size_t _capacity;
};

//类外面定义，要加作用域声明::  表示它是属于seqlist这个类的
void SeqList::PushBack(int x)
{}

int main(){
	return 0;
}
