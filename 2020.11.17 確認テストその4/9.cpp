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
		cout << "�T�C�R���̐����͉��ł��傤" << endl;
		cin >> a;

		if (Dice() == a)
		{
			cout << "��v���܂����I" << endl;
		}
		else
		{
			cout << "�c�O�I" << endl;
		}
	}
}

*/