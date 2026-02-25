#include<iostream>

using namespace std;

int main()
{
	// A -> 65, Mapping, Item -> 1 Mapping
	// 2차원 배열을 사용하는 곳 -> 퍼즐 or 맵

	int Inventory[100] = { 0, };
	int TotalPrice = 0;
	int ProductPrice[100] = { 0, };
	int MyCartCount = 0;

	ProductPrice[MyCartCount] = 10000;
	MyCartCount++;
	ProductPrice[MyCartCount] = 11000;
	MyCartCount++;
	ProductPrice[MyCartCount] = 12000;
	MyCartCount++;
	ProductPrice[MyCartCount] = 13000;
	MyCartCount++;


	for (int i = 0; i < 100; i++)
	{
		TotalPrice += ProductPrice[i];
	}

	cout << TotalPrice << endl;
	return 0;
}