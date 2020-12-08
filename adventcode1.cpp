#include <iostream>
using namespace std;

int main()
{
	int mul=1;
	int n=200;
	int tab[200];
	for (int i = 0; i < n; i++)
	cin >> tab[i];
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			for (int k = j+1; k < n; k++)
			if (tab[i] + tab[j] + tab[k] == 2020) 
			{
				mul= tab[i] * tab[j]*tab[k];
				break;
			}
	cout << endl << mul;
}

