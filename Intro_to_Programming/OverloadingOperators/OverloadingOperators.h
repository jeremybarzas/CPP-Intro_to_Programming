#pragma once
#include <iostream>
#include "string.h"

using std::string;

class Item
{
public:
	bool operator == (const Item&);

	Item operator + (const Item&);

	string m_name;

	Item() {};
	~Item() {};
	Item(string n)
	{
		m_name = n;
	}
};

bool Item::operator == (const Item& item)
{
	if (this->m_name == item.m_name)
	{
		return true;
	}
	return false;
}

Item Item::operator + (const Item& item)
{
	string newname = this->m_name.append(item.m_name);

	return Item(newname);
}