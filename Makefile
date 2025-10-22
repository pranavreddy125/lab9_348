CC = g++

CFLAGS = -c -Wall -std=c++11


OBJECT1 = main.o
OBJECT2 = matrix.o

all: main


main: $(OBJECT1) $(OBJECT2)
	$(CC) $(OBJECT1) $(OBJECT2) -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

matrix.o: matrix.cpp
	$(CC) $(CFLAGS) matrix.cpp

clean:
	rm -rf *.o main