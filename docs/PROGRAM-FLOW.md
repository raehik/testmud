Program flow
============

I need to have a clear idea of where the chain of execution will go as
commands are interpreted, actions are taken, etc. This document will
store my thoughts and later the actual flow I decide upon.


Command flow
------------

This involves prompting for a command, parsing it and doing whatever it
entails.

  1. Prompt for a command
  2. Interpret command
    1. Split command into words
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
