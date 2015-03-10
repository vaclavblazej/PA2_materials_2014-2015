# Predstavte si, ze mate OBROVSKY projekt.
# Kdybyste ho pokazde kompilovali cely znovu, tak by to pokazde trvalo nekolik hodin.
# Prace programatora se vetsinou zameruje jen na malou cast systemu,
# dava tedy smysl si kompilaci rozdelit na nekolik casti a kompilovat jen to
# co je potreba - upravene soubory
#
# pokud zapnete kompilatoru g++ prepinac '-c', tak zkompiluje program do 'object file'
# tento soubor obsahuje seznam exportovanych a importovanych 
# kdyz predame object file main.o kompilatoru znovu, on ho zpracuje do spustitelneho souboru
# 
# prave diky tomuto mezikroku se ve velkych projektech menusi vse konpilovat znovu a znovu


all: main.o
	g++ main.o -o a.exe

main.o: main.cpp
	g++ main.cpp -c


# u cile all je v prikazu navic prepinac -o, tim se pojmenuje vysledny soubor
# vsimnete si, ze mame uz vice cilu a tyto cile na sobe zavisi
#
# pro provedeni cile all musi existovat soubor main.o - jenze ten neexistuje
# takze se provede cil main.o, pro ten musi existovat soubor main.cpp
# ten existuje, takze se provede: g++ main.cpp -c
# to vytvori soubor main.o a provede se: g++ main.o -o a.exe
# vznikne spustitelny soubor a.exe

# pozn: zkuste do prikazove radky zadat: 'make main.o'
