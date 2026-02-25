#include<iostream>
#include<conio.h> // 키보드

using namespace std;

int Map[10][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

// 플레이어 시작 위치 설정
int PlayerX = 1;
int PlayerY = 1;
int Temp = 0;

int main()
{
	for (;;) // 무한로딩
	{
		for (int Y = 0; Y < 10; Y++)
		{
			for (int X = 0; X < 10; X++)
			{
				if (PlayerX == X && PlayerY == Y) // 캐릭터 지정
				{
						cout << "%";
				}

				else if (Map[Y][X] == 1) // 벽 설정
				{
					cout << "#";
				}
				else if (Map[Y][X] == 0) // 이동 가능 범위
				{
					cout << " ";
				}
			}
			cout << endl;
		}

		Temp = _getch(); // 아무 키나 누를 경우 이동
		
		for (int Y = 0; Y < 10; Y++)
		{
			for (int X = 0; X < 10; X++)
			{
				if (Map[Y][X] == 1) // 이동 가능 범위
				{

					// 대각선 이동을 하려면 else if 대신 if를 써야함.
					if (Temp == 'w') // 아스키 코드 w를 눌러서 -Y값으로 이동
					{
						PlayerY--;
					}

					if (Temp == 'a') // 아스키 코드 a를 눌러서 -X값으로 이동
					{
						PlayerX--;
					}

					if (Temp == 's') // 아스키 코드 s를 눌러서 y값으로 이동
					{
						PlayerY++;
					}

					if (Temp == 'd') // 아스키 코드 d를 눌러서 X값으로 이동
					{
						PlayerX++;
					}

				}
			}
			cout << endl;
		}
		

		system("cls"); // 사용하면 효율적이지는 않지만 깔끔하게 보이도록 사용 위에 맵들을 지워서 변경된 것만 보여줌.
	}


	return 0;
}
// Map[Y][X]가 1이면 Player가 벽으로 이동이 불가능
// -> Map[Y][X]가 0에서만 Player가 동작 