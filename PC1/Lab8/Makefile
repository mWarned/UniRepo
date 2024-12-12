# Makefile

# Argument pentru setarea numelui executabilului final
# Default ca "lab8"
EXEC ?= lab8

$(EXEC): l8main.o lab8.o
	clang -Wall -lm l8main.o lab8.o -o $(EXEC)

l8main.o: l8main.c lab8.h
	clang -c -Wall l8main.c

lab8.o: lab8.c lab8.h
	clang -c -Wall lab8.c

.PHONY: clean
clean: 
	rm -f *.o
	rm $(EXEC)

