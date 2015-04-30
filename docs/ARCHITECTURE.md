Architecture design
===================

This is the architecture document for the TestMUD game. In this I will
endeavour to document all my thoughts & plans for the game's internal
structure.


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

  * Mover
  * Talker
    * .say()
      * Takes a formatted string and works out pauses & colours.


Classes
-------

  * Computer
  * Manny

Inheriting from Talker.

  * .say()
    * Classes inheriting from Talker can have custom definitions of
      say() which might play a different sound effect or scroll
      faster/slower/completely differently.


Classes
-------

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
