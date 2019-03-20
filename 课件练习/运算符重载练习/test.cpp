class Date{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
    
    //��this���Ա������ⲿ�޷�ͻ�Ʒ�װʹ��˽�ж��������
	bool Equal(const Date& d2)
	{
		return this->_year == d2._year
			&& this->_month == d2._month
			&& this->_day == d2._day;
	}
    
    //��this���Ա������ⲿ�޷�ͻ�Ʒ�װʹ��˽�ж��������
	bool operator==(const Date& d2)
	{
		return this->_year == d2._year
			&& this->_month == d2._month
			&& this->_day == d2._day;
	}
private:
	int _year;
	int _month;
	int _day;
};

//�ܶ��˿�����Equal ����дû�пɶ���
//����ͻ�Ʒ�װ
//bool Equal(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}

//����ͻ�Ʋ��˷�װ
//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
int main()
{
	Date d1(2019, 1, 1);
	Date d2(2019, 1, 0);

	//����������Ϊ==�����ȼ��Ƚϸ�
	//cout << d1.Equal(d2) << endl;
	cout << (d1 == d2) << endl;//�ɶ���

	system("pause");
	return 0;
}