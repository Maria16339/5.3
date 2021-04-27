#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/5.3/5.3/A.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			A q(3);
			Assert::AreEqual(q.GetX(), 3);
		}
	};
}
