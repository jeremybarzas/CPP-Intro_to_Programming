#include "TextBasedAdventure.h"

TextBasedAdventure::TextBasedAdventure()
{
	m_qSize = 1;
	m_qIndex = 0;

	qOutcome = 0;

	m_questionsArry = new Question[m_qSize];
}

void TextBasedAdventure::Start()
{
	AddQuestion("1.) This question's answer is a", "a");
	AddQuestion("2.) This question's answer is b", "b");
	AddQuestion("3.) This question's answer is c", "c");
	AddQuestion("4.) This question's answer is d", "d");
	AddQuestion("5.) This question's answer is e", "e");

	CreateQuestion();

	Run();

	return;
}

void TextBasedAdventure::Run()
{
	if (PlayerName() == true)
	{
		PrintInstructions();
	}
	
	Update();

	return;
}

void TextBasedAdventure::Update()
{
	while (gameOver == false)
	{
		if (m_currentQ != m_lastQ)
		{
			 qOutcome = AskQuestion(m_currentQ);

			if (qOutcome == 1)
			{
				m_currentQ++;
			}
		
			else if (qOutcome == 2)
			{
				m_player->m_health--;
			}

			else if (qOutcome == 3)
			{
				End();
			}
		}

		if (m_player->m_health == 0)
		{
			m_player->m_alive = false;

			printf("You have died...\n\n");
		}

		if (m_player->m_alive == false)
		{
			End();
		}

		if (m_currentQ == m_lastQ)
		{
			printf("You have won the game!!\n\n");

			End();
		}
	}

	return;
}

void TextBasedAdventure::End()
{
	gameOver = true;

	printf("The game is now over...\n\n");
	system("pause");
	system("cls");

	return;
}

void TextBasedAdventure::PrintInstructions()
{
	printf("You must answer all the questions correctly without your character dying to win.\n\n");
	printf("You must answer each question by typing your answer and pressing enter.\n\n");
	printf("If you enter an answer incorrectly your character will lose 1 health point.\n\n");
	printf("Your charcater starts with 3 health, if your characters health reachs 0 they will die and the game will be over.\n\n");
	printf("Good Luck!!\n\n");

	system("pause");
	system("cls");

	return;
}

TextBasedAdventure::Question::Question(MyString question, MyString answer)
{
	m_qValue = question;
	m_aValue = answer;
}

TextBasedAdventure::Player::Player(MyString m)
{
	m_name = m;
	m_alive = true;
	m_health = 3;
}

bool TextBasedAdventure::PlayerName()
{
	char name[255];
	char instructions[5];

	printf("Hello traveler what is your name??  ");

	cin.getline(name, 255);

	m_player = new Player(name);

	system("cls");

	printf("Welcome %s!!\n\n", m_player->m_name);

	printf("Type yes or no\n\n");
	printf("Would you like to read the instructions before beginning??  ");

	cin.getline(instructions, 5);

	MyString ms = MyString(instructions);

	printf("\n\n");

	if (ms.FindSubString("yes") == true)
	{
		system("pause");
		system("cls");

		return true;
	}

	else if (ms.FindSubString("no") == true)
	{
		system("pause");
		system("cls");

		return false;
	}
}

int TextBasedAdventure::AskQuestion(Question *current)
{
	printf("%s \n\n", current->m_qValue);

	printf("What do you do %s?\n\n", m_player->m_name);
	
	char resolution[255];
	cin.getline(resolution, 255);

	MyString ms = MyString(resolution);

	if (ms.FindSubString("quit") == true)
	{
		printf("\nYou have chosen to quit the game...\n\n");

		return 3;
	}
	
	else if (ms.FindSubString(current->m_aValue))
	{
		printf("\nThat is correct!!!\n\n");
		system("pause");
		system("cls");

		return 1;
	}

	else
	{
		printf("\nThat is incorrect...\n\n");
		printf("You have lost 1 health point\n\n");
		system("pause");
		system("cls");

		return 2;
	}
}

int TextBasedAdventure::AddQuestion(MyString q, MyString a)
{
	if (m_qIndex >= m_qSize)
	{
		Question * qBuffer = new Question[m_qSize*2];
	
		for (int i = 0; i < m_qSize; i++)
		{
			qBuffer[i] = m_questionsArry[i];
		}
		
		delete[] m_questionsArry;
		
		m_qSize *= 2;
		m_questionsArry = qBuffer;
	}

	Question tmp = Question(q, a);

	m_questionsArry[m_qIndex] = tmp;

	return m_qIndex++;
}

void TextBasedAdventure::CreateQuestion()
{
	char qText[255];
	char aText[255];

	char yesorno[5];
	int newQcount = 0;

	printf("Type yes or no\n\n");
	printf("Would you like to create your own question(s)??  ");

	cin.getline(yesorno, 5);

	MyString ms = MyString(yesorno);

	printf("\n\n");

	if (ms.FindSubString("yes") == true)
	{
		printf("How many new questions do you wan to create??  ");
		cin >> newQcount;

		for(int i = 0; i < newQcount; i++)
		{
			printf("\nEnter the new question here:  ");
			
			cin.ignore(cin.rdbuf()->in_avail(), '\n');
			cin.getline(qText, 254);
			
			printf("\nEnter the answer for the new question here:  ");
			
			cin.ignore(cin.rdbuf()->in_avail(), '\n');
			cin.getline(aText, 254);

			MyString question = MyString(qText);
			MyString answer = MyString(aText);

			AddQuestion(question, answer);
		}
	}
	
	m_currentQ = &m_questionsArry[0];
	m_lastQ = &m_questionsArry[m_qIndex];
	
	system("pause");
	system("cls");

	return;
}