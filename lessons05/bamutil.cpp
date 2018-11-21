#include "bamutil.h"
#include <sstream>
#include <iostream>
#include <vector>
#include <memory.h>

BamUtil::BamUtil(){
}

BamUtil::~BamUtil(){
}

string BamUtil::getQual(bam1_t *b){
	uint8_t *data = bam_get_qual(b);
	int len = b->core.l_qseq;
	string s(len, '\0');
	for(int i=0; i<len; i++) {
		s[i] = (char)(data[i] + 33);
	}
	return s;
}
