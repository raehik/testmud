#include <iostream>
#include "command_interpreter.hpp"

CommandInterpreter::CommandInterpreter() {
    std::cout << "new CommandInterpreter instantiated";
}

void CommandInterpreter::interpret(std::string cmd) {
    std::cout << "command to interpret: " << cmd;
}
