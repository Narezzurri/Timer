#include	<iostream>
#include	<unistd.h>
#define		int		long long
using namespace std;
using db = double;

int m, s;

signed main (void)
{
	cin >> m >> s;
	cout << "\t\t\t\t\t";
	while (~m)
	{
		printf ("\b\b\b\b\b\b\b %03d:%02d", m, s);
		s--;
		if (s < 0)
		{
			s += 60;
			m--;
		}
		sleep (1);
	}
	cout << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "                                       X                                       " << endl;
	cout << "                   XXXXX XXX X   X XXX X XXX    X  X XXX                       " << endl;
	cout << "                     X    X  XX XX X     X      X  X X  X                      " << endl;
	cout << "                     X    X  X X X XXX   XXX    X  X XXX                       " << endl;
	cout << "                     X    X  X   X X       X    X  X X                         " << endl;
	cout << "                     X   XXX X   X XXX   XXX     XX  X                         " << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	m = s = 0;
	cout << "\t\t\t\t\t";
	while (1)
	{
		printf ("\b\b\b\b\b\b\b %03d:%02d", m, s);
		s++;
		if (s >= 60)
		{
			s -= 60;
			m++;
		}
		sleep (1);
	}
	return 0;
}

