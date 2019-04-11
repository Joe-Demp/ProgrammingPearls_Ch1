#include "stdafx.h"
#include "CppUnitTest.h"
#include "../CrackingTheOyster/Bitmap.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BitmapTests
{		
	TEST_CLASS(BitmapTests1)
	{
	public:
		// Makes sure an empty bitmap behaves normally 
		TEST_METHOD(TestEmptyBitmap)
		{
			Bitmap emptyBm;
			Assert::AreEqual(0, emptyBm.getSize());
		}

		// Adds and removes entries of the Bitmap, checks the contains method and getSize
		/*TEST_METHOD(TestAddRemove)
		{
			Bitmap bm;

			Assert::IsTrue(bm.add(23));
			Assert::IsTrue(bm.add(57));
			Assert::IsTrue(bm.add(99));
			Assert::IsTrue(bm.add(1));

			Assert::AreEqual(4, bm.getSize());
		}*/
	};
}