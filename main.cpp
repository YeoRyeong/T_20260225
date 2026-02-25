// 2026.02.25 김석준
#include<iostream>

using namespace std;

int Sum(int a, int b) // 더하기
{
	return a + b;
}

int Difference(int a, int b) // 빼기
{
	return a - b;
}

int Product(int a, int b) // 곱하기
{
	return a * b;
}

int Quotient(int a, int b) // 나누기
{
	return a / b;
}

int Remainder(int a, int b) // 나머지
{
	return a % b;
}

int main()
{
	int Number1;
	int Number2;

	cin >> Number1;
	cin >> Number2;

	cout << Sum(Number1, Number2) << endl;
	cout << Difference(Number1, Number2) << endl;
	cout << Product(Number1, Number2) << endl;
	cout << Quotient(Number1, Number2) << endl;
	cout << Remainder(Number1, Number2) << endl;

	return 0;
}