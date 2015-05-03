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
    2. Try to find a verb we understand in this context
      1. That's a big one.
