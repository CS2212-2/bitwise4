#include <iostream>

using namespace std;

//The code below shows how to set or clear a bit of an integer.



void binary(unsigned int n)
{
	for(int i = 256; i > 0; i = i/2) {
		if(n & i)
			cout << " 1";
		else
			cout << " 0";
	}
	cout << endl;
}

bool getBit(int n, int index)
{
	return ( (n & (1 << index) ) > 0);
}

int setBit(int n, int index, bool b)
{
	if(b)
		return (n | (1 << index)) ;
	else {
		int mask = ~(1 << index);
		return n & mask;
	}
}

int main()
{
	int num, index;

	num = 16;

	cout << "Input" << endl;
	for (int i = 7; i >= 0; i--)
		cout << getBit(num,i) << " ";
	cout << endl;

	/* set bit */
	index = 6;
	cout << "Setting " << index << "-th bit" << endl;
	num = setBit(num, index, true);
	for (int i = 7; i >= 0; i--)
		cout << getBit(num,i) << " ";
	cout << endl;

	/* unset (clear) bit */
	index = 4;
	cout << "Unsetting (Clearing) " << index << "-th bit" << endl;
	num = setBit(num, index, false);
	for (int i = 7; i >= 0; i--)
		cout << getBit(num,i) << " ";
	cout << endl;

	return 0;
}
