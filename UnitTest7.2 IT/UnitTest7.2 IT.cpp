#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 7.2 IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72IT
{
    TEST_CLASS(UnitTest72IT)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int n = 2;  // ����� �������

            // ��������� ���������� ������ 2x2
            int** a = new int* [n];
            for (int i = 0; i < n; i++)
                a[i] = new int[n];

            // ����������� �������� �������
            a[0][0] = -5; a[0][1] = 0;
            a[1][0] = 0;  a[1][1] = -3;

            // �������� ���� ������� �������: -5 + (-3) = -8
            int sum = SumMainDiagonal(a, n);
            Assert::AreEqual(-8, sum);  // �������� ����������� ����������

            // ��������� ���'��
            for (int i = 0; i < n; i++)
                delete[] a[i];
            delete[] a;
        }
    }
};
