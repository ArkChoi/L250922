#include <iostream>

using namespace std;

int main()
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