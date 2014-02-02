#include<iostream>

using namespace std;

int main()
{
	cout << "Welcome to the Goon Maze! You may either:" << endl;
	cout << "0) Puss Out" << endl;
	cout << "1) Proceed" << endl;
	int input;
	cin >> input;
	if (input == 0)
	{
		cout << ""; //return for ending possibly create an alternate ending
	}
	else if (input == 1)
	{
		cout << "I hope you remember every inside joke, it will be the only thing that can save you." << endl;
		cout << "0) Wait, I'm not Nicky" << endl;
		cout << "1) I'll go on but i don't want to see a face!" << endl;
		int input;
		cin >> input;
		if (input == 0)
		{
			cout << "Really dude? Come on that is getting old" << endl;
			cout << "0) You can't kill the classics" << endl;
			cout << "1) Sorry I like to remember the times before Jack andd Jill" << endl;
		}
		else if (input == 1)
		{
			cout << "OH you'll see a fuckin face!" << endl;
			cout << "0) Yeah, I think I'm ready to puss out now, but this was fun while it lasted" << endl;
			cout << "1) Are we talking a Sinister face or a Ron Jeremy OHH face??" << endl;
			int input;
			cin >> input;
			if (input == 0)
			{
				cout << "Fuckin A brother. TGK!" << endl;
			}
			else if (input == 1)
			{
				cout <<
			}
		}
	}
	else
	{
		cout << "invalid option";
	}
}