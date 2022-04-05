#include "MIDI.hpp"
#include <fstream>
#include <iostream>

MIDI::MIDI(std::string path){
    std::ifstream f_in;
    f_in.open(path);

    read_bytes(f_in, 8);
    m_format = read_bytes(f_in, 2);
    m_ntracks = read_bytes(f_in, 2);
    unsigned ticks = read_bytes(f_in, 2);

    m_tickdiv = ticks & 0x7fff;
    m_tickmode = ticks >> 15;

    std::cout << "Format: " << m_format << "\n";
    std::cout << "Tracks: " << m_ntracks << "\n";
    std::cout << "Ticks: " << m_tickdiv << "\n";
    std::cout << "Tickmode: " << m_tickmode << "\n";
}
