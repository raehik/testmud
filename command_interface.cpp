#include "command_interface.hpp"
#include <iostream>

CommandInterface::CommandInterface() {
    std::cout << "new CommandInterface instantiated" << std::endl;
    CommandInterpreter _cmd_interpreter = CommandInterpreter();
}

void CommandInterface::begin() {
    std::cout << "Please type your command:" << std::endl;
    std::cout << " > ";
}

void CommandInterface::prompt
