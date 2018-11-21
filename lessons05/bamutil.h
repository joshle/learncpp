#ifndef BAM_UTIL_H
#define BAM_UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "htslib/sam.h"

using namespace std;

class BamUtil{
public:
	BamUtil();
	~BamUtil();

public:
	static string getQual(bam1_t *b);

	void readAllSamBam(char *infile);
};

#endif