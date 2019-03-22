#include<iostream>
using namespace std;
typedef float total_t;
typedef int roll_t;
typedef double avg_t;
roll_t get_rollnumber(int roll_no)
{
	return roll_no;
}
total_t get_total(total_t total)
{
	return total;
}
avg_t get_avg(total_t total, int n)
{
	avg_t avg;
	avg = total / n;
	return avg;
}
int main()
{
	roll_t roll_no;
	total_t total;
	int no_subjects;
	cout << "\nEnter Roll Number :";
	cin >> roll_no;
	cout << "\nEnter total marks :";
	cin >> total;
	cout << "\nEnter number of subjects :";
	cin >> no_subjects;
	cout << "Roll Number :" << get_rollnumber(roll_no);
	cout << "\nTotal Marks :" << get_total(total);
	cout << "\nAverage Marks :" << get_avg(total, no_subjects);
	cout << endl;
	system("pause");

}
