# Muzeme tvorit vlastni promenne
# JMENO = HODNOTA
# vyvolame ji pres $(JMENO)

OBJECTS = main.o hello.o
EXECUTABLE = a.exe
CC=g++
CFLAGS=-Wall -pedantic -Werror


all: compile

run: compile
	./$(EXECUTABLE)

clear:
	rm $(OBJECTS) $(EXECUTABLE)

compile: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $^ $(CFLAGS) -o $@

main.o: main.cpp hello.h
	g++ $< -c -o $@

hello.o: hello.cpp hello.h
	g++ $< -c -o $@
