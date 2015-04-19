Design
======

Ideas
-----

I want to create an extensible fantasy MUD-like game using the terminal
and very simple printing (a la MUDs of past).

Or maybe not using the terminal, and maybe OpenGL or SDL? I don't really
know.


Classes
-------

  * Actor
    * MovingActor
    * NonMovingActor
    * Talker
      * .say()
        * Takes a formatted string and works out pauses & colours.
      * Computer
      * Manny
        * .say()
          * Classes inheriting from Talker can have custom definitions
            of say() which might play a different sound effect or scroll
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
