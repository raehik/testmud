#pragma once

#include "command_interpreter.hpp"

class CommandInterface {
    public:
        CommandInterface();
        void begin();

    private:
        CommandInterpreter _cmd_interpreter;
};
