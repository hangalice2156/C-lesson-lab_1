#include <iostream>

using namespace std;

int main (int argc, char const* argv[])
{
	int input = 0;
	cout << "this program will print 3n+1 problem series of numbers" << endl << "please enter a positive integer" << endl;
	cin >> input;
	cout << "result = " << input << " ";
	
	while (1)
	{
		if(input == 1)
		{
			break;
		}
		else
		{
			if (input & 1)
			{
				input = input * 3 + 1;
				cout << input << " ";
			}
			else
			{
				input = input / 2;
				cout << input << " ";
			}
		}
	}
	cout << endl;
	return 0;
}
