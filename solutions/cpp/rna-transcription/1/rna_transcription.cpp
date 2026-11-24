#include "rna_transcription.h"
#include <algorithm>
#include <map>

namespace rna_transcription {

    const std::map<char, char> rna{ {'G', 'C'}, {'C', 'G'}, {'T', 'A'}, {'A', 'U'} };

    char to_rna(char nucleotide){
        return rna.at(nucleotide);
    }
    
    std::string to_rna(const std::string dna_seq) {
        std::string rna_seq;
        rna_seq.reserve(dna_seq.size());

        for (unsigned char ch : dna_seq) {
            rna_seq.push_back(rna.at(ch));
        }
        return rna_seq;
    }
}