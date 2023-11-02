#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
				t = h(1);
				Assert::AreEqual(t, 1.19225, 0.00001);
		}
	};
}
