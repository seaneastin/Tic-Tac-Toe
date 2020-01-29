// TicTacToe 2020 assessment for intro to c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
char board[3][3]; // the 2D array that stores the board
bool gameover = false; //keeps the game going untill it is finished
int playernumber = 2; // this allows the game to display the current player
char XorO = 'O'; //switches between X or O used to tell the game what to place in the 2d array
int input = 0; // stores the input of the player
bool validinput = true; //used if we need to make sure the player input a valid input

void start() 
{
	cout << "welcome to tic-tactoe" << endl;
	cout << "controls for this game use the numpad make sure you have num lock enabled" << endl;
	system("pause");


	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			board[x][y] = ' ';
		}
	}
}

void tiegame()
{
	
		cout << "nobody won the game" << endl;
		system("pause");
		gameover = true;
}

void youwon()
{
	cout << "player " << playernumber << " won the game" << endl;
	system("pause");
	gameover = true;

}

bool checkiftiegame()
{
	if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && 
		board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' && 
		board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ')
	{
		return true;
	}
	return false;
}


bool checkifyouwon()
{
	// a weird way to check if you won that somehow works


	for (int y = 0; y < 3 ;y++)
	{
		if (board[0][y] == XorO)
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
		if (board[1][y] == XorO)
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
		if (board[2][y] == XorO)
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
	for (int x = 0; x < 3;x++)
	{
		if (board[x][0] == XorO)
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
		if (board[x][1] == XorO)
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
		if (board[x][2] == XorO)
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
	
	if (board[0][0] == XorO && board[1][1] == XorO && board[2][2] == XorO)
	{
		return true;
	}

	if (board[2][0] == XorO && board[1][1] == XorO && board[0][2] == XorO)
	{
		return true;
	}




	return false;
}

void getcommand() //used to place an X or an O where the player specified
{
	validinput = false;
		cout << "it is currently player" << playernumber << "'s turn now" << endl;
		cout << "please enter a number on the numpad and press enter" << " ";
		cin >> input;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			return;
		}

		//controls for the game
		//board[0][0] '7'  board[0][1] '8'  board[0][2] '9'
		//board[1][0] '4'  board[1][1] '5'  board[1][2] '6' 
		//board[2][0] '1'  board[2][1] '2'  board[2][2] '3'


		switch (input)
		{
		case 7:
			if (board[0][0] == ' ')
			{
				validinput = true;
				board[0][0] = XorO;
			}
			break;
		case 8:
			if (board[0][1] == ' ')
			{
				validinput = true;
				board[0][1] = XorO;
			}
		break;
	case 9:
		if (board[0][2] == ' ')
		{
			validinput = true;
			board[0][2] = XorO;
		}
		break;
	case 4:
		if (board[1][0] == ' ')
		{
			validinput = true;
			board[1][0] = XorO;
		}

		break;
	case 5:
		if (board[1][1] == ' ')
		{
			validinput = true;
			board[1][1] = XorO;
		}

		break;
	case 6:
		if (board[1][2] == ' ')
		{
			validinput = true;
			board[1][2] = XorO;
		}

		break;
	case 1:
		if (board[2][0] == ' ')
		{
			validinput = true;
			board[2][0] = XorO;
		}

		break;
	case 2:
		if (board[2][1] == ' ')
		{
			validinput = true;
			board[2][1] = XorO;
		}

		break;
	case 3:
		if (board[2][2] == ' ')
		{
			validinput = true;
			board[2][2] = XorO;
		}

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
			cout << "|" << board[x][y] << "|";
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
		return;
	}
	
	if (checkiftiegame())
	{
		tiegame();
		return;
	}



	if (playernumber == 1 && validinput)
	{
		playernumber = 2;
		XorO = 'O';
	}
	else if (playernumber == 2 && validinput)
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
