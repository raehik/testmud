#pragma once

#include "command_interpreter.hpp"

class CommandInterface {
    public:
        CommandInterface();
        void begin();
        void prompt();

    private:
        CommandInterpreter _cmd_interpreter;
        std::string _input_cmd;
        std::string _prompt_str;
};
