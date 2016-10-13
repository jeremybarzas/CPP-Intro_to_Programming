#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class BaseApp
{
public:
	virtual void Start() = 0;
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
	void Start();
	void Update();

	RPS() {};
	~RPS() {};
};