#include<iostream>
using namespace std;
class pwr
{
	double base;
	int exponent;
	double result;
public:
	pwr(double b, int e)
	{
		base = b;
		exponent = e;
		result = 1;
		for (; exponent != 0; exponent--)
		{
			result = base*result;
		}
	}
	double operator+(pwr obj)
	{
		double res_val = result + obj.result;
		cout << "\noperator overloading function is called\n";
		return res_val;
	}
	operator double()
	{
		cout << "\nconversion function is called\n";
		return result;
	}

};
int main()
{
	double sum_twoobjects, sum_objectvalue;
	double base1, base2;
	int exp1, exp2;
	cout << "Enter base and exp of first power :";
	cin >> base1 >> exp1;
	cout << "\nEnter base and exp of second power";
	cin >> base2 >> exp2;
	pwr obj1(base1, exp1), obj2(base2, exp2);
	sum_twoobjects = obj1 + obj2;
	cout << "\nSum of two powers is :" << sum_twoobjects;
	sum_objectvalue = obj1 + 10.0;
	cout << "\nSum of a power object and 10.0 is :" << sum_objectvalue;
	system("pause");
	return 0;
}