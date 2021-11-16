#include <iostream> 
#define Max 20

using namespace std;

int main () 
{
	int m, n;
	int table[Max][Max] = {};

	cout << "pls enter the number of rows" << endl;
	cin >> n;
	cout << "pls enter the number of column" << endl;
	cin >> m;

	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++) 
		{
			table[i][j] = ((i + 1) * (j + 1));
		}
	}

	for(int i = 0 ; i < n ; i++) 
	{
		for (int j = 0 ; j < m ; j++) 
		{
			cout << table[i][j] << "   ";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}
