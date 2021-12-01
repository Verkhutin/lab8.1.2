#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Lab8_1_2/lab8_1_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest812
{
	TEST_CLASS(UnitTest812)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[6] = ",s,f,";
			int t = ThirdComma(s, 0, 0);
			Assert::AreEqual(t, 4);
		}
	};
}
