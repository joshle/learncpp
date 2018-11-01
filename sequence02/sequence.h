#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <streambuf>
#include <fstream>
#include <sstream>

using namespace std;

class Sequence{
public:
	Sequence(string filename);
	void print();

	int length();
	int numberOf(char base);

	string longestConsecutive();

	string longestRepeated();

	static bool test();

public:
	string mStr;
};

#endif