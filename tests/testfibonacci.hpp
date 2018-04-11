#pragma once

#include <iostream>
#include <fibonacci.hpp>

namespace Test
{
	void TestFibonacci()
	{
		std::cout << Metalib::Fibonacci<10>::Result << std::endl;
	}
}