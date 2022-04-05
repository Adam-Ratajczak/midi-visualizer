#pragma once

#include <string>
class MIDI{
public:
    MIDI(std::string path);

private:
    unsigned m_format;
    unsigned m_ntracks;
    unsigned m_tickdiv;
    bool m_tickmode;
};

int read_bytes(std::ifstream& f_in, unsigned buffer_size);
