#define _CRT_SECURE_NO_WARNINGS

#include "List.h"

void TestList()
{
	List<int> lst;
	lst.PushBack(1);
	lst.PushBack(2);
	lst.PushBack(3);
	lst.PushBack(4);

	auto lit = lst.begin();
	//����ַ������ͷ��ʱ�� ѭ������
	//!=��*����++���ǵ��õ��������غ��
	while (lit != lst.end()){
		cout << *lit << " ";
		++lit;
	}
}

int main()
{
	TestList();

	system("pause");
	return 0;
}