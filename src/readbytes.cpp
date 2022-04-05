#include <fstream>
#include <iostream>
#include "MIDI.hpp"

int read_bytes(std::ifstream& f_in, unsigned buffer_size){
    char *c;
    c = new char[buffer_size];

    f_in.read(c, buffer_size);

    int result = 0;
    for(unsigned i = 0; i < buffer_size; i++){
        std::cout << std::hex << ((int)c[i] & 0xff) << " " << std::dec;
        result <<= 8;
        result += c[i] & 0xff;
    }
    std::cout << "\n";

    return result;
}