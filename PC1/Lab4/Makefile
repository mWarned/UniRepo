# Makefile

# Argument pentru setarea numelui executabilului final
# Default ca "lab4"
EXEC ?= lab4

$(EXEC): l4main.o lab4.o
	clang -Wall -lm l4main.o lab4.o -o $(EXEC)

l4main.o: l4main.c lab4.h
	clang -c -Wall l4main.c

lab4.o: lab4.c lab4.h
	clang -c -Wall lab4.c

.PHONY: clean
clean: 
	rm -f *.o
	rm $(EXEC)

