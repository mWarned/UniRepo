# Makefile

# Argument pentru setarea numelui executabilului final
# Default ca "lab5"
EXEC ?= lab6

$(EXEC): l6main.o lab6.o
	clang -Wall -lm l6main.o lab6.o -o $(EXEC)

l5main.o: l6main.c lab6.h
	clang -c -Wall l6main.c

lab5.o: lab6.c lab6.h
	clang -c -Wall lab6.c

.PHONY: clean
clean: 
	rm -f *.o
	rm $(EXEC)

