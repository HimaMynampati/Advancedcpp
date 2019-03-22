#include<iostream>
#include "addsub.h"
#include "absoluteaddsub.h"
using namespace std;
using namespace AddSub;
using namespace absoluteAddSub;
int main()
{
	int num1,num2;
	cout << "Enter two numbers to perform addition and subtraction :";
	cin >> num1 >> num2;
	operations_addsub obj1(num1, num2);
	cout<<"\nSum is :"<<obj1.Add();
	cout<<"\nDifference is :"<<obj1.Sub();
	cout << "\nEnter two numbers to perform absolute addition and subtraction :";
	cin >>num1 >> num2;
	operations_absaddsub obj2(num1,num2);
	cout << "\nAbsolute sum is :" << obj2.Add();
	cout << "\nAbsolute difference is :" << obj2.Sub();

	system("pause");
	return 0;

}

