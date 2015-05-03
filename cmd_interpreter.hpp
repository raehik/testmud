#pragma once

#include <string>
#include <vector>

class CmdInterpreter {
    public:
        CmdInterpreter();
        void interpret(std::string cmd);

    private:
        std::vector<std::string> split(std::string &s, char delim);
};
