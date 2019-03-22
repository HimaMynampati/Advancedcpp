#include<iostream>
using namespace std;
/*int Add(int x, int y)
{
	return x + y;
}
int Mul(int x, int y)
{
	return x*y;
}
int operate(int x, int y, int(*f)(int, int))
{
	return (*f)(x, y);
}*/

class operate
{
public:
	operate() {};
	virtual int operator()(int, int) = 0;

};
class Add :public operate
{
public:
	Add() {
	}
	int operator()(int x, int y)
	{
		return x + y;
	}
};
class Mul :public operate
{
public:
	Mul() {
	}
	 int operator()(int x, int y)
	{
		return x * y;
	}
};
int operate_fun(int x, int y, operate *obj)
{
	return (*obj)(x, y);
}
int main()
{
	int num1, num2;
	cout << "Enter two numbers";
	cin >> num1>> num2;
	operate *obj1 = new Add();
	operate *obj2 = new Mul();
	cout << "\nResult of Addition is :" << operate_fun(num1, num2, obj1);
	cout << "\nResult of Multiplition is :" << operate_fun(num1, num2, obj2);
	cout << endl;
	/*cout << "\nResult of Addition is :" << operate(num1, num2, Add);
	cout << "\nResult of Multiplition is :" << operate(num1, num2, Mul);*/
	system("pause");
	return 0;
}