#include "pch.h"
#include "Bitmap.h"


Bitmap::Bitmap(int len)
{
	length = len;

	// Creating the array to store length number of objects
	int numberOfElements = 1 + (length /  (8 * sizeof(char)));
	mapPtr = new char[numberOfElements];
}


Bitmap::~Bitmap()
{
	delete[] mapPtr;
}

void Bitmap::add(int index)
{
}

bool Bitmap::remove(int index)
{
	return false;
}

bool Bitmap::contains(int index) const
{
	return false;
}

int Bitmap::getSize() const
{
	return 0;
}

bool Bitmap::operator[](int index) const
{
	return false;
}

bool Bitmap::setBit(int bitIndex)
{
	return false;
}

bool Bitmap::resetBit(int bitIndex)
{
	return false;
}

char Bitmap::getMask(int bitIndex)
{
	return 0;
}
