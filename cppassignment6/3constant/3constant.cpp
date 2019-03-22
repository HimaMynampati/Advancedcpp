#include<iostream>
using namespace std;
class MyClass
{
	mutable int x;
	int y;
public:
	MyClass(int a, int b)
	{
		x = a;
		y = b;
	}
	int getX() const
	{
		return x;
	}
	int getY() const
	{
		return y;
	}
	void setXY(int a) const
	{
		x = a;
		//	y=b;   "Gives error since it is not mutable"
	}

};
int main()
{
	int a, b;
	cout << "Enter values for x and y :";
	cin >> a >> b;
	MyClass m(a, b);
	cout << "\nX value before changing is:" << m.getX();
	cout << "\nY value before changing is:" << m.getY();
	cout << "\nEnter modified value for x :";
	cin >> a;
	m.setXY(a);
	cout << "\nX value after changing is:" << m.getX();
	//	cout<<"\nY value after changing is:"<<m.getY();
	system("pause");
	return 0;
}
