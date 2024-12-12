# Makefile

# Argument pentru setarea numelui executabilului final
# Default ca "lab10"
EXEC ?= lab10

$(EXEC): l10main.o lab10.o
	clang -Wall -lm l10main.o lab10.o -o $(EXEC)

l10main.o: l10main.c lab10.h
	clang -c -Wall l10main.c

lab10.o: lab10.c lab10.h
	clang -c -Wall lab10.c

.PHONY: clean
clean: 
	rm -f *.o
	rm $(EXEC)

