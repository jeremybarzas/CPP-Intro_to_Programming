#include "TextBasedAdventure.h"

TextBaseAdventure::TextBaseAdventure()
{
	m_questionsArry = new Question[m_qSize];
	m_answersArry = new Answer[m_aSize];
	
	MakeQuestion("1.) The answer should be a");
	MakeQuestion("2.) The answer should be b");
	MakeQuestion("3.) The answer should be c");
	MakeQuestion("4.) The answer should be d");

	MakeAnswer("a");
	MakeAnswer("b");
	MakeAnswer("c");
	MakeAnswer("d");

	AttachAnswer(&m_questionsArry[0], &m_answersArry[0]);
	AttachAnswer(&m_questionsArry[1], &m_answersArry[1]);
	AttachAnswer(&m_questionsArry[2], &m_answersArry[2]);
	AttachAnswer(&m_questionsArry[3], &m_answersArry[3]);

	AttachQuestion(&m_answersArry[0], &m_questionsArry[1]);
	AttachQuestion(&m_answersArry[1], &m_questionsArry[2]);
	AttachQuestion(&m_answersArry[2], &m_questionsArry[3]);
	AttachQuestion(&m_answersArry[3], &m_questionsArry[0]);

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

		if (m_current->m_answer->m_NextQuestion == NULL)
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
	m_qCount++;

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
	m_aCount++;

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

void TextBaseAdventure::AttachAnswer(Question *question, Answer *answer)
{
	question->m_answer = answer;
}

void TextBaseAdventure::AttachQuestion(Answer *answer, Question *question)
{
	answer->m_NextQuestion = question;
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
		gameOver = true;
		return;
	}

	else
	{
		if (ms.FindSubString(q->m_answer->m_aValue))
		{
			printf("correct\n\n");
			m_current = q->m_answer->m_NextQuestion;
		}

		else
		{
			printf("incorrect\n\n");

			AskQuestion(m_current);
		}
	}

	return;
}