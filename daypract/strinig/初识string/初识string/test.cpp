#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void test_string2()
{
	//������ַ���ת������
	string num("1234");

	//string::iterator��һ������ it��һ�����������͵Ķ��� begin��ָ���һ��λ�õĵ����������ĵ���
	string::iterator it = num.begin();
	//end��һ��ָ�����һ�����ݵ���һ���ĵ����������ĵ���
	while (it != num.end())
	{
		cout << *it << " ";
		++it;
	}

	vector<int>::iterator vit = v.begin();
	while (vit != v.end)
	{
		cout << *vit << " ";
		++vit;
	}
	cout << endl;
}
void test_string1()
{
	//string�ļ��ֹ��췽ʽ
	string s;
	string s1("hello");
	string s2(s1);
	string s3 = "world";

	s1 = s3;

	//�˴���cout�Ѿ������سɿ���ֱ�����string����
	cout << s << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
}
int main()
{
	system("pause");
	return 0;
}