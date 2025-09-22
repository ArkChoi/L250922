#include <iostream>
#include <conio.h>

using namespace std;

//scope (영역) => {이 안쪽을 의미}
int Input();
void Process(int KeyCode);
void Render();

//Globla Value
int MaxSize = 10;

//LoadLevel
int World[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
};

//사상(Mapping)
char Sprites[10] = { ' ', '*', };

//Character
int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

//Playing
bool bIsRunning = true;

//Globla Value End

int main()
{
	//3번 실습
	//frame, deltaseconds
	while (bIsRunning)
	{
		//Input
		int KeyCode = Input();
		//Process, Tick
		Process(KeyCode);

		//Render
		Render();
	}
	return 0;
}

int Input() 
{
	int KeyCode = _getch();
	return KeyCode;
}

//(int input, int Location X, int Location Y)
void Process(int KeyCode) 
{
	switch (KeyCode)
	{
	case 'w':
		PlayerY--;
		break;
	case 'a':
		PlayerX--;
		break;
	case 's':
		PlayerY++;
		break;
	case 'd':
		PlayerX++;
		break;
	case 'q':
		bIsRunning = false;
		break;

	default:
		break;
	}
}

void Render() 
{
	system("cls"); //clear scline?
	//페어링 이슈.. double buffer?
	for (int Y = 0; Y < MaxSize; Y++)
	{
		for (int X = 0; X < MaxSize; X++)
		{
			if (X == PlayerX && Y == PlayerY)
			{
				cout << PlayerShape;
			}
			else if (World[X][Y] == 1)
			{
				cout << Sprites[1];
			}
			else
			{
				cout << Sprites[0];
			}
			cout << ' ';
		}
		cout << "\n";
	}
}