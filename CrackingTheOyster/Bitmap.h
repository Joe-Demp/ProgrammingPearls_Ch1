#pragma once
class Bitmap
{
public:
	static const int DEFAULT_SIZE = 100;

	Bitmap(int = DEFAULT_SIZE);
	~Bitmap();

	//	add an int to the bitmap
	void add(int index);
	bool remove(int index);
	bool contains(int index) const;

	// operator overloading
	bool &operator[](int index);		// for modifiable l-values
	bool operator[](int index) const;	// for constant r-values

private:
	const int length;
	int size;
	char *mapPtr;

	bool setBit(int bitIndex);
	bool resetBit(int bitIndex);
	char getMask(int bitIndex);
};

