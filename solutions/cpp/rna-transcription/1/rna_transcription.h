#pragma once

#include <string>
namespace rna_transcription {

char to_rna(char nucleotide);
std::string to_rna(const std::string dna_seq);

}  // namespace rna_transcription
