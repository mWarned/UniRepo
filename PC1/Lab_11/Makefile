# Makefile

# Argument pentru setarea numelui executabilului final
# Default ca "lab11"
EXEC ?= lab11

$(EXEC): l11main.o lab11.o
	clang -Wall -lm l11main.o lab11.o -o $(EXEC)

l11main.o: l11main.c lab11.h
	clang -c -Wall l11main.c

lab11.o: lab11.c lab11.h
	clang -c -Wall lab11.c

.PHONY: clean
clean: 
	rm -f *.o
	rm $(EXEC)

