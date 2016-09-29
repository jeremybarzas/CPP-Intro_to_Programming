#include "TextBasedAdventure.h"

TextBaseAdventure::TextBaseAdventure()
{
	m_questionsArry = new Question[m_qSize];
	m_answersArry = new Answer[m_aSize];
	
	AddQuestion("1.) The answer should be a ", "a");
	AddQuestion("2.) The answer should be b ", "b");
	AddQuestion("3.) The answer should be c ", "c");
	//AddQuestion("4.) The answer should be d ", "d");

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
			printf("Update::the game is over.\n\n");
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
	if (m_qCount >= m_qSize)
	{
		Question * qBuffer = new Question[m_qSize * 2];
		
		for (int i = 0; i < m_qSize; i++)
		{
			qBuffer[i] = m_questionsArry[i];
		}

		delete[] m_questionsArry;

		m_questionsArry = qBuffer;

		m_qSize *= 2;
	}

	Question tmpQuestion = Question(question);

	m_questionsArry[m_qCount] = tmpQuestion;

	return;
}

void TextBaseAdventure::MakeAnswer(MyString answer)
{
	if (m_aCount >= m_aSize)
	{
		Answer * aBuffer = new Answer[m_aSize * 2];

		for (int i = 0; i < m_aSize; i++)
		{
			
			aBuffer[i] = m_answersArry[i];
		}

		delete[] m_answersArry;

		m_answersArry = aBuffer;

		m_aSize *= 2;
	}
	
	Answer tmpAnswer = Answer(answer);

	m_answersArry[m_aCount] = tmpAnswer;

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
		printf("quit::the game is over.\n\n");
		gameOver = true;
		return;
	}

	if (q->m_answer == NULL)
	{
		printf("q->m_answer == NULL::the game is over.\n\n");
		//gameOver = true;
		//return;
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
	if (m_current->m_answer->m_NextQuestion == NULL)
	{
		return false;
	}

	m_current++;

	return true;
}

void TextBaseAdventure::AddQuestion(MyString question, MyString Answer)
{
	m_qCount++;
	m_aCount++;

	MakeQuestion(question);
	MakeAnswer(Answer);

	// question's answer pointer equals answer array index of 0
	m_questionsArry[m_qCount].m_answer = &m_answersArry[m_aCount];

	// answer's question pointer equals question array index of 0
	m_answersArry[m_aCount].m_NextQuestion = &m_questionsArry[m_qCount];

	return;
}