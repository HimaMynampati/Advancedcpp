#pragma once
#include<iostream>
namespace absoluteAddSub
{
	int left_abs;
	int right_abs;
	class operations_absaddsub
	{
		int result;
	public:
		operations_absaddsub(int l, int r)
		{
			if (l >= 0)
				left_abs = l;
			else
				left_abs = -l;
			if (r >= 0)
				right_abs = r;
			else
				right_abs = -r;
		}
		int Add()
		{
			result = left_abs + right_abs;
			return result;
		}
		int Sub()
		{
			result = left_abs - right_abs;
			return result;
		}
	};
}