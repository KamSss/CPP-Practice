#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//typedef int VDataType;

using namespace std;

//Ŀ�꣺ʹ��ģ�壬ʵ��һ�����Դ洢��ͬ���͵� vector˳���
template<class T>
class Vector
{
public:
	Vector()
		:_a(nullptr)
		, _capacity(0)
		, _size(0)
	{}

	~Vector()
	{
		if (_a)
		{
			//���aΪ�� �ͷſռ�
			delete[] _a;
			_size = _capacity = 0;
		}
	}

	void PushBack(const T& value)
	{
		if (_size == _capacity)
		{
			//���ݲ�һ���Ƕ��� ���Ƕ�����1.���ٿ��ٵĴ��� 2.����һ�ο���̫�� 
			size_t newcapacity = _capacity == 0 ? 3 : _capacity;
			T* tmp = new T[newcapacity];
			if (_a)
			{
				memcpy(tmp, _a, sizeof(T)*_size);
				delete[] _a;
			}

			//_aΪ�յ�ʱ����Ҫ��
			_a = tmp;

			_capacity = newcapacity;
		}

		_a[_size] = value;
		_size++;
	}

	//��δ�ӡVector�� ����дһ��print��ӡ���� ����������������
	//���ǰ�[]���������� ʹ������������һ������[]����ʽ��ӡ Ҳ������˳�������鱾�ʺ���
	T operator[](size_t pos)
	{
		return _a[pos];
	}

	size_t Size()
	{
		return _size;
	}
private:
	T* _a;
	size_t _size;
	size_t _capacity;
};

int main()
{
	//Vector v1;
	//Vector v2;

	Vector<int> v1;
	v1.PushBack(1);
	v1.PushBack(2);
	v1.PushBack(3);
	v1.PushBack(4);

	for (size_t i = 0; i < v1.Size(); ++i)
	{
		cout << v1[i] << " ";
		//ʵ����ת����cout << v1.operator[](i) << " ";
	}
	cout << endl;
	Vector<double> v2;

	system("pause");
	return 0;
}
