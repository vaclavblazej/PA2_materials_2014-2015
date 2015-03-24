all: compile run

compile: a.out

a.out: main.cpp find.h
	g++ main.cpp -o a.out

run: all
	./a.out
