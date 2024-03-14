#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_8.1(char)/PR_8.1(char).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char testString1[] = "pp SQ pp QS";
			Assert::AreEqual(2, Count(testString1));
			Assert::AreEqual(0, strcmp(Change(testString1), "pp *** pp ***"));

			char testString2[] = "SQSQ";
			Assert::AreEqual(3, Count(testString2));
			Assert::AreEqual(0, strcmp(Change(testString2), "******"));
		}
	};
}
