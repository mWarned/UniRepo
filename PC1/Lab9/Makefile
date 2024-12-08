# Makefile

# Argument pentru setarea numelui executabilului final
# Default ca "lab9"
EXEC ?= lab9

$(EXEC): l9main.o lab9.o
	clang -Wall -lm l9main.o lab9.o -o $(EXEC)

l9main.o: l9main.c lab9.h
	clang -c -Wall l9main.c

lab9.o: lab9.c lab9.h
	clang -c -Wall lab9.c

.PHONY: clean
clean: 
	rm -f *.o
	rm $(EXEC)

