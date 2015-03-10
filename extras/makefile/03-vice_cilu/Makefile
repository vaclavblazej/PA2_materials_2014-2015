# Ukazka pouziti vice cilu
# make kouka vzdy:
# 1. existuje soubor ktery se jmenuje stejne jako cil?
# - ANO 2a. jsou vsechny zavislosti aktualni?
#   - ANO 3a. make: Nothing to be done for `CIL'.
#	- NE  3b. vyhodnot zavislosti, potom proved prikazy cile
# - NE  2b. vyhodnot zavislosti, proved prikazy cile

all: compile

run: compile
	./a.exe

compile: a.exe

# pokud misto a.exe bude primo compile tak nebude fungovat spravne
# jmeno cile = jmeno vystupniho souboru
a.exe: main.o hello.o
	g++ main.o hello.o -o a.exe

main.o: main.cpp hello.h
	g++ main.cpp -c

hello.o: hello.cpp hello.h
	g++ hello.cpp -c
