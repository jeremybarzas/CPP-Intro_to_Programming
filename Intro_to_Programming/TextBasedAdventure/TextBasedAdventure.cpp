#include "TextBasedAdventure.h"

TextBaseAdventure::TextBaseAdventure()
{
	m_questionsArry = new Question[m_qSize];

	AddQuestion("1.) Valid answers are: a, b, c ", "a", "b", "c");
	AddQuestion("2.) Valid answers are: d, e, f ", "d", "e", "f");
	AddQuestion("3.) Valid answers are: g, h, i ", "g", "h", "i");
	AddQuestion("4.) Valid answers are: j, k, l ", "j", "k", "l");

	m_current = &m_questionsArry[0];

	//m_answersArry = new Answer[m_aSize];
	
	/*
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
	AttachQuestion(&m_answersArry[3], &m_questionsArry[0]);*/
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

bool TextBaseAdventure::AskQuestion(Question *current)
{
	printf("%s \n", current->m_qValue);

	char resolution[255];
	cin.getline(resolution, 255);

	MyString ms = MyString(resolution);

	if (ms.Compare("quit") == true)
	{
		printf("quit::the game is over.\n\n");
		gameOver = true;
		return false;
	}

	else
	{
		for (int i = 0; i < current->m_aSize; i++)
		{
			if (ms.FindSubString(current->m_answers[i].m_aValue))
			{
				printf("correct\n\n");
				current->m_answers[i].m_NextQuestion = m_current++;
				return true;
			}

			else
			{
				printf("incorrect\n\n");
				return false;
			}
		}
	}	
}

TextBaseAdventure::Question TextBaseAdventure::CreateQuestion(MyString q, MyString a1, MyString a2, MyString a3)
{
	Question tmpQ = Question(q);

	tmpQ.m_answers[tmpQ.m_aIndex] = tmpQ.CreateAnswer(a1);
	tmpQ.m_aIndex++;

	tmpQ.m_answers[tmpQ.m_aIndex] = tmpQ.CreateAnswer(a2);
	tmpQ.m_aIndex++;

	tmpQ.m_answers[tmpQ.m_aIndex] = tmpQ.CreateAnswer(a3);

	return tmpQ;
}

TextBaseAdventure::Answer TextBaseAdventure::Question::CreateAnswer(MyString answer)
{
	if (m_aIndex >= this->m_aSize)
	{
		Answer * aBuffer = new Answer[this->m_aSize + 1];

		for (int i = 0; i < this->m_aSize; i++)
		{

			aBuffer[i] = this->m_answers[i];
		}

		delete[] this->m_answers;

		this->m_answers = aBuffer;

		this->m_aSize += 1;
	}

	Answer tmpAnswer = Answer(answer);

	return tmpAnswer;
}

int TextBaseAdventure::AddQuestion(MyString q, MyString a1, MyString a2, MyString a3)
{
	if (m_qIndex >= m_qSize)
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

	Question tmpQ = CreateQuestion(q, a1, a2, a3);

	m_questionsArry[m_qIndex] = tmpQ;

	return m_qIndex++;
}







//================ Function Archive==========================//

/*

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

*/