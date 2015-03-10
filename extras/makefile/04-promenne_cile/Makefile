# Muzeme pouzivat zkratky pro prikazy cilu
# tyto zkratky odkazuji na nazev cile a jeho zavislosti
# $@ = jmeno cile
# $< = jmeno prvni zavislosti
# $^ = jmena vsech zavislosti

all: compile

run: compile
	./a.exe

clear:
	rm main.o hello.o a.exe

compile: a.exe

a.exe: main.o hello.o
	g++ $^ -o $@
#	g++ main.o hello.o -o a.exe

main.o: main.cpp hello.h
	g++ $< -c -o $@
#	g++ main.cpp -o main.o

hello.o: hello.cpp hello.h
	g++ $< -c -o $@
#	g++ hello.cpp -o hello.o
