#pragma once
class Bitmap
{
public:
	static const int DEFAULT_SIZE = 100;

	Bitmap(int = DEFAULT_SIZE);
	~Bitmap();

	//	add an int to the bitmap
	void add(int);
	bool remove(int);
	bool contains(int) const;

	// size
	int getSize() const;

	// operator overloading
	bool operator[](int) const;	// for constant r-values

private:
	int length;
	int size;
	char *mapPtr;

	// private member functions to help with bit-manipulation
	bool setBit(int bitIndex);
	bool resetBit(int bitIndex);
	char getMask(int bitIndex);
};

