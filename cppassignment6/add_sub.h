#include<iostream>
namespace AddSub
{
	int left;
	int right;
	class operations_addsub
	{
		int result;
	public:
		operations_addsub(int l, int r)
		{
			left = l;
			right = r;
		}
		int Add()
		{
			result = left + right;
			return result;
		}
		int Sub()
		{
			result = left - right;
			return result;
		}
	};
}