#include <iostream>
#include <conio.h>

using namespace std;

//scope (����) => {�� ������ �ǹ�}
int Input();
void Process(int KeyCode);
void Render();
bool Predict(int NewX, int NewY);

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

//���(Mapping)
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
	//3�� �ǽ�
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
		if (Predict) {
			PlayerY++;
		}
		break;
	case 's':
		PlayerY++;
		if (Predict) {
			PlayerY--;
		}
		break;
	case 'a':
		PlayerX--;
		if (Predict) {
			PlayerX++;
		}
		break;
	case 'd':
		PlayerX++;
		if (Predict) {
			PlayerX--;
		}
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
	//�� �̽�.. double buffer?
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

bool Predict(int NewX, int NewY) 
{
	if (World[NewX][NewY]==1) {
		return true;
	}
	return false;
}