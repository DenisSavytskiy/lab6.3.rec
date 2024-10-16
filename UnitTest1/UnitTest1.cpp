#include "pch.h"
#include "CppUnitTest.h"
#include <algorithm>
#include "../AP_Lab№6.3.рек/AP_Lab№6.3.рек.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestRecursiveSort
{
    TEST_CLASS(UnitTestRecursiveSort)
    {
    public:
        TEST_METHOD(TestGenerateArray)
        {
            const int size = 10;
            int arr[size];
            generateArray(arr, size);

            for (int i = 0; i < size; i++) {
                Assert::IsTrue(arr[i] >= -10 && arr[i] <= 35);
            }
        }

        TEST_METHOD(TestSort)
        {
            const int size = 10;
            int arr[size] = { 9, 3, 7, 5, 8, 1, 0, 2, 4, 6 };
            int expected[size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

            Sort(arr, size, 0);

            for (int i = 0; i < size; i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
    };
}