#include "TextBasedAdventure.h"

TextBasedAdventure::TextBasedAdventure()
{
	m_questionsArry = new Question[m_qSize];

	AddQuestion("1.) This question's answer is a", "a");
	AddQuestion("2.) This question's answer is b", "b");
	AddQuestion("3.) This question's answer is c", "c");
	AddQuestion("4.) This question's answer is d", "d");
	AddQuestion("5.) This question's answer is e", "e");
	AddQuestion("6.) This question's answer is f", "f");
	AddQuestion("7.) This question's answer is g", "g");
	AddQuestion("8.) This question's answer is h", "h");
	AddQuestion("9.) This question's answer is i", "i");
	AddQuestion("10.) This question's answer is j", "j");

	m_currentQ = &m_questionsArry[0];
	m_lastQ = &m_questionsArry[m_qIndex];
}

void TextBasedAdventure::Start()
{
	Run();

	return;
}

void TextBasedAdventure::Run()
{
	PlayerName();

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

void TextBasedAdventure::PlayerName()
{
	char name[255];

	printf("Hello traveler what is your name??  ");

	cin.getline(name, 255);

	m_player = new Player(name);

	system("cls");

	printf("Welcome %s!!\n\n", m_player->m_name);

	system("pause");
	system("cls");

	return;
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