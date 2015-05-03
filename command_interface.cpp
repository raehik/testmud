#include "command_interface.hpp"
#include <iostream>
#include <sstream>

CommandInterface::CommandInterface() {
    _cmd_interpreter = CommandInterpreter();
    _prompt_str = "> ";
}

void CommandInterface::begin() {
    prompt();
}

void CommandInterface::prompt() {
    std::cout << _prompt_str;
    std::getline(std::cin, _input_cmd);
    _cmd_interpreter.interpret(_input_cmd);
}
