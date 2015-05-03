#include <iostream>
#include <sstream>
#include "cmd_interpreter.hpp"

CmdInterpreter::CmdInterpreter() {
}

// private
/**
 * Split a command into words (separated by spaces).
 */
std::vector<std::string> CmdInterpreter::split(std::string &s, char delim) {
    // taken from http://stackoverflow.com/a/236803/2246637
    // thanks!
    std::vector<std::string> split_string;
    std::stringstream ss(s);
    std::string item;

    while (std::getline(ss, item, delim)) {
        split_string.push_back(item);
    }

    return split_string;
}

// public
/**
 * Interpret a command.
 * TODO when I know how this will continue
 */
void CmdInterpreter::interpret(std::string cmd) {
    char DELIM = ' ';

    // split command into words
    std::vector<std::string> split_cmd = split(cmd, DELIM);

    // print vector items using an iterator
    /*
    for (std::vector<std::string>::iterator it = split_cmd.begin(); it != split_cmd.end(); ++it) {
        std::cout << *it;
    }
    */

    // print vector items using an index
    for (std::vector<std::string>::size_type i = 0; i != split_cmd.size(); i++) {
        std::cout << "Word " << i << ": " << split_cmd[i] << std::endl;
    }
}
