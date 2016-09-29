#pragma once

#include "MyString.h"



class BaseApp
{
public:
	BaseApp() {};
	virtual int Start() = 0;
	virtual void Run() = 0;
	virtual int Update() = 0;
	
	bool gameOver = false;
};

class TextBaseAdventure : public BaseApp
{
public:

	class Question;
	class Answer;
	class Player;

	Question * m_questions;
	Answer * m_answers;
	Question * current;
	TextBaseAdventure()
	{
		m_questions = new Question[size];
		m_answers = new Answer[size];
		current = &m_questions[0];
		makeQuestion("1.) A person dun did it at the thing... What do you do ?", "do stuff");
		makeQuestion("2.) A person dun did it more at the thing... What do you do ?", "do more stuff");
		makeQuestion("3.) A person dun did it even more at the thing... What do you do ?", "do even morestuff");

	}
	int size = 1; // these variables ot be used for makeQuestions fucntions.
	int count = 0; // these variables ot be used for makeQuestions fucntions.
	
	bool NextQuestion()
	{
		if (current->m_answer->m_question == NULL)
			return false;
		current++;
		return true;
	}

	Player * m_player;

	class Player
	{
	public:

		MyString m_name;

		Player() {};

		Player(MyString m)
		{
			m_name = m;
		};

		~Player() {};
	};

	class Question
	{
	public:

		MyString m_value;
		Answer * m_answer;

		Question() {};

		Question(MyString ms)
		{
			m_value = ms;
			m_answer = nullptr;
		};

		~Question() {};
	};

	class Answer
	{
	public:

		MyString m_value;
		Question * m_question;

		Answer() {};

		Answer(MyString ms)
		{
			m_value = ms;
			m_question = nullptr;
		};

		~Answer() {};
	};

	void makeQuestion(MyString question, MyString answer)
	{
		count++;
		if (count >= size)
		{
			Question * qBuffer = new Question[size * size];
			Answer * aBuffer = new Answer[size * size];
			
			for (int i = 0; i < size; i++)
			{
				qBuffer[i] = m_questions[i];
				aBuffer[i] = m_answers[i];
			}

			delete [] m_questions;
			delete [] m_answers;

			m_questions = qBuffer;
			m_answers = aBuffer;

			size *= 2;
		}

		m_questions[count] = MyString(question);
		m_answers[count] = MyString(answer);

		m_questions[count].m_answer = &m_answers[count];
		m_answers[count].m_question = &m_questions[count];

		
	}

	void AskQuestion(Question * &q)
	{
		printf("%s \n", q->m_value);

		char resolution[255];

		std::cin.getline(resolution, 255);

		MyString ms = MyString(resolution);

		if (q->m_answer == NULL)
		{
			gameOver = true;
			return;
		}

		else
		{
			//if the answer is the thing the user inputted
			if (ms.FindSubString(q->m_answer->m_value))
			{
					
			}
		}
	}

	int Start()
	{
		return 1;
		
	}

	void Run()
	{
		Update();
	}

	int Update()
	{
		char resolution[255];

		std::cin.getline(resolution, 255);

		m_player = new Player(resolution);

		printf("your name is %s\n", m_player->m_name);

		while (!gameOver)
		{
			AskQuestion(current);
			if (NextQuestion() == false)
				break;


		}
		return 1;
	}
};


/*Question("1.A person jumped... What do you do?"),
Question("2.A person shoots for there life... What do you do?"),
Question("3.A person lives for there life... What do you do?"),
Question("4.A person dun did it at the thing... What do you do?"),
Question("5.A person ran... What do you do?"),
Question("6.A person jumped... What do you do?"),
Question("7.A person shoots for there life... What do you do?"),*/

/*
//start up the game and initialize a bunch of questions
Question * q0 = new Question("loading....");
Question * q1 = new Question("What is your name?");
Question * q2 = new Question("You approach a door what do you do?");
Question * q3 = new Question("A person approaches you, asking for the time... What do you do?");
Question * q4 = new Question("A person begs for there life... What do you do?");
Question * q5 = new Question("A person ran... What do you do?");
Question * q6 = new Question("A person jumped... What do you do?");
Question * q7 = new Question("A person shoots for there life... What do you do?");
Question * q8 = new Question("A person lives for there life... What do you do?");
Question * q9 = new Question("A person lives for there life... What do you do?");
Answer * a0 = new Answer("*", q0);
Answer * a0 = new Answer("*", q1);
Answer * a3 = new Answer("c", q2);
Answer * a1 = new Answer("a", q3);
Answer * a2 = new Answer("b", q4);
Answer * a4 = new Answer("d", q5);
Answer * a5 = new Answer("e", q6);
Answer * a6 = new Answer("f", q7);
Answer * a8 = new Answer("h", q7);
Answer * a9 = new Answer("i", q8);
Answer * a7 = new Answer("g", q9);
Answer * a10 = new Answer("j", q9);
*/