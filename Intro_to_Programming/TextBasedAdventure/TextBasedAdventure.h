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

class TextBasedAdventure : public BaseApp
{
public:

	int m_qSize;
	int m_qIndex;

	int qOutcome;

	TextBasedAdventure();

	void Start();
	void Run();
	void Update();
	void End();

	class Player;
	class Question;
	
	Player * m_player;
	Question * m_questionsArry;

	Question * m_currentQ;
	Question * m_lastQ;

	class Player
	{
	public:

		MyString m_name;

		bool m_alive;

		int m_health;

		Player() {};

		Player(MyString);
		
		~Player() {};
	};

	class Question
	{
	public:

		MyString m_qValue;
		MyString m_aValue;

		Question() {};

		Question(MyString, MyString);

		~Question() {};
	};

	void PrintInstructions();

	bool PlayerName();

	int AddQuestion(MyString, MyString);

	int AskQuestion(Question *);

	void CreateQuestion();

	~TextBasedAdventure() {};
};