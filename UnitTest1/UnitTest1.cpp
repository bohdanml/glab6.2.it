#include "pch.h"
#include "CppUnitTest.h"
#include "..///glab6.2.it/lab.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace glab
{
    TEST_CLASS(ArrayTests)
    {
    public:

        TEST_METHOD(FindSmallestEvenElement)
        {
            const int n = 10;
            int arr[n] = { 5, 7, 9, 2, -3, 2, 3, 4, 56, -7 };


            int result = findSmallestEvenElement(arr, n);


            Assert::AreEqual(2, result);
        }


    };
}
