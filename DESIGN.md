Design
======

Ideas
-----

I want to create an extensible fantasy MUD-like game using the terminal
and very simple printing (a la MUDs of past).


Classes
-------

  * Actor
    * MovingActor
    * NonMovingActor
    * Talker
      * .say()
        * Takes a formatted string and works out pauses & colours.

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
