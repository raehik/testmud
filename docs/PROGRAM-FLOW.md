Program flow
============

I need to have a clear idea of where the chain of execution will go as
commands are interpreted, actions are taken, etc. This document will
store my thoughts and later the actual flow I decide upon.


Command flow
------------

This involves prompting for a command, parsing it and doing whatever it
entails.


Flow #2
-------

I'm starting out by making a clone of the Zork interpreter, since it's
decently comprehensive and gives me something to compare my own work to.

  1. Prompt for command
  2. Input command as string
  3. Interpret command
  4. <> If command is valid <>
    * Y: Execute command
    * N: Show command error


### Interpret command

  1. Split input into words
  2. Find verb
    1. Verb = 1st word
  3. <> If known verb <>
    * Y: Continue
    * N: Exit, return UnknownVerbError
  4. Find noun(s)
    1. Consume/Forget about articles
    2. Understand usage of adjectives, prepositions
  5. <> If prepositions used correctly <>
    * Y: Continue
    * N: Exit, return InvalidPrepositionError
  5. <> If noun(s) exist <>
    * Y: Continue
    * N: Exit, return NonPresentNounError
  6. <> If noun(s) can use verb in way specified <>
    * Y: Continue
    * N: Exit, return VerbContextError
  7. Form command
  8. Return command


Old flow
--------

  1. Prompt for a command
  2. Interpret command
    1. Split command into words
    2. Take the first word as the verb, and check whether it's usable in
       the current context
    2. Try to find a verb we understand
      1. If no, return a CommandVerbError (inherits from Command)
      2. Else continue
    3. Check if it can be used in this context
      1. If no, return a CommandContextError
      2. Else continue
    4. Return a Command which holds all the instructions on what to
       execute
  3. Execute Command
    1. If Command is CommandError, do whatever it says
    2. Else do whatever Command says
