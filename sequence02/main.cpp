#include "sequence.h"

int main() {
	Sequence seq("dna.txt");
	seq.test();

	cout<<"original is:"<<endl;
	seq.print();
	cout<<endl;

	cout<<"sequence length: "<<seq.length()<<endl;

	cout<<"sequence numberOf A is: "<<seq.numberOf('A')<<endl;

	cout<<"sequence longest Consecutive is: "<<seq.longestConsecutive()<<endl;

	return 0;
}