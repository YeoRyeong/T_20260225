#include<iostream>

using namespace std;

int main()
{
	int Array[10] = {0,};

	for (int i = 0; i < 10; i++)
	{
		Array[i] = i + 1;
		cout << Array[i] << endl;
	}

	return 0;
}