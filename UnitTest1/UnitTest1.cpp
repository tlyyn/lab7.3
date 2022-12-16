#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7.3/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int** arr = new int* [2];
			arr[0] = new int[3] { 3, 0, 1 };
			arr[1] = new int[3] { -40, 0, 0 };

			int count_zeros = FindIndexMaxZerosRows(arr, 2, 3);
			Assert::AreEqual(1, count_zeros);
		}
	};
}