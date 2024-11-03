# Makefile

# Argument pentru setarea numelui executabilului final
# Default ca "lab5"
EXEC ?= lab5

$(EXEC): l5main.o lab5.o
	clang -Wall -lm l5main.o lab5.o -o $(EXEC)

l5main.o: l5main.c lab5.h
	clang -c -Wall l5main.c

lab5.o: lab5.c lab5.h
	clang -c -Wall lab5.c

.PHONY: clean
clean: 
	rm -f *.o
	rm $(EXEC)

