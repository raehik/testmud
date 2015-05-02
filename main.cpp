#include <string>
#include <sstream>

#include "talker.hpp"
#include "command_interface.hpp"

/*

int main() {
    Talker actor("ayy");
    actor.say("My name is " + actor._name);
    int id = actor._id;
    std::string str_id = static_cast<std::ostringstream*>( &(std::ostringstream() << id) )->str();
    actor.say("My ID is " + str_id);
    return 0;
}

*/

int main() {
    CommandInterface cmd;
    cmd.begin();
    return 0;
}
