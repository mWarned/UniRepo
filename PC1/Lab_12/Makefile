# Makefile

# Argument pentru setarea numelui executabilului final
# Default ca "lab11"
EXEC ?= lab12

$(EXEC): l12main.o lab12.o
	clang -Wall -lm l12main.o lab12.o -o $(EXEC)

l12main.o: l12main.c lab12.h
	clang -c -Wall l12main.c

lab12.o: lab12.c lab12.h
	clang -c -Wall lab12.c

.PHONY: clean
clean: 
	rm -f *.o
	rm $(EXEC)

