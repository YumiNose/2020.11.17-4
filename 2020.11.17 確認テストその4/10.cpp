/*
#include <iostream>
#include <ctime>
using namespace std;

int Judgment(int cpu, int player)
{
	int result = 1;
	if ((cpu == 2 && player == 0) || (cpu == 0 && player == 1) || (cpu == 1 && player == 2))
	{
		result = -1;
	}
	else if(player == cpu)
	{
		result = 0;
	}
	return result;
}

void Cout(int t)
{
	switch (t)
	{
	case 0:cout << "�O�[" << endl; break;
	case 1:cout << "�`���L" << endl; break;
	case 2:cout << "�p�[" << endl; break;
	}
}

void resultCout(int r)
{
	switch (r)
	{
	case -1:cout << "���Ȃ��̕����ł�" << endl; break;
	case  0:cout << "���������I������x" << endl << endl; break;
	case  1:cout << "���Ȃ��̏����ł��I" << endl; break;
	}
}

int main()
{
	int player = 0;
	int cpu = 0;
	int result = 0;

	srand((unsigned)time(NULL));

	do
	{
		cpu = rand() % 3;

		cout << "���I��ł�������" << endl;
		cout << "�O�[�F0�@�`���L�F1�@�p�[�F2" << endl;
		cin >> player;

		cout << "���Ȃ����o�������";
		Cout(player);
		cout << endl;

		cout << "cpu�̏o�������";
		Cout(cpu);
		cout << endl;

		result = Judgment(cpu, player);
		resultCout(result);

	}
	while (result == 0);
	{
		return 0;
	}
}

*/