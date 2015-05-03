#include "cmd_interface.hpp"
#include <iostream>
#include <sstream>

CmdInterface::CmdInterface() {
    _cmd_interpreter = CmdInterpreter();
    _prompt_str = "> ";
}

void CmdInterface::begin() {
    prompt();
}

void CmdInterface::prompt() {
    std::cout << _prompt_str;
    std::getline(std::cin, _input_cmd);
    _cmd_interpreter.interpret(_input_cmd);
}
