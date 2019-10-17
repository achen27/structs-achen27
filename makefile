all: main.o construction.o
	gcc -o program main.o construction.o

main.o: main.c headers.h
	gcc -c main.c

construction.o: construction.c headers.h
	gcc -c construction.c

run:
	./program

clean:
	rm *.o
	rm *~
