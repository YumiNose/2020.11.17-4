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
	case 0:cout << "グー" << endl; break;
	case 1:cout << "チョキ" << endl; break;
	case 2:cout << "パー" << endl; break;
	}
}

void resultCout(int r)
{
	switch (r)
	{
	case -1:cout << "あなたの負けです" << endl; break;
	case  0:cout << "あいこだ！もう一度" << endl << endl; break;
	case  1:cout << "あなたの勝ちです！" << endl; break;
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

		cout << "手を選んでください" << endl;
		cout << "グー：0　チョキ：1　パー：2" << endl;
		cin >> player;

		cout << "あなたが出した手は";
		Cout(player);
		cout << endl;

		cout << "cpuの出した手は";
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