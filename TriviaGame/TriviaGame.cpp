// TriviaGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Question.h"

int main()
{
    
	Question qlist[10] = 
	{ Question(1, "What is capital of India?", "New Delhi", "Mumbai", "Kolkata", "Madras", 1),
		 Question(2, "Who is PM of India?", "Modi", "Shah", "Gandhi", "Advani", 1),
		 Question(3, "Which is longest river in the world?", "Nile", "Amazon", "Ganga", "Indus", 1),
		Question(4, "Which is tallest mountain in the world?", "Mount Everest", "Godwin Austen", "Kangchenjunga", "Lhotse", 1),
		Question(5, "Who is the eldest of Pandava brothers", "Yudhishthira", "Bhima", "Arjuna", "Nakula", 1),
		Question(6, "India gained independence in the year?", "1947", "1946", "1945", "1944", 1),
		Question(7, "What is total number of Union Territory in India?", "5", "6", "7", "8", 4),
		Question(8, "Who is the highest run-scorer in ODI cricket?", "Sachin Tendulkar", " Kumara Sangakkara", "Ricky Ponting", "Sanath Jayasuriya", 1),
		Question(9, "What is molecular formula of Water?", "H2O", "HO2", "CO2", "CO", 1),
		Question(10, "Who is father of biology?", "Aristotle", "Socrates", "Alexander", "Pythagoras", 1)
	};

	int playerScore[2] = { 0,0 };
	int playerId = 1;
	int totalPlayers = 2;
	int totalQuestion = 10;
	int questionNo = 1;
	int answer = 1;
	int winner = 1;
	do {
		cout << "Player " << playerId << endl;
		Question q = qlist[questionNo - 1];
		q.DisplayQuestion();
		q.DisplayAnswerOptions();
		cin >> answer;
		q.SetAnswer(answer);
		bool result = q.CheckAnswer();
		if (result) {
			playerScore[playerId - 1]++;
		}
		questionNo++;
		if (playerId == 1)
		{
			playerId = 2;
		}
		else
		{
			playerId = 1;
		}

	} while (questionNo <=10);
	cout << endl<<"Final Score"<< endl;
	cout << "Player 1:" << playerScore[0]<<endl;
	cout << "Player 2:" << playerScore[1] << endl;
	if (playerScore[0] > playerScore[1])
	{
		winner = 1;
	}
	else if (playerScore[1] > playerScore[0])
	{
		winner = 2;
	}
	else
	{
		winner = 0;
	}
	switch (winner)
	{
	case 1:
	case 2:
	{
		cout << endl<<"Winner:" << "Player " << winner << endl;
		break;
	}
	default:
		cout << "Draw" << endl;
		break;
	}
	
	return 0;
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
