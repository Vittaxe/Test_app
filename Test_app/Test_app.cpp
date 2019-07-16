// Test_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void Part1()
{
	SetConsoleTitle(TEXT("Test area")); // a code for the name of the console window

	string intro("Hello, this is something like a test-area, it is not much, but it is something.");
	cout << intro << endl;

	string strName;
	bool bRejected = true;
	cout << "Please state your name: ";
	while (bRejected)
	{
		getline(cin, strName);
		for (unsigned int nIndex = 0; nIndex < strName.length(); ++nIndex)
		{
			if (!(isalpha(strName[nIndex]) || strName[nIndex] == ' ')) {
				bRejected = true;
				cout << "Try again: ";
				break;
			}
			else bRejected = false;
		}
	}
	cout << "Welcome " + strName + ", it ain't much of coding, but it is honest work." << endl;

	system("PAUSE");
	system("CLS");

	int AlphabetNumber;

	while (2)
	{
		cout << "How many letters are there in the English alphabet?\n";
		cin >> AlphabetNumber;

		if (cin.fail()) // no extraction took place
		{
			cin.clear(); // reset the state bits back to goodbit so we can use ignore()
			cin.ignore(32767, '\n'); // clear out the bad input from the stream
			continue; // try again
		}

		if (AlphabetNumber == 26) // make sure nAge is positive
		{
			cout << "Yeah, it is true, there are twenty-six, did You know that in the Arabic, there are 28 letters.\n";
			break;
		}
		else
		{
			cout << "No, it is not, but good try." << endl;
		}

		break;
	}

	system("PAUSE");
	system("CLS");
}

void Part2()
{
	SetConsoleTitle(TEXT("Testing area 2"));

	cout << "This is the area for the numbers, it should behave nice, should...\n";

	int theanswer;
	do 
	{
		cout << "Please provide an answer to the ultimate question of them all.\n"; cin >> theanswer; // You can loop this place by inputting the char or string value, please do not, for the love of god.

		switch (theanswer)
		{
		case 42:
			cout << "That is indeed the answer for the ultimate question of them all." << endl;
			break;
		default:
			cout << "Nope, it is not, try again." << endl;
			break;
		}
	} while (theanswer !=42);


	system("PAUSE");
	system("CLS");

	cout << "Let us proceed further, shall we.\n";

	cout << "A little training about the logical operators. Most probably no one would see what is inside, but still." << endl;

	cout << ((42 == 42) && (42 > 47)) << endl; // should be 0, since one of the statements lie

	cout << ((42 == 42) || (43 < 42)) << endl; // should be 1, since one of the statements is true

	cout << true << endl; //should be 1 because true is 1

	cout << !true << endl; // should be 0 because ! is like not

	cout << ((42 == 42) || (40 > 41) && (40 < 42) || (43 == 42)) << endl; // should be 1, since one of the statements is true


	int result = 5 == 2 ? 42 : 47; // should be 47, since 5 does not equal to 2

	cout << result << endl; 

	int result1 = 10 >= 7 ? 1 : 0; // should be 1, since 10 is more than 7

	cout << result1 << endl;

	int result2 = 36 <= (9 * 10) - 60 ? 1 : 0; // should be 1
	cout << result2 << endl;

	cout << "Let's play around with the numbers, a bit.\n" << endl;

	int a1, b1;

	a1 = (b1 = 7, b1 + 20);

	cout << a1 + (a1+b1) << endl; // the answer is 61 because a1 = 7 + 20, and after that it is 20 + 7 + another 7, since b1 is 7, complicated stuff, but looks nice

	float a2 = 4.2f;

	cout << int(a2) << endl; // should display 4 due to the typecasting
}

int main()
{
	Part1();
	Part2();
	return 0;
}


//int a;

//do
//{
//	cin >> a; if (cin.fail()) { cout << "try again" << endl; cin.clear(); }
//	
//}
//while (!cin.fail());

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
