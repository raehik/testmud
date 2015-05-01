#include "actor.hpp"

Actor::Actor(std::string name) {
    _id = getNewID();
    _name = name;
}


// private
ActorID Actor::getNewID() {
    // TODO
    // found by random die roll.
    // guaranteed to be random.
    return 0;
}
