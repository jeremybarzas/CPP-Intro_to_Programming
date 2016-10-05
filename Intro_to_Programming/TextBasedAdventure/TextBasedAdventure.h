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

	TextBasedAdventure();

	void Start();
	void Run();
	void Update();
	void End();

	class Player;
	class Question;
	class Answer;
	
	Player * m_player;
	Question * m_questionsArry;

	Question * m_currentQ;
	Question * m_lastQ;

	int m_qSize = 1;
	int m_qIndex = 0;

	int qOutcome = 0;
	
	class Player
	{
	public:

		MyString m_name;

		bool m_alive;

		int m_health;

		Player() {};

		Player(MyString m);
		
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

	void PlayerName();

	int AddQuestion(MyString, MyString);

	int AskQuestion(Question *);

	~TextBasedAdventure() {};

};