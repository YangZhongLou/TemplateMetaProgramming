#pragma once

namespace Metalib
{
	template<bool condition, class Then, class Else>
	struct IF
	{
		typedef Then Result;
	};
	// NOTE: specialization
	template<class Then, class Else>
	struct IF<false, Then, Else>
	{
		typedef Else Result;
	};
}

