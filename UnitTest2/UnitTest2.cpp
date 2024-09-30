#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f(1, 3, 5);
		}
	};
}
