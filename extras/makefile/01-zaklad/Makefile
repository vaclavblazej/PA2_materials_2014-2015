# Makefile je souboru, ktery se aktivuje pri zadani prikazu make do prikazove radky
#
# prikaz 'make' vyhleda soubor Makefile v aktualnim adresaru, kdyz ho nenajde tak vypise chybu:
# make: *** No targets specified and no makefile found.  Stop.
#
# kdyz Makefile nalezne, tak provede definovany cil:
# make all # provede cil all
# make clean # procede cil clean
# make # provede prvni cil definovany v Makefile
#
# FORMAT MAKEFILE:
# CIL: POZADAVKY, ...
# <TAB> PRIKAZ_1
# <TAB> PRIKAZ_2
# ...


all: main.cpp
	g++ main.cpp


# pozor: pred prikazem musi byt znak <TAB>!
# ve viceradkovem prikazu musi byt pred kazdym <TAB>
# pri zadani make se provede to same jako pro zavolani make all (v tomto pripade)
# aby sel cil all spustit je potreba aby existoval soubor main.cpp
# po spusteni se provede: g++ main.cpp
# g++ automaticky vytvori spustitelny soubor a.exe - vas program (tady HelloWorld!)
