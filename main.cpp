#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int SumMultipleofThree = 0;

	for (int i=1;i<101;i++) 
	{
		sum += i;
		if (i%3==0) 
		{
			SumMultipleofThree += i;
		}
	}

	cout<< "1~100 �� �� : " << sum << endl;
	cout << "1~100 �� 3�� ��� �� : " << SumMultipleofThree << endl;
}