#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class BaseApp
{
public:
	void Start();
	void Run();
	virtual void Update() = 0;
	void Shutdown();

	bool gameover;

	BaseApp();
	~BaseApp() {};
};

class RPS : public BaseApp
{
public:
	void Update();

	RPS() {};
	~RPS() {};
};