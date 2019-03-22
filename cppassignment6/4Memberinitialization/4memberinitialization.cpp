#include<iostream>
using namespace std;
class MyClass1
{
	const int x;
	const int y;

public:
	
	MyClass1(int a, int b):x(a),y(b)
	{
		cout << "\nValue of First number is :"<<x <<"\nValue of second number is :"<< y;
	}
	/*int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}*/
};
class MyClass2 
{
public:

	MyClass1 class1;
	MyClass2(int a, int b) :class1(a,b)
	{
	}
};
int main()
{
	int a, b;
	cout << "Enter two numbers :";
	cin >> a >> b;
	MyClass2 m(a, b);
//	cout<<"\nFirst number is :"<<m.getX();
//	cout<<"\nSecond number is :"<<m.getY();
	cout << endl;
	system("pause");
	return 0;

}