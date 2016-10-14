#pragma once
#include <iostream> 

template<typename T>
class Bucket
{
public:
	int m_index;
	int m_size;

	T * m_items;

	Bucket() {};
	~Bucket() {};
	Bucket(int);
	
	bool Add(T&);
	void pour();
	void info();
};

template <typename T>
Bucket<T>::Bucket(int a)
{
	m_size = a;
	m_index = 0;
	m_items = new T[m_size];
}

template <typename T>
bool Bucket<T>::Add(T &a)
{
	if (m_index < m_size)
	{
		m_items[m_index] = a;

		m_index++;

		return true;
	}
	else
		return false;
}

template <typename T>
void Bucket<T>::pour()
{
	delete[] m_items;
}

/*
conversion specifier prints a character.
ASCII values (I assume you live in the ASCII world) 0 and 1 are non-printable in ASCII.
The ASCII value for '0' and '1' characters are 0x30 and 0x31.
The result of printing a non-printable is implementation dependent.
*/
template<typename T>
void Bucket<T>::info()
{
	for (int i = 0; i < m_size; ++i)
	{
		std::cout << m_items[i] << "\n";
	}

	printf("\n");
}