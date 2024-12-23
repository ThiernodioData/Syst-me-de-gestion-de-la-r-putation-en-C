CC = gcc
CFLAGS = -Iinclude

all: main

main: src/main.o src/reputation.o src/utilisateur.o src/produit.o
	$(CC) -o main src/main.o src/reputation.o src/utilisateur.o src/produit.o

src/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o

src/reputation.o: src/reputation.c
	$(CC) $(CFLAGS) -c src/reputation.c -o src/reputation.o

src/utilisateur.o: src/utilisateur.c
	$(CC) $(CFLAGS) -c src/utilisateur.c -o src/utilisateur.o

src/produit.o: src/produit.c
	$(CC) $(CFLAGS) -c src/produit.c -o src/produit.o

clean:
	rm -f main src/*.o
