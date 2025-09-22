#include <iostream>
#include <conio.h>

using namespace std;

int Source()
{
	//1번 실습
	/*int Sum = 0;
	int SumMultipleofThree = 0;

	for (int i=1;i<101;i++)
	{
		Sum += i;
		if (i%3==0)
		{
			SumMultipleofThree += i;
		}
	}

	cout<< "1~100 의 합 : " << Sum << endl;
	cout << "1~100 의 3의 배수 합 : " << SumMultipleofThree << endl;*/

	//2번 실습
	/*int MaxValue = 0;
	int CountLoop = 0;
	cin >> MaxValue;

	for (int i=0;i<MaxValue;i++)
	{
		for (int j=0;j<i;j++)
		{
			cout << " ";
		}
		for (int CountValue = MaxValue ; CountValue > CountLoop; CountValue--)
		{
			cout << "*";
		}
		cout << "\n";
		CountLoop++;
	}*/
	//3번 실습
	//int MaxSize = 10;

	////LoadLevel
	//int World[10][10] = {
	//	{1,1,1,1,1,1,1,1,1,1},
	//	{1,0,0,0,0,0,0,0,0,1},
	//	{1,0,0,0,0,0,0,0,0,1},
	//	{1,0,0,0,0,0,0,0,0,1},
	//	{1,0,0,0,0,0,0,0,0,1},
	//	{1,0,0,0,0,0,0,0,0,1},
	//	{1,0,0,0,0,0,0,0,0,1},
	//	{1,0,0,0,0,0,0,0,0,1},
	//	{1,0,0,0,0,0,0,0,0,1},
	//	{1,1,1,1,1,1,1,1,1,1},
	//};

	//int PlayerX = 1;
	//int PlayerY = 1;
	//char PlayerShape = 'P';

	////사상(Mapping)
	//char Sprites[10] = { ' ', '*', };

	//bool bIsRunning = true;

	//while (bIsRunning)
	//{
	//	//Input
	//	int KeyCode = _getch();

	//	//Process
	//	switch (KeyCode)
	//	{
	//	case 'w':
	//		PlayerY--;
	//		break;
	//	case 'a':
	//		PlayerX--;
	//		break;
	//	case 's':
	//		PlayerY++;
	//		break;
	//	case 'd':
	//		PlayerX++;
	//		break;
	//	case 'q':
	//		bIsRunning = false;
	//		break;

	//	default:
	//		break;
	//	}

	//	//Render
	//	system("cls"); //clear scline?
	//	//페어링 이슈.. double buffer?
	//	for (int Y = 0; Y < MaxSize; Y++)
	//	{
	//		for (int X = 0; X < MaxSize; X++)
	//		{
	//			if (X == PlayerX && Y == PlayerY)
	//			{
	//				cout << PlayerShape;
	//			}
	//			else if (World[X][Y] == 1)
	//			{
	//				cout << Sprites[1];
	//			}
	//			else
	//			{
	//				cout << Sprites[0];
	//			}
	//			cout << ' ';
	//		}
	//		cout << "\n";
	//	}
	//}

	//4번째 실습
	//char Chars[6] = {'H','e','l','l','o','\0'};
	/*char Chars[6] = "Hello";

	cout << Chars << endl;

	string String = "Hello";
	cout << String << endl;*/

	return 0;
}