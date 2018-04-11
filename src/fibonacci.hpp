#pragma once

namespace Metalib
{
	template<int n>
	struct Fibonacci
	{
		enum { Result = Fib<n - 1>::Result + Fib<n - 2>::Result };
	};
	template <>
	struct Fibonacci<0>
	{
		enum { Result = 0 };
	};
	template<>
	struct Fibonacci<1>
	{
		enum { Result = 1 };
	};
}