Architecture design
===================

This is the architecture document for the TestMUD game. In this I will
endeavour to document all my thoughts & plans for the game's classes and
internal structure.


Things to remember
------------------

  * This is a **MUD**; not a **roguelike**
      * That means a command-based interface, not a key-based one.
      * It also means no text displays e.g. maps.


Ideas
-----

I want to create an extensible fantasy MUD-like game using the terminal
and very simple printing (a la MUDs of past).

Or maybe not using the terminal, and maybe OpenGL or SDL? I don't really
know. I would like to build an extensible framework. That's a long shot
though.


Notes
-----

### Actor

  * Everything in the world is represented by Actors.

An Actor is essentially a 'physical' thing in the world. It is something
which can be defined as occupying a specific coordinate (or set/range of
coordinates).

More specifically, every object in the world is stored as a class
*inheriting from* Actor.

  * Every Actor holds a unique identifier (a number). All other
    object variables depend on the object's subclass.

I've decided on this method because certain objects may not even need
names or descriptions, but a number isn't enough.  Most Actors however
will have a description, e.g.:

  > You look at the **battle-hardened soldier**.

and

  > You look at the **rusty metal slab**.

But maybe not all. I dunno, maybe maybe? Maybe.


Mixins
------

C++ can do mixins via **multiple inheritance**. I'm going to call them
mixins because the name makes sense to me.

These classes should be inherited to add certain attributes to classes.
They won't be used *everywhere*, since usually you'll be using something
a little more sophisticated than a Talker, but they could be useful if
you for example wanted a talking rock: you have a base class Rock, then
inherit from Talker to make a TalkingRock! :)

Classes which can be used as 'mixins' are '*-er*'s.

  * Mover
  * Talker
    * .say()
      * Takes a formatted string and works out pauses & colours.


Classes
-------

  * CommandInterface

Sets up an interface for the player to send commands through.

  * CommandInterpreter

Parses an input phrase/sentence as a command.

  * Dictionary

Parses a command to check whether it is grammatically correct and
find the verb, object & any other information.

  * Command

A container for telling the CommandInterpreter (or something else?) what
to do.

  * Position

Stores an AreaID along with x-, y- and z-coordinates.

  * Talker:
      * Computer
      * Manny

  * .say()
    * Classes inheriting from Talker can have custom definitions of
      say() which might play a different sound effect or scroll
      faster/slower/completely differently.

  * TalkingColour
    * .Lore
    * .Person
    * .Weapon
    * .Item

  * RarityColour
    * .Common
    * .Uncommon
    * .Rare
    * .Legendary
    * .Unique
