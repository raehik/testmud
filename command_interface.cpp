#include "command_interface.hpp"
#include <iostream>
#include <sstream>

CommandInterface::CommandInterface() {
    _cmd_interpreter = CommandInterpreter();
    _prompt_str = "> ";
}

void CommandInterface::begin() {
    while (true) {
        prompt();
    }
}

void CommandInterface::prompt() {
    // print a prompt
    std::cout << _prompt_str;

    // get & store a line from the user
    std::getline(std::cin, _input_cmd);

    // interpret command
    // TODO: should this execute too? interface shouldn't say to execute
    // after interpreting, right?
    _cmd_interpreter.interpret(_input_cmd);
}
