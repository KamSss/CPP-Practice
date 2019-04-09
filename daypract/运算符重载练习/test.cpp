class Date{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
    
    //用this可以避免在外部无法突破封装使用私有对象的问题
	bool Equal(const Date& d2)
	{
		return this->_year == d2._year
			&& this->_month == d2._month
			&& this->_day == d2._day;
	}
    
    //用this可以避免在外部无法突破封装使用私有对象的问题
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

//很多人看不懂Equal 这样写没有可读性
//不能突破封装
//bool Equal(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}

//这样突破不了封装
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

	//加括号是因为==的优先级比较高
	//cout << d1.Equal(d2) << endl;
	cout << (d1 == d2) << endl;//可读性

	system("pause");
	return 0;
}