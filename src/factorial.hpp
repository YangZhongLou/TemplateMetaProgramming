#pragma once

namespace Metalib 
{
	template<int n>
	struct Factorial
	{
		enum { Result = Factorial<n - 1>::Result*n };
	};

	template<>
	struct Factorial<0>
	{
		enum { Result = 1 };
	};
}

