#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <iostream>
#include "bamutil.h"
#include "htslib/sam.h"

using namespace std;

void readAllSamBam(const char *infile) {
    samFile *in = sam_open(infile, "r");
    bam_hdr_t *header = sam_hdr_read(in);

    bam1_t *aln = bam_init1();

    while(sam_read1(in, header, aln) >= 0) {
        cout << BamUtil::getQual(aln) << endl;
    }

    bam_destroy1(aln);
    bam_hdr_destroy(header);
    sam_close(in);
}

int main(int argc, char* argv[]){
    string str("chr1.bam");

    readAllSamBam(str.c_str());

    return 0;
}