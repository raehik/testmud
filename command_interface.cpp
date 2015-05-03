#include "command_interface.hpp"
#include <iostream>
#include <sstream>

CommandInterface::CommandInterface() {
    //std::cout << "new CommandInterface instantiated" << std::endl;
    _cmd_interpreter = CommandInterpreter();
}

void CommandInterface::begin() {
    prompt();
}

void CommandInterface::prompt() {
    //std::cout << "Please type your command:" << std::endl;
    std::cout << " > ";
    std::getline(std::cin, _input_cmd);
    _cmd_interpreter.interpret(_input_cmd);
}
