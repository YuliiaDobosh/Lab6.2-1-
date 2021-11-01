#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.2\Lab6.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 0,1,2,3};
			int max = Max(a, 4);
			Assert::AreEqual(3, max);

		}
	};
}
