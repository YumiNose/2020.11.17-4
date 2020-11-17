/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InitRand()
{
	srand((unsigned int)time(NULL));
}

int Dice()
{
	return rand() % 6 + 1;
}

int main()
{
	

	for (int i = 0; i < 10; ++i)
	{
		InitRand();

		int a = 0;
		cout << "サイコロの数字は何でしょう" << endl;
		cin >> a;

		if (Dice() == a)
		{
			cout << "一致しました！" << endl;
		}
		else
		{
			cout << "残念！" << endl;
		}
	}
}

*/