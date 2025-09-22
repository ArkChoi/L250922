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

	cout<< "1~100 의 합 : " << sum << endl;
	cout << "1~100 의 3의 배수 합 : " << SumMultipleofThree << endl;
}