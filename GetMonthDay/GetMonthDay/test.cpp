#define _CRT_SECURE_NO_WARNINGS

Date& operator+=(int day)
{
	//1900-1-1 + 32 |1 - 33 | 33 - 32 = 2 | 1900-2-2
	_day += day;
	// 考虑是否进位
	while (_day > getMonthday(_year, _month))
	{
		_day -= getMonthday(_year, _month);
		++_month;
		//判断当前月份是否合理
		if (_month == 13)
		{
			_month = 1;
			++_year;
		}
	}
	return *this;
}

Date& operator-=(int day)
{
	if (day < 0){
		return *this += -day;
		//return *this
	}
	// 1900-1-1 28 -57 -->1989-12-4
	_day -= day;
	while (_day <= 0){
		--_month;
		if (_month == 0){
			_month = 12;
			--_year;
		}
		_day += getMonthDay(_year, _month);
	}

	return *this;
}