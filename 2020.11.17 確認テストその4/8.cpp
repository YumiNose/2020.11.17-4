
#include <iostream>
using namespace std;

int sumEx(int a, int b, int& c)
{
	c = a + b;
	//return c;
}


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << sumEx(3, 5, c) << endl;
	//cout << c << endl;
}

