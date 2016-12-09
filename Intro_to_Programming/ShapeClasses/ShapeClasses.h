#pragma once
#include <iostream>

using std::cout;

class BaseShape
{
public:
	BaseShape() {};
	~BaseShape() {};

	virtual void DebugPrint() = 0;
};

class Point : public BaseShape
{
	float m_coordinates[2];

public:
	Point() {};
	~Point() {};

	Point(float a1, float a2) 
	{
		m_coordinates[0] = a1;
		m_coordinates[1] = a2;
	}

	float getX()
	{
		return m_coordinates[0];
	}

	float getY()
	{
		return m_coordinates[1];
	}

	void DebugPrint()
	{
		cout << "point exists at: " << m_coordinates[0] << ", " << m_coordinates[1] << "\n\n";
	}
};

class Line : public BaseShape
{
	float m_length;

	Point m_start;
	Point m_end;

public:
	Line() {};
	~Line() {};

	Line(float x1, float y1, float x2, float y2)
	{
		m_start = Point(x1, y1);
		m_end = Point(x2, y2);

		m_length = sqrt(((m_start.getX() - m_end.getX()) * (m_start.getX() - m_end.getX())) + ((m_start.getY() - m_end.getY()) * (m_start.getY() - m_end.getY())));
	}

	void DebugPrint()
	{
		cout << "line's length is: " << m_length << "\n\n";

		cout << "line's start ";
		m_start.DebugPrint();

		cout << "line's end ";
		m_end.DebugPrint();
	}
};

class Rectangle : public BaseShape
{
	Point m_startPos;

	float m_width;
	float m_height;

	Line m_bot;
	Line m_top;
	Line m_left;
	Line m_right;

public:
	Rectangle() {};
	~Rectangle() {};

	Rectangle(float w, float h, float x, float y)
	{
		m_startPos = Point(x, y);
		m_width = w;
		m_height = h;

		m_bot = Line(m_startPos.getX(), m_startPos.getY(), (m_startPos.getX() + m_width), m_startPos.getY());
		
		m_top = Line(m_startPos.getX(), (m_startPos.getY() + m_height), (m_startPos.getX() + m_width), (m_startPos.getY() + m_height));

		m_left = Line(m_startPos.getX(), m_startPos.getY(), m_startPos.getX(), (m_startPos.getY() + m_height));

		m_right = Line((m_startPos.getX() + m_width), m_startPos.getY(), (m_startPos.getX() + m_width), (m_startPos.getY() + m_height));
	}

	void DebugPrint()
	{
		cout << "Rectangle's Width is: " << m_width << "\n\n";

		cout << "Rectangle's Height is: " << m_height << "\n\n";

		cout << "===== Rectangle's start =====\n\n";
		m_startPos.DebugPrint();
		cout << "\n";

		cout << "===== Rectangle's bottom =====\n\n";
		m_bot.DebugPrint();
		cout << "\n";

		cout << "===== Rectangle's top =====\n\n";
		m_top.DebugPrint();
		cout << "\n";

		cout << "===== Rectangle's left =====\n\n";
		m_left.DebugPrint();
		cout << "\n";

		cout << "===== Rectangle's right =====\n\n";
		m_right.DebugPrint();
		cout << "\n";
	}
};

class Triangle : public BaseShape 
{
	Point m_startPos;

	float m_width;
	float m_height;

	Line m_bot;
	Line m_left;
	Line m_right;

public:
	Triangle() {};
	~Triangle() {};

	Triangle(float w, float h, float x, float y)
	{
		m_startPos = Point(x, y);

		m_width = w;
		m_height = h;

		m_bot = Line(m_startPos.getX(), m_startPos.getY(), (m_startPos.getX() + m_width), m_startPos.getY());

		m_left = Line(m_startPos.getX(), m_startPos.getY(), (m_startPos.getX() + (m_width / 2)), (m_startPos.getY() + m_height));

		m_right = Line((m_startPos.getX() + m_width), m_startPos.getY(), (m_startPos.getX() + (m_width / 2)), (m_startPos.getY() + m_height));
	}

	void DebugPrint()
	{
		cout << "Triangle's Width is: " << m_width << "\n\n";

		cout << "Triangle's Height is: " << m_height << "\n\n";

		cout << "===== Triangle's start =====\n\n";
		m_startPos.DebugPrint();
		cout << "\n";

		cout << "===== Triangle's bottom =====\n\n";
		m_bot.DebugPrint();
		cout << "\n";

		cout << "===== Triangle's left =====\n\n";
		m_left.DebugPrint();
		cout << "\n";

		cout << "===== Triangle's right =====\n\n";
		m_right.DebugPrint();
		cout << "\n";
	}
};

class Circle : public BaseShape
{
	Point m_startPos;

	float m_radius;
	float m_diameter;

public:
	Circle() {};
	~Circle() {};

	Circle(float rad, float x, float y)
	{
		m_radius = rad;
		m_diameter = m_radius * 2;
		m_startPos = Point(x, y);
	}

	void DebugPrint()
	{
		cout << "Circle's Radius is: " << m_radius << "\n\n";

		cout << "Circle's Diameter is: " << m_diameter << "\n\n";

		cout << "===== Circle's start =====\n\n";
		m_startPos.DebugPrint();
	}
};