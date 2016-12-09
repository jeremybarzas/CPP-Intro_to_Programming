#pragma once
#include "MathLibrary.h"
#include <iostream>

class Agent
{
	Vector2D postion;
	Vector2D velocity;
	float mass;

public:
	Agent(Vector2D pos, Vector2D velo)
	{
		postion = pos;
		velocity = velo;
	}

	bool AddForce(Vector2D force)
	{
		Vector2D currentPos = postion;

		velocity = velocity + force; /* NEED TO CALCULATE TIME AND DELLTA TIME */
		
		postion = postion + velocity; /* NEED TO CALCULATE TIME AND DELLTA TIME */
		
		return (currentPos == postion);
	}   
};

/*
========== This is how u get delta time. ==========

float currTime;

float prevTime = currTime;

float deltaTime = currTime - prevTime;

========== BUttttttt...... ==========

How do i get the current time?!?!?! 

float currTime = ? ;

*/