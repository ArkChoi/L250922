#include <iostream>

using namespace std;

int main()
{
	//1�� �ǽ�
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

	cout<< "1~100 �� �� : " << Sum << endl;
	cout << "1~100 �� 3�� ��� �� : " << SumMultipleofThree << endl;*/

	//2�� �ǽ�
	int MaxValue = 5;
	int CountLoop = 0;

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
	}


	return 0;
}