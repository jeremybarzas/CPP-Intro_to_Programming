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
	virtual void Shutdown() = 0;

	bool gameover;

	BaseApp();
	~BaseApp() {};
};

class RPS : public BaseApp
{
public:
	void Start();
	void Update();
	void Shutdown();

	RPS() {};
	~RPS() {};
};