#include <iostream>
#include <string>

#define Max 100

using namespace std;

int main () 
{
	int words = 1;
	string Sentence;

	cout << "pls enter ur sentence" << endl;
	getline(cin, Sentence);

	for (int i = 0; i < Sentence.length(); i++)
	{
		if (Sentence[i] == char(32)) 
		{
			words++;
			int j = i + 1;
			while(Sentence[j]== char(32)) 
			{
				i++;
				j++;
			}
		}
	}

	cout << words << endl;

	system("pause");
	return 0;
}