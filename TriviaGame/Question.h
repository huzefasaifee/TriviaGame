#pragma once

#include <iostream>
using namespace std;
class Question
{
	// Access specifier 
private:
	// Data Members 
	int id;
	string question;
	string answer1;
	string answer2;
	string answer3;

	string answer4;
	int playerAnswer;
	int answer;

	

public:
	// Default constructor
	Question() {
		playerAnswer = 0;
		answer = 0;
		id = 0;
	}

	Question(int id, string q, string a1, string a2, string a3, string a4, int answer) {
		this->id = id;
		this->question = q;
		this->answer1 = a1;
		this->answer2 = a2;
		this->answer3 = a3;
		this->answer4 = a4;
		this->answer = answer;
	}

	// Member Functions() 
	

	int GetAnswer() {
		return answer;

	}
	bool CheckAnswer() {
		return playerAnswer == answer;

	}

	void SetAnswer(int playerAnswer) {
		this->playerAnswer = playerAnswer;

	}

	void DisplayQuestion() {
		cout << "Question " << " :" << question << endl;


	}
	void DisplayAnswerOptions() {
		cout << "Option: " << endl;
		cout << "1. "<<answer1 << endl;
		cout << "2. " << answer2 << endl;
		cout << "3. " << answer3 << endl;
		cout << "4. " << answer4 << endl;
	}
};