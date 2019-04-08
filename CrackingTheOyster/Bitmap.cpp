#include "pch.h"
#include "Bitmap.h"


Bitmap::Bitmap(int len)
{
	// Setting the max number of elements in the Bitmap
	length = len;

	// Creating the array to store length number of objects
	int numberOfElements = 1 + (length /  (8 * sizeof(char)));
	mapPtr = new char[numberOfElements];

	// Initialise all elements to 0
	for (int i = 0; i < numberOfElements; ++i)
		mapPtr[i] = 0;
}


Bitmap::~Bitmap()
{
	delete[] mapPtr;
}

bool Bitmap::add(int index)
{
	// Get a mask with a 1 at the correct radix of the char (0 - 7)
	//	0s everywhere else

	// Save the oldCopy of the char at that index

	// OR the mask with the oldCopy and add the new result into the mapPtr array

	// if the oldCopy AND the mask = 0, a value was added, return true
	//	else no new value was added, return false
}

bool Bitmap::remove(int index)
{
	// Get a mask with a 0 at the correct radix of the char (0 - 7)
	//	1s everywhere else

	// Save the oldCopy of the char at that index

	// AND the mask with the oldCopy and add the new result into the mapPtr array

	// take a new mask, with a 1 at the correct radix of the char (0 - 7)
	//	0s everywhere else
	//	if the oldCopy AND the new mask = 0, a value was added, return true
	//	else no new value was added, return false
	return false;
}

bool Bitmap::contains(int index) const
{
	// Get a mask with a 0 at the correct radix of the char (0 - 7)
	//	1s everywhere else

	// if the oldCopy AND the new mask = 0, a value was added, return true
	//	else no new value was added, return false
	return false;
}

int Bitmap::getSize() const
{
	return size;
}

bool Bitmap::operator[](int index) const
{
	// get the correct index of the mapPtr
	// Use a mask to AND with the value at that index and return the result
	return false;
}

bool Bitmap::setBit(int bitIndex)
{
	// mask with a 1 at the appropriate bit
	// OR with the correct index in the mapPtr 
	
	// return true if a change occoured, false otherwise 
	return false;
}

bool Bitmap::resetBit(int bitIndex)
{
	// mask with a 0 at the appropriate bit
	// AND with the correct index in the mapPtr 

	// return true if a change occoured, false otherwise 
	return false;
}

char Bitmap::getMask(int bitIndex)
{
	// returns a mask with 1 at the appropriate location (0 - 7)
	char mask = 1;
	if (bitIndex <= 7)
		return mask << bitIndex;
	else return 0;
}
