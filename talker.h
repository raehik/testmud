#include <string>
#include "actor.h"

#ifndef TALKER_H_INCLUDED
#define TALKER_H_INCLUDED

class Talker : public Actor {
    public:
        Talker(std::string);
        void say(std::string sentence);

    private:
        double _char_speed_secs;
        void print_char(char c);
        void print_final_char(char c);
};

#endif // TALKER_H_INCLUDED
