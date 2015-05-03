#pragma once

#include <string>
#include <vector>

class CommandInterpreter {
    public:
        CommandInterpreter();
        void interpret(std::string cmd);

    private:
        std::vector<std::string> split(std::string &s, char delim);
};
