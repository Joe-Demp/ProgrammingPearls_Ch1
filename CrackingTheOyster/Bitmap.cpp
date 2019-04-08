#include "pch.h"
#include "Bitmap.h"


Bitmap::Bitmap(int len)
{
	length = len;
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

bool Bitmap::contains(int index)
{
	return false;
}

bool & Bitmap::operator[](int index)
{
	// TODO: insert return statement here
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
