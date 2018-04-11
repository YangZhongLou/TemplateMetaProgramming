#pragma once

#include <factorial.hpp>
#include <iostream>

namespace Test
{
	void TestFactorial()
	{
		std::cout << Metalib::Factorial<10>::Result << std::endl;
	}
}