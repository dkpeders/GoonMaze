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
		cout << "Nice try you big fat poon sack.  You are headed right for the bad stuff." << endl;
	}
	else if (input == 1)
	{
		cout << "I hope you remember every inside joke, it will be the only thing that can save you." << endl;
		cout << "0) Wait, I'm not Nicky" << endl;
		cout << "1) I'll go on but i don't want to see a face!" << endl;
		cin >> input;
		if (input == 0)
		{
			cout << "Really dude? Come on that is getting old" << endl;
			cout << "0) You can't kill the classics" << endl;
			cout << "1) Sorry I like to remember the times before Jack andd Jill" << endl;
			cin >> input;
			if (input == 0)
			{
				cout << "Well he did almost kill Bob Barker" << endl;
				cout << "0) I would have punched that asshole in the face" << endl;
				cout << "1) The price really is wrong, bitch" << endl;
				cin >> input;
			}
		}
		else if (input == 1)
		{
			cout << "OH you'll see a fuckin face!" << endl;
			cout << "0) Yeah, I think I'm ready to puss out now, but this was fun while it lasted" << endl;
			cout << "1) Are we talking a Sinister face or a Ron Jeremy OHH face??" << endl;
			cin >> input;
			if (input == 0)
			{
				cout << "Fuckin A brother. TGK!" << endl;
			}
			else if (input == 1)
			{
				cout << "I mean both seem pretty cool but Ron's busy and Baghul is to at a local day care" << endl;
				cout << "0) Should we do something about the Baghul thing...?" << endl;
				cout << "1) Busy with what? Taking care of that denim salami?" << endl;
				cin >> input;
				if (input == 0)
				{
					cout << "Yeah how well did that go for Ethan Hawke? Too bad he didn't actually die." << endl;
					cout << "He would have at least avoided the Purge." << endl;
					cout << "0) I didn't mind it" << endl;
					cout << "1) How dare you. He's my hero!!" << endl;
					cin >> input;
					if (input == 0 || 1)
					{
						cout << "Well all that matters is that we saw that shit as a family(:" << endl;
					}
				}
				else if (input == 1)
				{
					cout << "Denim salami. I feel like no one will ever call it a penis again. What have we done!" << endl;
					cout << "0) Who cares. Denim salami is fucking hilarious" << endl;
					cout << "1) I do like salami....." << endl;
					cin >> input;
					if (input == 0 || 1)
					{
						cout << "TRUUUU" << endl;
					}
				}
			}
		}
	}
	else
	{
		cout << "invalid option";
	}
	{
		cout << "Ok, no more time for jokes.  Goon HQ is in danger." << endl;
		cout << "You are the only standing Goon, your brothers have fallen, pledge." << endl;
		cout << "Can you save them before time runs out and the Bears take over HQ?!" << endl;
		cout << "Enter 69 and save your brothers!" << endl;
		cin >> input;
		if (input == 69)
		{
			cout << "You approach the doors of Goon HQ." << endl;
			cout << "You are a new pledge." << endl;
			cout << "Where is everyone?" << endl;
			cout << "0) Enter the front door" << endl;
			cout << "1) Walk to the back door" << endl;
			cin >> input;
			if (input == 0)
			{
				cout << "" << endl; // solution for front door
			}
			else if (input == 1)
			{
				cout << "" << endl; // solution for back door
			}
		}
		else
		{
			cout << "invalid option" << endl;
		}
	}
}