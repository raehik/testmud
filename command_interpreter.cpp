#include <iostream>
#include <sstream>
#include "command_interpreter.hpp"

CommandInterpreter::CommandInterpreter() {
}

// private
/**
 * Split a command into words (separated by spaces).
 */
std::vector<std::string> CommandInterpreter::split(std::string &s, char delim) {
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
void CommandInterpreter::interpret(std::string cmd) {
    char DELIM = ' ';
    int VERB_INDEX = 0;
    int ARG_START_INDEX = 1;

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

    // check if we know the verb
    // for now, the verb is *always* the first element, but this may
    // change later
    std::string verb = split_cmd[VERB_INDEX];
    if (verb == "look") {
        // check all args *in sequence* for keywords
        // if an unexpected word is encountered (i.e. bad grammar), end
        // with an error
        for (std::vector<std::string>::size_type i = ARG_START_INDEX; i != split_cmd.size(); i++) {
            std::string word = split_cmd[i];

            // do manual checks
            if (word == "signpost") {
                std::cout << "You look at the signpost." << std::endl;
                break;
            }

            // allow if word is an article
            if (word == "a" || word == "the") {
                continue;
            } else {
                std::cout << "ERROR: unexpected word '" << word << "'"  << std::endl;
                break;
            }
        }
    } else {
        std::cout << "ERROR: unknown verb '" << verb << "'" << std::endl;
    }
}
