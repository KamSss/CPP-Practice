#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>

//1.�����޶����ͷ�װ������
class SeqList{
	//��������Է���
public:
	void PushBack(int x){

	}
	//�����ⲻ�ɷ���
private:
	int* _a;
	size_t _size;
	size_t _capacity;
};

//�˺��������������Ƿ���Է���public��private��
int main(){
	//����һ��SeqList���͵Ķ���C������б�����CPP�ж��󣬳�ν��ͬ��
	SeqList s;
	//����public���ɹ�
	s.PushBack(1);
	//����private��ʧ�ܣ�˵���������������
	//s._size++;
	system("pause");
	return 0;
}

//2.���ʵ��������
class SeqList{
public:
	//����������ĺ�������
	void PushBack(int x);

private:
	int* _a;			//��������
	size_t _size;
	size_t _capacity;
};

//�����涨�壬Ҫ������������::  ��ʾ��������seqlist������
void SeqList::PushBack(int x)
{}

int main(){
	return 0;
}
