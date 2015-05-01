#include <iostream>
#include <unistd.h>
#include <stdio.h>

#include "talker.hpp"

const int SECS_TO_MICROSECS = 1000000;

Talker::Talker(std::string name) : Actor(name) {
    _name = name;
    _char_speed_secs = 0.03;
}

void Talker::say(std::string sentence) {
    for (unsigned int i = 0; i < sentence.length() - 1; i++) {
        print_char(sentence[i]);
    }
    print_final_char(*sentence.rbegin());
}

void Talker::print_char(char c) {
    std::cout << c;
    std::cout.flush();
    usleep(_char_speed_secs * SECS_TO_MICROSECS);
}

void Talker::print_final_char(char c) {
    std::cout << c << std::endl;
}
