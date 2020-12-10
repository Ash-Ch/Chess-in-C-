// ConsoleApplication14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<sstream>
#include<cmath>
#include<Windows.h>
#include<ctype.h>
#include<string>
#include<conio.h>
#include<fstream>
using namespace std;

int king_checked(int currentplayer, char board[8][8]) {
	int r, c, row, col, flag = 0;
	if (currentplayer == 2) {
		for (row = 0; row < 8; row++) {
			for (col = 0; col < 8; col++) {
				if (board[row][col] == 'K') {
					flag = 1;
					break;
				}
			}
			if (flag == 1)
				break;
		}

		r = row;
		c = col;
		if (board[r + 1][c + 1] == 'p') {

			return 1;
		}
		if (board[r + 1][c - 1] == 'p') {

			return 1;
		}
		else {
			r = row - 1;
			c = col;

			do
			{
				if (board[r][c] == 'q' || board[r][c] == 'r')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				r--;
			} while (r >= 0);


			//South Check
			r = row + 1;
			c = col;
			do
			{
				if (board[r][c] == 'q' || board[r][c] == 'r')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				r++;
			} while (r < 8);

			// East Check
			r = row;
			c = col + 1;
			do
			{
				if (board[r][c] == 'q' || board[r][c] == 'r')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c++;
			} while (c < 8);

			// West Check
			r = row;
			c = col - 1;
			do
			{
				if (board[r][c] == 'q' || board[r][c] == 'r')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c--;
			} while (c >= 0);


			// North-West Check
			r = row - 1;
			c = col - 1;
			do
			{
				if (board[r][c] == 'q' || board[r][c] == 'b')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c--;
				r--;
			} while (c >= 0 && r >= 0);


			// North-East Check
			r = row - 1;
			c = col + 1;
			do
			{
				if (board[r][c] == 'q' || board[r][c] == 'b')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c++;
				r--;
			} while (c < 8 && r >= 0);


			// South-West Check
			r = row + 1;
			c = col - 1;
			do
			{
				if (board[r][c] == 'q' || board[r][c] == 'b')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c--;
				r++;
			} while (c >= 0 && r < 8);


			// South-East Check
			r = row + 1;
			c = col + 1;
			do
			{
				if (board[r][c] == 'q' || board[r][c] == 'b')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c++;
				r++;
			} while (c < 8 && r < 8);

			r = row;
			c = col;
			if (board[r + 2][c + 1] == 'n')
			{

				return 1;
			}
			else if (board[r + 2][c - 1] == 'n')
			{

				return 1;
			}
			else if (board[r - 2][c + 1] == 'n')
			{

				return 1;
			}
			else if (board[r - 2][c - 1] == 'n')
			{

				return 1;
			}
			else if (board[r + 1][c + 2] == 'n')
			{

				return 1;
			}
			else if (board[r + 1][c - 2] == 'n')
			{

				return 1;
			}
			else if (board[r - 1][c + 2] == 'n')
			{

				return 1;
			}
			else if (board[r - 1][c - 2] == 'n')
			{

				return 1;
			}

			return 0;


		}

	}

	if (currentplayer == 1) {
		for (row = 7; row >= 0; row--) {
			for (col = 7; col >= 0; col--) {
				if (board[row][col] == 'k') {
					flag = 1;
					break;
				}
			}
			if (flag == 1)
				break;
		}

		r = row;
		c = col;
		if (board[r - 1][c + 1] == 'P') {

			return 1;
		}
		if (board[r - 1][c - 1] == 'P') {

			return 1;
		}
		else {
			r = row - 1;
			c = col;

			do
			{
				if (board[r][c] == 'Q' || board[r][c] == 'R')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				r--;
			} while (r >= 0);


			//South Check
			r = row + 1;
			c = col;
			do
			{
				if (board[r][c] == 'Q' || board[r][c] == 'R')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				r++;
			} while (r < 8);

			// East Check
			r = row;
			c = col + 1;
			do
			{
				if (board[r][c] == 'Q' || board[r][c] == 'R')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c++;
			} while (c < 8);

			// West Check
			r = row;
			c = col - 1;
			do
			{
				if (board[r][c] == 'Q' || board[r][c] == 'R')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c--;
			} while (c >= 0);


			// North-West Check
			r = row - 1;
			c = col - 1;
			do
			{
				if (board[r][c] == 'Q' || board[r][c] == 'B')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c--;
				r--;
			} while (c >= 0 && r >= 0);


			// North-East Check
			r = row - 1;
			c = col + 1;
			do
			{
				if (board[r][c] == 'Q' || board[r][c] == 'B')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c++;
				r--;
			} while (c < 8 && r >= 0);


			// South-West Check
			r = row + 1;
			c = col - 1;
			do
			{
				if (board[r][c] == 'Q' || board[r][c] == 'B')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c--;
				r++;
			} while (c >= 0 && r < 8);


			// South-East Check
			r = row + 1;
			c = col + 1;
			do
			{
				if (board[r][c] == 'Q' || board[r][c] == 'B')
				{

					return 1;
				}
				else if (board[r][c] != ' ')
				{
					break;
				}
				c++;
				r++;
			} while (c < 8 && r < 8);

			r = row;
			c = col;
			if (board[r + 2][c + 1] == 'N')
			{

				return 1;
			}
			else if (board[r + 2][c - 1] == 'N')
			{

				return 1;
			}
			else if (board[r - 2][c + 1] == 'N')
			{

				return 1;
			}
			else if (board[r - 2][c - 1] == 'N')
			{

				return 1;
			}
			else if (board[r + 1][c + 2] == 'N')
			{

				return 1;
			}
			else if (board[r + 1][c - 2] == 'N')
			{

				return 1;
			}
			else if (board[r - 1][c + 2] == 'N')
			{

				return 1;
			}
			else if (board[r - 1][c - 2] == 'N')
			{

				return 1;
			}

			return 0;


		}

	}
	return 0;
}

string board_0(char board[8][8], int i, int j) {
	if (board[i][j] == 'p' || board[i][j] == 'P') {
		return "Pawn";
	}
	if (board[i][j] == 'r' || board[i][j] == 'R') {
		return "Rook";
	}
	if (board[i][j] == 'n' || board[i][j] == 'N') {
		return "Knight";
	}
	if (board[i][j] == 'b' || board[i][j] == 'B') {
		return "Bishop";
	}
	if (board[i][j] == 'q' || board[i][j] == 'Q') {
		return "Queen";
	}
	if (board[i][j] == 'k' || board[i][j] == 'K') {
		return "King";
	}
	return " ";
}

bool board_my_piece(int cr, int ccl, int fr, int fcl, char board[8][8]) {

	if (board[cr][ccl] == 'r' || board[cr][ccl] == 'p' || board[cr][ccl] == 'b' || board[cr][ccl] == 'q' || board[cr][ccl] == 'n' || board[cr][ccl] == 'k') {
		if (board[fr][fcl] == 'p' || board[fr][fcl] == 'r' || board[fr][fcl] == 'b' || board[fr][fcl] == 'q' || board[fr][fcl] == 'n' || board[fr][fcl] == 'k') {

			return false;
		}
	}
	if (board[cr][ccl] == 'R' || board[cr][ccl] == 'P' || board[cr][ccl] == 'B' || board[cr][ccl] == 'Q' || board[cr][ccl] == 'N' || board[cr][ccl] == 'K') {
		if (board[fr][fcl] == 'P' || board[fr][fcl] == 'R' || board[fr][fcl] == 'B' || board[fr][fcl] == 'Q' || board[fr][fcl] == 'N' || board[fr][fcl] == 'K') {

			return false;
		}
	}
	return true;
}

void display(char board[8][8]) {

	char s = 219;
	char displayBoard[38][53] = {

	{' ', ' ', ' ', ' ', ' ', ' ', ' ', 'A', ' ', ' ', ' ', ' ', ' ', 'B', ' ', ' ', ' ', ' ', ' ', 'C', ' ', ' ', ' ', ' ', ' ', 'D', ' ', ' ', ' ', ' ', ' ', 'E', ' ', ' ', ' ', ' ', ' ', 'F', ' ', ' ', ' ', ' ', ' ', 'G', ' ', ' ', ' ', ' ', ' ', 'H', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', s  , s  , s  , s  , s  , s  , s  ,  s , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', '0', ' ', s  , ' ', ' ', board[0][0], ' ', ' ', s  , ' ', ' ', board[0][1], ' ', ' ', s  , ' ', ' ', board[0][2], ' ', ' ', s  , ' ', ' ', board[0][3], ' ', ' ', s  , ' ', ' ', board[0][4], ' ', ' ', s  , ' ', ' ', board[0][5], ' ', ' ', s  , ' ', ' ', board[0][6], ' ', ' ', s  , ' ', ' ', board[0][7], ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', '1', ' ', s  , ' ', ' ', board[1][0], ' ', ' ', s  , ' ', ' ', board[1][1], ' ', ' ', s  , ' ', ' ', board[1][2], ' ', ' ', s  , ' ', ' ', board[1][3], ' ', ' ', s  , ' ', ' ', board[1][4], ' ', ' ', s  , ' ', ' ', board[1][5], ' ', ' ', s  , ' ', ' ', board[1][6], ' ', ' ', s  , ' ', ' ', board[1][7], ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', '2', ' ', s  , ' ', ' ', board[2][0], ' ', ' ', s  , ' ', ' ', board[2][1], ' ', ' ', s  , ' ', ' ', board[2][2], ' ', ' ', s  , ' ', ' ', board[2][3], ' ', ' ', s  , ' ', ' ', board[2][4], ' ', ' ', s  , ' ', ' ', board[2][5], ' ', ' ', s  , ' ', ' ', board[2][6], ' ', ' ', s  , ' ', ' ', board[2][7], ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', '3', ' ', s  , ' ', ' ', board[3][0], ' ', ' ', s  , ' ', ' ', board[3][1], ' ', ' ', s  , ' ', ' ', board[3][2], ' ', ' ', s  , ' ', ' ', board[3][3], ' ', ' ', s  , ' ', ' ', board[3][4], ' ', ' ', s  , ' ', ' ', board[3][5], ' ', ' ', s  , ' ', ' ', board[3][6], ' ', ' ', s  , ' ', ' ', board[3][7], ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', '4', ' ', s  , ' ', ' ', board[4][0], ' ', ' ', s  , ' ', ' ', board[4][1], ' ', ' ', s  , ' ', ' ', board[4][2], ' ', ' ', s  , ' ', ' ', board[4][3], ' ', ' ', s  , ' ', ' ', board[4][4], ' ', ' ', s  , ' ', ' ', board[4][5], ' ', ' ', s  , ' ', ' ', board[4][6], ' ', ' ', s  , ' ', ' ', board[4][7], ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', '5', ' ', s  , ' ', ' ', board[5][0], ' ', ' ', s  , ' ', ' ', board[5][1], ' ', ' ', s  , ' ', ' ', board[5][2], ' ', ' ', s  , ' ', ' ', board[5][3], ' ', ' ', s  , ' ', ' ', board[5][4], ' ', ' ', s  , ' ', ' ', board[5][5], ' ', ' ', s  , ' ', ' ', board[5][6], ' ', ' ', s  , ' ', ' ', board[5][7], ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', '6', ' ', s  , ' ', ' ', board[6][0], ' ', ' ', s  , ' ', ' ', board[6][1], ' ', ' ', s  , ' ', ' ', board[6][2], ' ', ' ', s  , ' ', ' ', board[6][3], ' ', ' ', s  , ' ', ' ', board[6][4], ' ', ' ', s  , ' ', ' ', board[6][5], ' ', ' ', s  , ' ', ' ', board[6][6], ' ', ' ', s  , ' ', ' ', board[6][7], ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', '7', ' ', s  , ' ', ' ', board[7][0], ' ', ' ', s  , ' ', ' ', board[7][1], ' ', ' ', s  , ' ', ' ', board[7][2], ' ', ' ', s  , ' ', ' ', board[7][3], ' ', ' ', s  , ' ', ' ', board[7][4], ' ', ' ', s  , ' ', ' ', board[7][5], ' ', ' ', s  , ' ', ' ', board[7][6], ' ', ' ', s  , ' ', ' ', board[7][7], ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  , ' ', ' ', ' ', ' ', ' ', s  },
	{' ', ' ', ' ', ' ', s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  ,  s , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  , s  },


	};

	for (int i = 0; i < 34; i++) {

		cout << endl;

		for (int j = 0; j < 53; j++) {

			cout << displayBoard[i][j];

		}
	}

	cout << endl << endl;
}

bool validateMoveFormat(string move) {


	if (move.length() != 8) {

		return false;

	}

	if (move[0] != 'a' && move[0] != 'b' && move[0] != 'c' && move[0] != 'd' &&
		move[0] != 'e' && move[0] != 'f' && move[0] != 'g' && move[0] != 'h') {

		return false;



	}

	if (move[1] != '0' && move[1] != '1' && move[1] != '2' && move[1] != '3' && move[1] != '4'
		&& move[1] != '5' && move[1] != '6' && move[1] != '7') {

		return false;

	}

	if (move[3] != 't' || move[4] != 'o') {

		return false;

	}

	if (move[6] != 'a' && move[6] != 'b' && move[6] != 'c' && move[6] != 'd' && move[6] != 'e'
		&& move[6] != 'f' && move[6] != 'g' && move[6] != 'h') {

		return false;

	}

	if (move[7] != '0' && move[7] != '1' && move[7] != '2' && move[7] != '3' && move[7] != '4'
		&& move[7] != '5' && move[7] != '6' && move[7] != '7') {

		return false;

	}

	else return true;
}

bool rook(int cr, int ccl, int fr, int fcl, char board[8][8]) {
	int rowdiff = fr - cr;
	int coldiff = fcl - ccl;

	if (rowdiff != 0 && coldiff != 0) {

		return false;
	}
	if (fr == cr && fcl != ccl) {
		if (ccl < fcl) {
			for (int i = ccl + 1; i < fcl; i++) {
				if (board[cr][i] != ' ') {
					cout << "you have chosen an illegal path which is blocked by a piece, please chose correct and open path " << endl << endl;
					return false;
				}
			}
		}
		if (ccl > fcl) {
			for (int i = ccl - 1; i > fcl; i--) {
				if (board[cr][i] != ' ') {
					cout << "you have chosen an illegal path which is blocked by a piece, please chose correct and open path " << endl << endl;
					return false;
				}
			}
		}

	}
	if (fcl == ccl && fr != cr) {
		if (cr < fr) {
			for (int i = cr + 1; i < fr; i++) {
				if (board[i][ccl] != ' ') {
					cout << "you have chosen an illegal path which is blocked by a piece, please chose correct and open path " << endl << endl;
					return false;
				}
			}
		}
		if (cr > fr) {
			for (int i = cr - 1; i > fr; i--) {
				if (board[i][ccl] != ' ') {
					cout << "you have chosen an illegal path which is blocked by a piece, please chose correct and open path " << endl << endl;
					return false;
				}
			}
		}

	}
	if (board[cr][ccl] == 'r') {
		if (board[fr][fcl] == 'p' || board[fr][fcl] == 'r' || board[fr][fcl] == 'b' || board[fr][fcl] == 'q' || board[fr][fcl] == 'n' || board[fr][fcl] == 'k') {
			cout << "your own piece is present at final position please chose carefully" << endl << endl;
			return false;
		}
	}
	if (board[cr][ccl] == 'R') {
		if (board[fr][fcl] == 'P' || board[fr][fcl] == 'R' || board[fr][fcl] == 'B' || board[fr][fcl] == 'Q' || board[fr][fcl] == 'N' || board[fr][fcl] == 'K') {
			cout << "your own piece is present at final position please chose carefully" << endl << endl;

			return false;
		}
	}

	return true;
}

bool bishop(int cr, int ccl, int fr, int fcl, char board[8][8]) {
	int rowdiff = cr - fr;
	int coldiff = ccl - fcl;

	if (abs(rowdiff) != abs(coldiff)) {


		return false;

	}
	if (rowdiff > 0 && coldiff > 0) {
		int j = ccl - 1;
		for (int i = cr - 1; i > fr && j > fcl; i--) {

				if (board[i][j] != ' ') {

					cout << "There's a piece blocking your move!" << endl << endl;
					return false;

				}
				j--;
		}
	}
	else if (rowdiff < 0 && coldiff < 0) {
		int j = ccl + 1;
		for (int i = cr + 1; i < fr &&  j < fcl; i++) {
				if (board[i][j] != ' ') {

					cout << "There's a piece blocking your move!" << endl << endl;
					return false;

				}
			j++;
		}
	}

	else if (rowdiff > 0 && coldiff < 0) {
		int j = ccl + 1;
		for (int i = cr - 1; i > fr && j < fcl; i--) {

				if (board[i][j] != ' ') {

					cout << "There's a piece blocking your move!" << endl << endl;
					return false;

				}
			j++;
		}
	}

	else if (rowdiff < 0 && coldiff > 0) {
		int j = ccl - 1;
		for (int i = cr + 1; i < fr &&  j > fcl; i++) {

				if (board[i][j] != ' ') {

					cout << "There's a piece blocking your move!" << endl << endl;
					return false;

				}
			j--;
		}
	}

	return true;

}

bool validateMoveRules(string move, char board[8][8], int currentplayer) {


	stringstream stream;

	int cr;
	int ccl;

	//stream << move[1];	
	//stream >> cr;
	cr = move[1] - 48;
	stream.clear();

	int fr;
	int fcl;

	//stream << move[7];
	//stream >> fr;
	fr = move[7] - 48;
	if (move[0] == 'a')
		ccl = 0;
	else if (move[0] == 'b')
		ccl = 1;
	else if (move[0] == 'c')
		ccl = 2;
	else if (move[0] == 'd')
		ccl = 3;
	else if (move[0] == 'e')
		ccl = 4;
	else if (move[0] == 'f')
		ccl = 5;
	else if (move[0] == 'g')
		ccl = 6;
	else
		ccl = 7;


	if (move[6] == 'a')
		fcl = 0;
	else if (move[6] == 'b')
		fcl = 1;
	else if (move[6] == 'c')
		fcl = 2;
	else if (move[6] == 'd')
		fcl = 3;
	else if (move[6] == 'e')
		fcl = 4;
	else if (move[6] == 'f')
		fcl = 5;
	else if (move[6] == 'g')
		fcl = 6;
	else
		fcl = 7;

	if (board[cr][ccl] == ' ') {

		cout << "There's no piece at the specified location." << endl << endl;
		return false;

	}
	bool t = true;
	if (king_checked(currentplayer, board) == 1) {
		cout << "Be carefull! your king is under check " << endl << endl;
		t = false;
	}

	if (board[cr][ccl] == 'r' || board[cr][ccl] == 'p' || board[cr][ccl] == 'b' || board[cr][ccl] == 'q' || board[cr][ccl] == 'n' || board[cr][ccl] == 'k') {
		if (board[fr][fcl] == 'p' || board[fr][fcl] == 'r' || board[fr][fcl] == 'b' || board[fr][fcl] == 'q' || board[fr][fcl] == 'n' || board[fr][fcl] == 'k') {
			cout << "your own piece is present at final position please chose carefully" << endl << endl;
			return false;
		}
	}
	if (board[cr][ccl] == 'R' || board[cr][ccl] == 'P' || board[cr][ccl] == 'B' || board[cr][ccl] == 'Q' || board[cr][ccl] == 'N' || board[cr][ccl] == 'K') {
		if (board[fr][fcl] == 'P' || board[fr][fcl] == 'R' || board[fr][fcl] == 'B' || board[fr][fcl] == 'Q' || board[fr][fcl] == 'N' || board[fr][fcl] == 'K') {
			cout << "your own piece is present at final position please chose carefully" << endl << endl;
			return false;
		}
	}
	int rowdiff = cr - fr;
	int coldiff = ccl - fcl;
	if (currentplayer == 1) {
		if (board[cr][ccl] != 'p' && board[cr][ccl] != 'r' && board[cr][ccl] != 'b' && board[cr][ccl] != 'n' && board[cr][ccl] != 'q' && board[cr][ccl] != 'k') {

			cout << "illegal selection you have selected opponent's piece" << endl << endl;
			return false;

		}
	}
	if (currentplayer == 2) {
		if (board[cr][ccl] != 'P' && board[cr][ccl] != 'R' && board[cr][ccl] != 'B' && board[cr][ccl] != 'N' && board[cr][ccl] != 'Q' && board[cr][ccl] != 'K') {

			cout << "illegal selection you have selected opponent's piece" << endl << endl;
			return false;

		}
	}

	//P1'S PAWN MOVEMENT RULES (YES, THEY ARE DIFFERENT DEPENDING ON THE PLAYER)
	if (board[cr][ccl] == 'P' && currentplayer == 2) {

		//this is to take into account that pawns can move 2 spaces on their first move, but not after
		if (cr != 1 && rowdiff <= -2) {

			cout << "Pawns can't move like that." << endl << endl;
			return false;	//false indicates invalid move...just in case I didn't specify that already...

		}

		//if it is the pawn's first move and they try to move like 12 spaces...
		else if (cr == 1 && rowdiff < -2) {

			cout << "Pawns may move 2 spaces forward their first move." << endl << endl;
			return false;

		}

		//rowDiff must ALWAYS be negative...no backwards or side to side movement for pawns
		else if (rowdiff >= 0) {

			cout << "Pawns can't move like that." << endl << endl;
			return false;

		}

		//no matter what pawns can only move a maximum of one column over at a time
		else if (abs(coldiff) > 1) {

			cout << "Pawns can't move like that." << endl << endl;
			return false;

		}

		//if they try to move diagonally without there being an enemy piece there
		else if (abs(coldiff) == 1 && rowdiff == -1 && board[fr][fcl] == ' ') {

			cout << "There must be an enemy piece at " << fcl << fr << " for you to move there." << endl << endl;
			return false;

		}

		//if they try to move 1 space forward but there's an enemy there...
		else if (rowdiff == -1 && coldiff == 0 && board[fr][fcl] != ' ' && board_my_piece(cr, ccl, fr, fcl, board) == true) {

			cout << "An enemy piece is blocking your move!" << endl << endl;
			return false;

		}

		if (fr == 7) {
			cout << "Promote Pawn to?" << endl;
			cout << "1:Rook" << endl << "2:Bishop" << endl << "3:Knight" << endl << "4:Queen" << endl << endl;
			char pro = _getch();
			pro = toupper(pro);
			cout << "Move successful!" << endl << endl;
			board[fr][fcl] = pro;
			board[cr][ccl] = ' ';

			Sleep(2000);

			return true;
		}

		//if they try to move diagonally to a space and there's an enemy piece there...
		if (rowdiff == -1 && abs(coldiff) == 1 && board_my_piece(cr, ccl, fr, fcl, board) == true) {


			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				cout << "Invalid your king will be in check" << endl << endl;
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				cout << "You have taken the enemy's " << board_0(board, fr, fcl) << "!" << endl << endl;
				Sleep(2000);

				return true;
			}

		}

		//valid forward move with no enemy pieces in the way...
		else {


			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				cout << "Invalid your king will be in check" << endl << endl;
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				cout << "Move successful!" << endl << endl;

				Sleep(2000);

				return true;
			}

		}
	}

	//P2'S PAWN MOVEMENT RULES 
	else if (board[cr][ccl] == 'p' && currentplayer == 1) {

		//this is to take into account that pawns can move 2 spaces on their first move, but not after
		if (cr != 6 && rowdiff >= 2) {

			cout << "Pawns can't move like that." << endl << endl;
			return false;	//false indicates invalid move...just in case I didn't specify that already...

		}

		//if it is the pawn's first move and they try to move like 12 spaces...
		else if (cr == 6 && rowdiff > 2) {

			cout << "Pawns may move 2 spaces forward their first move." << endl << endl;
			return false;

		}

		//rowDiff must ALWAYS be negative...no backwards or side to side movement for pawns
		else if (rowdiff <= 0) {

			cout << "Pawns can't move like that." << endl << endl;
			return false;

		}

		//no matter what pawns can only move a maximum of one column over at a time
		else if (abs(coldiff) > 1) {

			cout << "Pawns can't move like that." << endl << endl;
			return false;

		}

		//if they try to move diagonally without there being an enemy piece there
		else if (abs(coldiff) == 1 && rowdiff == 1 && board[fr][fcl] == ' ') {

			cout << "There must be an enemy piece at " << fr << fcl << " for you to move there." << endl << endl;
			return false;

		}

		//if they try to move 1 space forward but there's an enemy there...
		else if (rowdiff == 1 && coldiff == 0 && board[fr][fcl] != ' ' && board_my_piece(cr, ccl, fr, fcl, board) == true) {

			cout << "An enemy piece is blocking your move!" << endl << endl;
			return false;

		}
		if (fr == 0) {
			cout << "Promote Pawn to?" << endl;
			cout << "1:Rook" << endl << "2:Bishop" << endl << "3:Knight" << endl << "4:Queen" << endl << endl;
			char pro = _getch();

			cout << "Move successful!" << endl << endl;
			board[fr][fcl] = pro;
			board[cr][ccl] = ' ';

			Sleep(2000);

			return true;
		}
		//if they try to move diagonally to a space and there's an enemy piece there...
		if (rowdiff == 1 && abs(coldiff) == 1 && board_my_piece(cr, ccl, fr, fcl, board) == true) {


			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				cout << "Invalid your king will be in check" << endl << endl;
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				cout << "You have taken the enemy's " << board_0(board, fr, fcl) << "!" << endl << endl;
				Sleep(2000);

				return true;
			}

		}

		//valid forward move with no enemy pieces in the way...

		else {
			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				cout << "Invalid your king will be in check" << endl << endl;
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				cout << "Move successful!" << endl << endl;

				Sleep(2000);

				return true;
			}

		}
	}

	if (board[cr][ccl] == 'n' || board[cr][ccl] == 'N') {

		//I think I'm rather clever for figuring this out...
		if (abs(rowdiff)*abs(coldiff) != 2) {

			cout << "Knights can't move like that." << endl << endl;
			return false;


		}
		if (board_my_piece(cr, ccl, fr, fcl, board) == false) {
			return false;
		}
		if (board[fr][fcl] != ' ' && board_my_piece(cr, ccl, fr, fcl, board) == true) {


			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				cout << "Invalid your king will be in check" << endl << endl;
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				cout << "You have taken the enemy's " << board_0(board, fr, fcl) << "!" << endl << endl;
				Sleep(2000);

				return true;
			}

		}

		else {

			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				cout << "Invalid your king will be in check" << endl << endl;
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				cout << "Move successful!" << endl << endl;

				Sleep(2000);

				return true;
			}

		}
	}

	if (board[cr][ccl] == 'r' || board[cr][ccl] == 'R') {
		if (rook(cr, ccl, fr, fcl, board) == true) {
			if (board[fr][fcl] != ' ') {

				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					cout << "Invalid your king will be in check" << endl << endl;
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					cout << "You have taken the enemy's " << board_0(board, fr, fcl) << "!" << endl << endl;
					Sleep(2000);

					return true;
				}
			}
			else {
				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					cout << "Invalid your king will be in check" << endl << endl;
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					cout << "Move successful!" << endl << endl;

					Sleep(2000);

					return true;
				}
			}

		}
		else {
			cout << "your are trying to move Rook in an illegal way" << endl << endl;
			return false;
		}
	}

	if (board[cr][ccl] == 'b' || board[cr][ccl] == 'B') {

		if (bishop(cr, ccl, fr, fcl, board) == true) {

			if (board[fr][fcl] != ' ' && board_my_piece(cr, ccl, fr, fcl, board) == true) {

				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					cout << "Invalid your king will be in check" << endl << endl;
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					cout << "You have taken the enemy's " << board_0(board, fr, fcl) << "!" << endl << endl;
					Sleep(2000);

					return true;
				}
			}

			else {

				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					cout << "Invalid your king will be in check" << endl << endl;
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					cout << "Move successful!" << endl << endl;

					Sleep(2000);

					return true;
				}

			}
		}
		else {
			cout << "Bishops can't move like that." << endl;
			return false;
		}
	}

	if (board[cr][ccl] == 'q' || board[cr][ccl] == 'Q') {
		if (rook(cr, ccl, fr, fcl, board) == true || bishop(cr, ccl, fr, fcl, board) == true) {
			if (board[fr][fcl] != ' ' && board_my_piece(cr, ccl, fr, fcl, board) == true) {


				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					cout << "Invalid your king will be in check" << endl << endl;
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					cout << "You have taken the enemy's " << board_0(board, fr, fcl) << "!" << endl << endl;
					Sleep(2000);

					return true;
				}

			}

			else {

				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					cout << "Invalid your king will be in check" << endl << endl;
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					cout << "Move successful!" << endl << endl;

					Sleep(2000);

					return true;
				}

			}

		}
		else { return false; }

	}

	if (board[cr][ccl] == 'k' || board[cr][ccl] == 'K') {

		if (abs(rowdiff) > 1 || abs(coldiff) > 1) {

			cout << "Kings may only move one space at a time." << endl << endl;
			return false;

		}
		if (board[fr][fcl] != ' ' && board_my_piece(cr, ccl, fr, fcl, board) == true) {


			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				cout << "Invalid your king will be in check" << endl << endl;
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				cout << "You have taken the enemy's " << board_0(board, fr, fcl) << "!" << endl << endl;
				Sleep(2000);

				return true;
			}

		}

		else {

			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				cout << "Invalid your king will be in check" << endl << endl;
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				cout << "Move successful!" << endl << endl;

				Sleep(2000);

				return true;
			}

		}

	}
	return false;
}

bool checkmate(int currentplayer, char board[8][8]) {
	char b[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			b[i][j] = board[i][j];
		}
	}
	int r, c, row, col, flag = 0;
	if (currentplayer == 1) {
		for (row = 7; row >= 0; row--) {
			for (col = 7; col >= 0; col--) {
				if (b[row][col] == 'k') {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}
		bool a = false, l = false, i = false, d = false, e = false, f = false, g = false, h = false;
		if (king_checked(currentplayer, b) == 1) {

			r = row + 1;
			c = col; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					a = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}
			else { a = true; }
			//wert
			r = row - 1;
			c = col; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					l = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}
			else { l = true; }
			//wert
			r = row;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					i = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}
			else { i = true; }
			//wert
			r = row;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					d = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}
			else { d = true; }
			//wert
			r = row + 1;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					e = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}
			else { e = true; }
			//wert
			r = row - 1;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					f = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}
			else { f = true; }
			//wert
			r = row - 1;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					g = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}
			else { g = true; }
			//wert
			r = row + 1;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					h = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}
			else { h = true; }
			if (a == true && l == true && i == true && d == true && e == true && f == true && g == true && h == true) {
				return true;
			}

		}
	}
	if (currentplayer == 2) {
		for (row = 0; row < 8; row++) {
			for (col = 0; col < 8; col++) {
				if (b[row][col] == 'K') {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}

		bool a = false, l = false, i = false, d = false, e = false, f = false, g = false, h = false;
		if (king_checked(currentplayer, b) == 1) {

			r = row + 1;
			c = col; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					a = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}
			else { a = true; }
			//wert
			r = row - 1;
			c = col; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					l = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}
			else { l = true; }
			//wert
			r = row;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					i = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}
			else { i = true; }
			//wert
			r = row;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					d = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}
			else { d = true; }
			//wert
			r = row + 1;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					e = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}
			else { e = true; }
			//wert
			r = row - 1;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					f = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}
			else { f = true; }
			//wert
			r = row - 1;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					g = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}
			else { g = true; }
			//wert
			r = row + 1;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					h = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}
			else { h = true; }
			if (a == true && l == true && i == true && d == true && e == true && f == true && g == true && h == true) {
				return true;
			}

		}
	}
	return false;
}

bool game_draw(char board[8][8]) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j] != 'k' && board[i][j] != 'n' && board[i][j] != 'K' && board[i][j] != 'N') {
				return false;
			}
		}
	}
	return true;
}

bool stalemate(int currentplayer, char board[8][8]) {
	char b[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			b[i][j] = board[i][j];
		}
	}
	int r, c, row, col, flag = 0;
	if (currentplayer == 1) {
		for (row = 7; row >= 0; row--) {
			for (col = 7; col >= 0; col--) {
				if (b[row][col] == 'k') {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}
		bool a = false, l = false, i = false, d = false, e = false, f = false, g = false, h = false;
		if (king_checked(currentplayer, b) == 0) {

			r = row + 1;
			c = col; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					a = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}

			//wert
			r = row - 1;
			c = col; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					l = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}

			//wert
			r = row;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					i = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}

			//wert
			r = row;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					d = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}

			//wert
			r = row + 1;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					e = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}

			//wert
			r = row - 1;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					f = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}

			//wert
			r = row - 1;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					g = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}

			//wert
			r = row + 1;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'k'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					h = true;
				}
				b[row][col] = 'k'; b[r][c] = s;
			}

			if (a == true && l == true && i == true && d == true && e == true && f == true && g == true && h == true) {
				return true;
			}

		}
	}
	if (currentplayer == 2) {
		for (row = 0; row < 8; row++) {
			for (col = 0; col < 8; col++) {
				if (b[row][col] == 'K') {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}

		bool a = false, l = false, i = false, d = false, e = false, f = false, g = false, h = false;
		if (king_checked(currentplayer, b) == 0) {

			r = row + 1;
			c = col; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					a = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}

			//wert
			r = row - 1;
			c = col; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					l = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}

			//wert
			r = row;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					i = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}

			//wert
			r = row;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					d = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}

			//wert
			r = row + 1;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					e = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}

			//wert
			r = row - 1;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					f = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}

			//wert
			r = row - 1;
			c = col + 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					g = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}

			//wert
			r = row + 1;
			c = col - 1; if (r == -1) { r = 0; }if (c == -1) { c = 0; }
			if (board_my_piece(row, col, r, c, b) == true) {
				char s = b[r][c];
				b[r][c] = 'K'; b[row][col] = ' ';
				if (king_checked(currentplayer, b) == 1) {
					h = true;
				}
				b[row][col] = 'K'; b[r][c] = s;
			}

			if (a == true && l == true && i == true && d == true && e == true && f == true && g == true && h == true) {
				return true;
			}

		}
	}
	return false;
}

bool next_rook(int cr, int ccl, int fr, int fcl, char board[8][8]) {
	int rowdiff = fr - cr;
	int coldiff = fcl - ccl;

	if (rowdiff != 0 && coldiff != 0) {
		return false;
	}
	if (fr == cr && fcl != ccl) {
		if (ccl < fcl) {
			for (int i = ccl + 1; i < fcl; i++) {
				if (board[cr][i] != ' ') {
					return false;
				}
			}
		}
		if (ccl > fcl) {
			for (int i = ccl - 1; i > fcl; i--) {
				if (board[cr][i] != ' ') {
					return false;
				}
			}
		}

	}
	if (fcl == ccl && fr != cr) {
		if (cr < fr) {
			for (int i = cr + 1; i < fr; i++) {
				if (board[i][ccl] != ' ') {
					return false;
				}
			}
		}
		if (cr > fr) {
			for (int i = cr - 1; i > fr; i--) {
				if (board[i][ccl] != ' ') {
					return false;
				}
			}
		}

	}
	if (board[cr][ccl] == 'r') {
		if (board[fr][fcl] == 'p' || board[fr][fcl] == 'r' || board[fr][fcl] == 'b' || board[fr][fcl] == 'q' || board[fr][fcl] == 'n' || board[fr][fcl] == 'k') {
			return false;
		}
	}
	if (board[cr][ccl] == 'R') {
		if (board[fr][fcl] == 'P' || board[fr][fcl] == 'R' || board[fr][fcl] == 'B' || board[fr][fcl] == 'Q' || board[fr][fcl] == 'N' || board[fr][fcl] == 'K') {

			return false;
		}
	}

	return true;
}

bool next_bishop(int cr, int ccl, int fr, int fcl, char board[8][8]) {
	int rowdiff = cr - fr;
	int coldiff = ccl - fcl;

	if (abs(rowdiff) != abs(coldiff)) {


		return false;

	}
	if (rowdiff > 0 && coldiff > 0) {
		int j = ccl - 1;
		for (int i = cr - 1; i > fr && j > fcl; i--) {

			if (board[i][j] != ' ') {

			return false;

			}
			j--;
		}
	}
	else if (rowdiff < 0 && coldiff < 0) {
		int j = ccl + 1;
		for (int i = cr + 1; i < fr && j < fcl; i++) {
			if (board[i][j] != ' ') {

				return false;

			}
			j++;
		}
	}

	else if (rowdiff > 0 && coldiff < 0) {
		int j = ccl + 1;
		for (int i = cr - 1; i > fr && j < fcl; i--) {

			if (board[i][j] != ' ') {

			return false;

			}
			j++;
		}
	}

	else if (rowdiff < 0 && coldiff > 0) {
		int j = ccl - 1;
		for (int i = cr + 1; i < fr && j > fcl; i++) {

			if (board[i][j] != ' ') {

				return false;

			}
			j--;
		}
	}

	return true;

}

bool correct_piece_check(int currentplayer, int cr, int fr, int ccl, int fcl, char board[8][8]) {
	int rowdiff = cr - fr;
	int coldiff = ccl - fcl;
	if (board[cr][ccl] == 'r' || board[cr][ccl] == 'p' || board[cr][ccl] == 'b' || board[cr][ccl] == 'q' || board[cr][ccl] == 'n' || board[cr][ccl] == 'k') {
		if (board[fr][fcl] == 'p' || board[fr][fcl] == 'r' || board[fr][fcl] == 'b' || board[fr][fcl] == 'q' || board[fr][fcl] == 'n' || board[fr][fcl] == 'k') {
			return false;
		}
	}
	if (board[cr][ccl] == 'R' || board[cr][ccl] == 'P' || board[cr][ccl] == 'B' || board[cr][ccl] == 'Q' || board[cr][ccl] == 'N' || board[cr][ccl] == 'K') {
		if (board[fr][fcl] == 'P' || board[fr][fcl] == 'R' || board[fr][fcl] == 'B' || board[fr][fcl] == 'Q' || board[fr][fcl] == 'N' || board[fr][fcl] == 'K') {
			return false;
		}
	}
	if (board[cr][ccl] == 'n' || board[cr][ccl] == 'N') {

		//I think I'm rather clever for figuring this out...
		if (abs(rowdiff)*abs(coldiff) != 2) {
			return false;
		}
		if (board_my_piece(cr, ccl, fr, fcl, board) == false) {
			return false;
		}
		if (board[fr][fcl] != ' ' && board_my_piece(cr, ccl, fr, fcl, board) == true) {
			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return true;
			}

		}

		else {
			char ch = board[fr][fcl];
			board[fr][fcl] = board[cr][ccl];
			board[cr][ccl] = ' ';
			if (king_checked(currentplayer, board) == 1) {
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return false;
			}
			else {
				board[cr][ccl] = board[fr][fcl];
				board[fr][fcl] = ch;
				return true;
			}

		}
	}

	if (board[cr][ccl] == 'r' || board[cr][ccl] == 'R') {
		if (next_rook(cr, ccl, fr, fcl, board) == true) {
			if (board[fr][fcl] != ' ') {

				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return true;
				}
			}
			else {
				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return true;
				}
			}

		}
		else { return false; }
	}

	if (board[cr][ccl] == 'b' || board[cr][ccl] == 'B') {

		if (next_bishop(cr, ccl, fr, fcl, board) == true) {

			if (board[fr][fcl] != ' ') {

				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return true;
				}
			}

			else {

				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return true;
				}

			}
		}
		else { return false; }
	}


	if (board[cr][ccl] == 'q' || board[cr][ccl] == 'Q') {
		if (next_rook(cr, ccl, fr, fcl, board) == true || next_bishop(cr, ccl, fr, fcl, board) == true) {
			if (board[fr][fcl] != ' ') {


				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return true;
				}

			}

			else {

				char ch = board[fr][fcl];
				board[fr][fcl] = board[cr][ccl];
				board[cr][ccl] = ' ';
				if (king_checked(currentplayer, board) == 1) {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return false;
				}
				else {
					board[cr][ccl] = board[fr][fcl];
					board[fr][fcl] = ch;
					return true;
				}

			}

		}
		else { return false; }

	}
	return false;
}

bool correct_checkmate(int currentplayer, char board[8][8]) {
	if (currentplayer == 1) {
		if (checkmate(currentplayer, board) == true) {
			int cr = 0;
			int ccl = 0;
			int flag = 0;
			for (cr = 0; cr < 8; cr++) {
				for (ccl = 0; ccl < 8; ccl++) {
					if (board[cr][ccl] == 'r') {
						flag = 1;
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}

			for (int fr = 0; fr < 8; fr++) {
				for (int fcl = 0; fcl < 8; fcl++) {
					if (correct_piece_check(currentplayer, cr, fr, ccl, fcl, board) == true) {
						return true;
					}
				}

			}
			flag = 0;
			for (cr = 0; cr < 8; cr++) {
				for (ccl = 0; ccl < 8; ccl++) {
					if (board[cr][ccl] == 'b') {
						flag = 1;
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}

			for (int fr = 0; fr < 8; fr++) {
				for (int fcl = 0; fcl < 8; fcl++) {
					if (correct_piece_check(currentplayer, cr, fr, ccl, fcl, board) == true) {
						return true;
					}
				}

			}
			flag = 0;
			for (cr = 0; cr < 8; cr++) {
				for (ccl = 0; ccl < 8; ccl++) {
					if (board[cr][ccl] == 'n') {
						flag = 1;
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}

			for (int fr = 0; fr < 8; fr++) {
				for (int fcl = 0; fcl < 8; fcl++) {
					if (correct_piece_check(currentplayer, cr, fr, ccl, fcl, board) == true) {
						return true;
					}
				}

			}
			flag = 0;
			for (cr = 0; cr < 8; cr++) {
				for (ccl = 0; ccl < 8; ccl++) {
					if (board[cr][ccl] == 'q') {
						flag = 1;
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}

			for (int fr = 0; fr < 8; fr++) {
				for (int fcl = 0; fcl < 8; fcl++) {
					if (correct_piece_check(currentplayer, cr, fr, ccl, fcl, board) == true) {
						return true;
					}
				}

			}
			return false;
		}
	}

	if (currentplayer == 2) {
		if (checkmate(currentplayer, board) == true) {
			int cr = 0;
			int ccl = 0;
			int flag = 0;
			for (cr = 0; cr < 8; cr++) {
				for (ccl = 0; ccl < 8; ccl++) {
					if (board[cr][ccl] == 'R') {
						flag = 1;
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}

			for (int fr = 0; fr < 8; fr++) {
				for (int fcl = 0; fcl < 8; fcl++) {
					if (correct_piece_check(currentplayer, cr, fr, ccl, fcl, board) == true) {
						return true;
					}
				}

			}
			flag = 0;
			for (cr = 0; cr < 8; cr++) {
				for (ccl = 0; ccl < 8; ccl++) {
					if (board[cr][ccl] == 'B') {
						flag = 1;
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}

			for (int fr = 0; fr < 8; fr++) {
				for (int fcl = 0; fcl < 8; fcl++) {
					if (correct_piece_check(currentplayer, cr, fr, ccl, fcl, board) == true) {
						return true;
					}
				}

			}
			flag = 0;
			for (cr = 0; cr < 8; cr++) {
				for (ccl = 0; ccl < 8; ccl++) {
					if (board[cr][ccl] == 'N') {
						flag = 1;
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}

			for (int fr = 0; fr < 8; fr++) {
				for (int fcl = 0; fcl < 8; fcl++) {
					if (correct_piece_check(currentplayer, cr, fr, ccl, fcl, board) == true) {
						return true;
					}
				}
			}
			flag = 0;
			for (cr = 0; cr < 8; cr++) {
				for (ccl = 0; ccl < 8; ccl++) {
					if (board[cr][ccl] == 'Q') {
						flag = 1;
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}

			for (int fr = 0; fr < 8; fr++) {
				for (int fcl = 0; fcl < 8; fcl++) {
					if (correct_piece_check(currentplayer, cr, fr, ccl, fcl, board) == true) {
						return true;
					}
				}

			}
			return false;
		}
	}
	return true;
}

void play_game(char board[8][8],int currentplayer) {
	

	int p1pieces = 16;
	int p2pieces = 16;

	string move;

	while (true) {
		if (currentplayer == 1) {
			currentplayer = 2;
		}
		else currentplayer = 1;

		system("cls");

		display(board);
		if (stalemate(currentplayer, board) == true) {
			cout << "Stalemate" << endl << endl;
			break;
		}
		int f = 0;
		if (currentplayer == 1) {
			f = 2;
		}
		else { f = 1; }
		if (correct_checkmate(currentplayer, board) == false) {
			cout << "Checkmate!!!!" << endl << "Player" << f << "  won the chess game" << endl << endl;
			break;

		}
		cout << "Player" << currentplayer << "  enter your move: ";
		getline(cin, move);

		if (move[0] == 's') {
			ofstream fout("out.txt");
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					fout << board[i][j];
				}
			}
			fout << currentplayer;
			cout << "Game saved" << endl;
			break;
		}
		while (validateMoveFormat(move) == false) {

			cout << "Invalid move. Please re-enter." << endl;
			getline(cin, move);

		}

		while (validateMoveRules(move, board, currentplayer) == false) {

			cout << "Please re-enter your move." << endl;
			getline(cin, move);

		}

		if (game_draw(board) == true) {
			cout << "Game Draw" << endl << endl;
			break;
		}

	}
}

int main()
{
	char chess_board[8][8] = {
		{'R','N','B','Q','K','B','N','R'},
		{'P','P','P','P','P','P','P','P'},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{'p','p','p','p','p','p','p','p'},
		{'r','n','b','q','k','b','n','r'},
	};

	cout << endl << endl << endl << endl;
	cout << "        _____ _    _ ______  _____ _____ \n       / ____| |  | |  ____|/ ____/ ____| \n      | |    | |__| | |__  | (___| (___  \n      | |    |  __  |  __|  \\___  \\___ \\ \n      | |____| |  | | |____ ____) |___) | \n       \\_____|_|  |_|______|_____/_____/ \n     " << endl;
	cout << endl << endl << "     Two Player Chess Game By Aashar Naseem" << endl;
	cout << endl << "Player1 is white represented by small albhabets" << endl << "Player2 is black represented by capital alphabets " << endl << endl << "press any key to play and enjoy chess" << endl;
	cout << endl << endl << "press n for new game and press l to load previous saved game  you can save game at any time by pressing s" << endl << endl;
	char f=_getch();
	if (f == 'n') {
		play_game(chess_board,2);
	}
	if (f == 'l') {
		int k = 0;
		char b[100];
		char board[8][8];
		ifstream file("out.txt");
		while (file.getline(b, 100))
		{
			//file.getline(b, 100);
			
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					
				
					board[i][j] = b[k];
					k++;

				}
			}
		}
		int cp = b[k] - '0';
		if (cp == 1) {
			cp = 2;
		}
		else cp = 1;
		play_game(board,cp);
	}
	system("pause");
	return 0;
}
