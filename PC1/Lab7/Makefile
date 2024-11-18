# Makefile

# Argument pentru setarea numelui executabilului final
# Default ca "lab7"
EXEC ?= lab7

$(EXEC): l7main.o lab7.o
	clang -Wall -lm l7main.o lab7.o -o $(EXEC)

l7main.o: l7main.c lab7.h
	clang -c -Wall l7main.c

lab7.o: lab7.c lab7.h
	clang -c -Wall lab7.c

.PHONY: clean
clean: 
	rm -f *.o
	rm $(EXEC)

