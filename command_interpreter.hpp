#pragma once

#include <string>

class CommandInterpreter {
    public:
        CommandInterpreter();
        void interpret(std::string cmd);
};
