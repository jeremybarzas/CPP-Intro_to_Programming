#include "TextBasedAdventure.h"

TextBaseAdventure::TextBaseAdventure()
{
	m_questionsArry = new Question[m_size];
	m_answersArry = new Answer[m_size];
	
	AddQuestion("1.) A person dun did it at the thing... What do you do ?", "a");
	AddQuestion("2.) A person dun did it more at the thing... What do you do ?", "b");
	AddQuestion("3.) A person dun did it even more at the thing... What do you do ?", "c");

	m_current = &m_questionsArry[0];
}

void TextBaseAdventure::Start()
{
	Run();

	return;
}

void TextBaseAdventure::Run()
{
	PlayerName();

	Update();

	return;
}

void TextBaseAdventure::Update()
{
	while (gameOver == false)
	{
		AskQuestion(m_current);

		if (NextQuestion() == false)
		{
			gameOver = true;
		}
	}

	return;
}

void TextBaseAdventure::End()
{

}

void TextBaseAdventure::PlayerName()
{
	char name[255];

	printf("Hello traveler what is your name??...");

	cin.getline(name, 255);

	m_player = new Player(name);

	printf("your name is %s\n", m_player->m_name);
}

void TextBaseAdventure::MakeQuestion(MyString question)
{
	if (m_count >= m_size)
	{
		Question * qBuffer = new Question[m_size * 2];
		
		for (int i = 0; i < m_size; i++)
		{
			qBuffer[i] = m_questionsArry[i];
		}

		delete[] m_questionsArry;

		m_questionsArry = qBuffer;

		m_size *= 2;
	}

	Question tmpQuestion = Question(question);

	m_questionsArry[m_count] = tmpQuestion;

	m_questionsArry[m_count].m_answer = &m_answersArry[m_count];


	return;
}

void TextBaseAdventure::MakeAnswer(MyString answer)
{
	if (m_count >= m_size)
	{
		Answer * aBuffer = new Answer[m_size * 2];

		for (int i = 0; i < m_size; i++)
		{
			
			aBuffer[i] = m_answersArry[i];
		}

		delete[] m_answersArry;

		m_answersArry = aBuffer;

		m_size *= 2;
	}
	
	Answer tmpAnswer = Answer(answer);

	m_answersArry[m_count] = tmpAnswer;

	m_answersArry[m_count].m_question = &m_questionsArry[m_count];

	return;
}

void TextBaseAdventure::AskQuestion(Question * &q)
{
	printf("%s \n", q->m_qValue);

	char resolution[255];
	cin.getline(resolution, 255);

	MyString ms = MyString(resolution);

	if (ms.Compare("quit") == true)
	{
		gameOver = true;
		return;
	}

	if (q->m_answer == NULL)
	{
		gameOver = true;
		return;
	}

	else
	{
		if (ms.FindSubString(q->m_answer->m_aValue))
		{
			printf("correct\n\n");
		}

		else
		{
			printf("incorrect\n\n");

			AskQuestion(m_current);
		}
	}

	return;
}

bool TextBaseAdventure::NextQuestion()
{
	if (m_current->m_answer->m_question == NULL)
	{
		return false;
	}

	m_current++;

	return true;
}

void TextBaseAdventure::AddQuestion(MyString question, MyString Answer)
{
	m_count++;

	MakeQuestion(question);
	MakeAnswer(Answer);

	// question's answer pointer equals answer array index of 0


	// answer's question pointer equals question array index of 0

	return;
}