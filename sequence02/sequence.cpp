#include "sequence.h"

Sequence::Sequence(string filename){
	// string str;

	// FILE * pFile;
 	// char buffer[100];

	// pFile = fopen(filename, "r");
	// if (pFile == NULL) cerr << "Error opening file" << filename;
	// else
	// {
	// 	while ( ! feof (pFile) )
	// 	{
	// 		if ( fgets(buffer , 100 , pFile) == NULL ) break;
	// 		// fputs (buffer , stdout);
	// 		str += buffer->str()
	// 	}
	// 	fclose (pFile);
	// }

	std::ifstream t(filename);
	//mStr = string str((std::istreambuf_iterator<char>(t)),
    //           std::istreambuf_iterator<char>());

	stringstream buffer;
	buffer << t.rdbuf();
	mStr = buffer.str();
}

void Sequence::print(){
	std::cerr << mStr;
}

int Sequence::length(){
	int len = 0;
	string str(mStr.length(), 0);
	for(int c=0; c<mStr.length(); c++){
		if(mStr[c] == 'A' || mStr[c] == 'T' || mStr[c] == 'C' || mStr[c] == 'G'){
			len++;
		}
	}
	return len;
}

int Sequence::numberOf(char base){
	int len = 0;
	string str(mStr.length(), 0);
	for(int c=0; c<mStr.length(); c++){
		if(mStr[c] == base){
			len++;
		}
	}
	return len;
}

string Sequence::longestConsecutive(){
	int max = 0;
	int step = 0;
	char currentBase;
	char maxBase;
	string consecutive;

	for(int c=0; c<mStr.length(); c++){
		if(mStr[c] == currentBase){
			step++;
			if(step > max){
				max = step;
				maxBase = currentBase;
			}
		} else {
			// 初始化
			if(max == 0){
				max = 1;
				maxBase = mStr[c];
			}
			// 重置
			currentBase = mStr[c];
			step = 1;
		}
	}

	for(int i=0; i<max; i++){
		consecutive += maxBase;
	}

	return consecutive;
}

string Sequence::longestRepeated(){
	string str("");
	return str;
}

bool Sequence::test(){

	return true;
}
