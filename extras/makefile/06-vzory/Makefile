# Tvoreni prikazu pro vzorove cile

OBJECTS = main.o hello.o
EXECUTABLE = a.exe
CC=g++
CFLAGS=-Wall -pedantic -Werror

# Vsechno co bude <X>.o: <Y>.cpp ...
# dostane nasledujici prikaz
%.o: %.cpp
	$(CC) $< -c -o $@

all: compile

run: compile
	./$(EXECUTABLE)

clear:
	rm $(OBJECTS) $(EXECUTABLE)

compile: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $^ $(CFLAGS) -o $@

#tuto cast muzete vygenerovat pres g++ -MM main.cpp hellp.cpp
main.o: main.cpp hello.h
hello.o: hello.cpp hello.h
#zde nemusi byt prikazy
