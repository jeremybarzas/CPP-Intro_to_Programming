#include "MyString.h"

class BaseApp
{
public:
	BaseApp() {};
	virtual void Start() = 0;
	virtual void Run() = 0;
	virtual void Update() = 0;
	virtual void End() = 0;
	
	bool gameOver = false;
};

class TextBaseAdventure : public BaseApp
{
public:

	TextBaseAdventure();

	void Start();
	void Run();
	void Update();
	void End();

	class Player;
	class Question;
	class Answer;
	
	Player * m_player;
	Question * m_questionsArry;
	Answer * m_answersArry;

	Question * m_current;

	int m_size = 1;  // these variables to be used for "MakeQuestions" fucntions.
	int m_count = -1; // these variables to be used for "MakeQuestions" fucntions.

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

		MyString m_qValue;
		MyString m_aValue;

		Answer * m_answer;

		Question() {};

		Question(MyString ms)
		{
			m_qValue = ms;
			m_answer = nullptr;
		};

		~Question() {};
	};

	class Answer
	{
	public:

		MyString m_aValue;
		Question * m_question;

		Answer() {};

		Answer(MyString ms)
		{
			m_aValue = ms;
			m_question = nullptr;
		};

		~Answer() {};
	};

	void PlayerName();

	void MakeQuestion(MyString);

	void MakeAnswer(MyString);

	void AddQuestion(MyString, MyString);

	void AskQuestion(Question * &);

	bool NextQuestion();

	~TextBaseAdventure() {};

}; //the end of TBAG class


//======================= Fucntion Archive =======================

   //void MakeQuestion(MyString, MyString);

   //void TextBaseAdventure::MakeQuestion(MyString question, MyString answer)
   //{
   //	m_count++;
   //
   //	if (m_count >= m_size)
   //	{
   //		Question * qBuffer = new Question[m_size * 2];
   //		Answer * aBuffer = new Answer[m_size * 2];
   //
   //		for (int i = 0; i < m_size; i++)
   //		{
   //			qBuffer[i] = m_questionsArry[i];
   //			aBuffer[i] = m_answersArry[i];
   //		}
   //
   //		delete[] m_questionsArry;
   //		delete[] m_answersArry;
   //
   //		m_questionsArry = qBuffer;
   //		m_answersArry = aBuffer;
   //
   //		m_size *= 2;
   //	}
   //
   //	Question tmpQuestion = Question(question);
   //	Answer tmpAnswer = Answer(answer);
   //
   //	m_questionsArry[m_count] = tmpQuestion;
   //	m_answersArry[m_count] = tmpAnswer;
   //
   //	m_questionsArry[m_count].m_answer = &m_answersArry[m_count];
   //	m_answersArry[m_count].m_question = &m_questionsArry[m_count];
   //
   //	return;
   //}
