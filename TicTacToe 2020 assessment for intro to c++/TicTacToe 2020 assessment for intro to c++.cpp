// TicTacToe 2020 assessment for intro to c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
char tictactoe[3][3];
bool gameover = false;
int playernumber = 2;
int input = 0;
char XorO = 'O';
bool gamestarted = false;

void start()
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			tictactoe[x][y] = ' ';
		}
	}
}

void tiegame()
{
	
		cout << "nobody won the game" << endl;
		cin;
		//gameover = true;
}

void youwon()
{
	cout << "player " << playernumber << " won the game" << endl;
	cin;
	gameover = true;

}

bool checkiftiegame()
{

	return false;
}


bool checkifyouwon()
{
	


	// to check left to right
	for (int y = 0; y < 3 ;y++)
	{
		if (tictactoe[0][y] == XorO)
		{
			if (y == 2)
			{
				return true;
			}
		}
		else {
			break;
		}
	}
	for (int y = 0; y < 3;y++)
	{
		if (tictactoe[1][y] == XorO)
		{
			if (y == 2)
			{
				return true;
			}
		}
		else {
			break;
		}
	}
	for (int y = 0; y < 3;y++)
	{
		if (tictactoe[2][y] == XorO)
		{
			if (y == 2)
			{
				return true;
			}
		}
		else {
			break;
		}
	}
	//to check from top to bottom
	for (int x = 0; x < 3;x++)
	{
		if (tictactoe[x][0] == XorO)
		{
			if (x == 2)
			{
				return true;
			}
		}
		else {
			break;
		}
	}
	for (int x = 0; x < 3;x++)
	{
		if (tictactoe[x][1] == XorO)
		{
			if (x == 2)
			{
				return true;
			}
		}
		else {
			break;
		}
	}
	for (int x = 0; x < 3;x++)
	{
		if (tictactoe[x][2] == XorO)
		{
			if (x == 2)
			{
				return true;
			}
		}
		else {
			break;
		}
	}
	
	return false;
}

void getcommand()
{
		cout << "it is currently player" << playernumber << "'s turn now" << endl;
		cout << "please enter a number on the numpad and press enter player  " << " ";
		cin >> input;
	


		switch (input)
		{
		case 7:
			if (tictactoe[0][0] == ' ')
			{
				tictactoe[0][0] = XorO;
			}
			break;
		case 8:
			if (tictactoe[0][1] == ' ')
			{
				tictactoe[0][1] = XorO;
			}
		break;
	case 9:
		if (tictactoe[0][2] == ' ')
		{
			tictactoe[0][2] = XorO;
		}
		break;
	case 4:
		if (tictactoe[1][0] == ' ')
		tictactoe[1][0] = XorO;
		break;
	case 5:
		if (tictactoe[1][1] == ' ')
		tictactoe[1][1] = XorO;
		break;
	case 6:
		if (tictactoe[1][2] == ' ')
		tictactoe[1][2] = XorO;
		break;
	case 1:
		if (tictactoe[2][0] == ' ')
		tictactoe[2][0] = XorO;
		break;
	case 2:
		if (tictactoe[2][1] == ' ')
		tictactoe[2][1] = XorO;
		break;
	case 3:
		if (tictactoe[2][2] == ' ')
		tictactoe[2][2] = XorO;
		break;
	}




}


void draw()
{
	system("cls");
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << "|" << tictactoe[x][y] << "|";
			if (y == 2)
				cout << endl;
		}
	}
}

void update()
{
	draw();

	if (checkifyouwon())
	{
		youwon();
	}
	
	if (checkiftiegame())
	{
		tiegame();
	}



	if (playernumber == 1)
	{
		playernumber = 2;
		XorO = 'O';
	}
	else if (playernumber == 2)
	{
		playernumber = 1;
		XorO = 'X';
	}

	getcommand();


}



int main()
{
	start();

	while (!gameover)
	{
		update();
	}



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
