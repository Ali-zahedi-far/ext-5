#include <iostream>
#define Max 20

using namespace std;

int Pascal (int x , int y) 
{
	if (y == 1 || y == x||x==2||x==1) return 1;

	else return (Pascal(x - 1, y) + Pascal(x - 1, y - 1));
}


int main () 
{
	int n;
	int Pas[Max][Max] = {};

	cout << "pls enter the number of rows u wanted to be calculated" << endl;
	cin >> n;

	for(int i = 0 ; i < n ; i++) 
	{
		for(int j = 0 ; j < i+1 ; j++) 
		{
			Pas[i][j] = Pascal(i + 1, j + 1);
		}
	}

	for(int i = 0 ; i < n ; i ++) 
	{
		for(int j = 0 ; j < i+1 ; j++) 
		{
			cout << Pas[i][j] << "   ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}