#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T *m_array;
	unsigned int m_size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	~Array();

	Array &operator=(const Array &other);
	T &operator[](unsigned int i);
	const T &operator[](unsigned int i) const;

	unsigned int size() const;
};

template <typename T>
Array<T>::Array() : m_array( new T[0] ), m_size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : m_array(new T[n]()), m_size(n)
{
}


template <typename T>
Array<T>::Array(const Array &other) : m_array(new T[other.m_size]), m_size(other.m_size)
{
	for (unsigned int i = 0; i < m_size; i++)
	{
		m_array[i] = other.m_array[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] m_array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this == &other)
	{
		return *this;
	}

	T* new_array = new T[other.m_size];
	for (unsigned int i = 0; i < other.m_size; i++)
	{
		new_array[i] = other.m_array[i];
	}

	delete[] m_array;
	m_array = new_array;
	m_size = other.m_size;

	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= m_size)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return m_array[i];
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= m_size)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return m_array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return m_size;
}

#endif
