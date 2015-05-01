#ifndef ACTOR_HPP_INCLUDED
#define ACTOR_HPP_INCLUDED

#include <string>
#include "actor_id.hpp"

// This is a base class which should NOT be instantiated alone. You
// should use another class which inherits from this class.

class Actor {
    public:
        Actor(std::string name);

        ActorID _id;
        std::string _name;

    private:
        ActorID getNewID();
};

#endif // ACTOR_HPP_INCLUDED
