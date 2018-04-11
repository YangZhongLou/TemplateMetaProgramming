#pragma once

#include <if.hpp>
#include <iostream>

namespace Test
{
	void TestIf()
	{
		// Usage:
		Metalib::IF<(1 + 2 > 4), short, int>::Result a;
		Metalib::IF<(1 + 5 > 4), short, int>::Result b;

		std::cout << "size of int:" << sizeof(int) << std::endl;
		std::cout << "size of short:" << sizeof(short) << std::endl << std::endl;

		std::cout << "size of a:" << sizeof(a) << std::endl;
		std::cout << "size of b:" << sizeof(b) << std::endl;
	}
}