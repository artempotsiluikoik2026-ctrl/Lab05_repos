
#include "pch.h"
#include "CppUnitTest.h"
#include "../ЛР 5.1/ЛР 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = g(2, 3);
			Assert::AreEqual(t, 19.0);
		}
	};
}