main: main.o bank.o
	gcc -o main main.o bank.o

main.o: main.c bank.h
	gcc -c -std=c99 -Wall main.c

bank.o: bank.c bank.h
	gcc -c -std=c99 -Wall bank.c