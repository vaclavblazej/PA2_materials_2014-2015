all: compile run

run:
	./a.out

compile: main.o complex.o
	g++ -Wall -pedantic -Werror main.o complex.o

main.o: main.cpp complex.h
	g++ -c main.cpp

complex.o: complex.cpp complex.h
	g++ -c complex.cpp
