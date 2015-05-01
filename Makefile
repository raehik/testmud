# Compiler options.
#	-Wall
#		Show lots more warnings. Useful.
CFLAGS=-Wall

# Compiler to use.
# Makes it easy to use this for C and C++.
CC=g++

# Linker options.
# It's basically an -l option with no space between it and its argument (e.g.
# ncurses). The prefix 'lib' and suffix '.so' can be omitted because all
# libraries have standardised names, so the linker finds what it's looking
# for.
#	-lncurses
#		Links to the ncurses library. It has a C/C++ interface, so
#		it should actually be totally fine using ncurses with C++.
LFLAGS=

# The final executable to produce.
#	We're not making a library here or anything.
EXEC=testmud

# Objects which need to be compiled then eventually linked together.
#OBJECTS=actor.cpp main.cpp

#${EXEC}: ${OBJECTS}
#	${CC} ${CFLAGS} ${OBJECTS} -o ${EXEC} ${LFLAGS}

#${OBJECTS}:

OBJECTS=main.o actor.o talker.o mover.o actor_id.o

all: ${EXEC}

talker.o: talker.cpp talker.hpp
	${CC} ${CFLAGS} -c talker.cpp

actor.o: actor.cpp actor.hpp
	${CC} ${CFLAGS} -c actor.cpp

main.o: main.cpp actor.hpp
	${CC} ${CFLAGS} -c main.cpp

mover.o: mover.cpp mover.hpp
	${CC} ${CFLAGS} -c mover.cpp

actor_id.o: actor_id.cpp actor_id.hpp
	${CC} ${CFLAGS} -c actor_id.cpp

${EXEC}: ${OBJECTS}
	${CC} ${CFLAGS} ${OBJECTS} -o ${EXEC} ${LFLAGS}

.PHONY: clean
clean:
	rm -f ${OBJECTS} ${EXEC}
