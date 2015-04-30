#ifndef ACTOR_H_INCLUDED
#define ACTOR_H_INCLUDED

#include <string>
#include "id.h"

// This is a base class which should NOT be instantiated alone. You
// should use another class which inherits from this class.

class Actor {
    public:
        Actor(std::string name);

        ID _id;
        std::string _name;

    private:
        UniqueID getNewID();
};

#endif // ACTOR_H_INCLUDED
