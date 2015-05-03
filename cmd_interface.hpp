#pragma once

#include "cmd_interpreter.hpp"

class CmdInterface {
    public:
        CmdInterface();
        void begin();
        void prompt();

    private:
        CmdInterpreter _cmd_interpreter;
        std::string _input_cmd;
        std::string _prompt_str;
};
