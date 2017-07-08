CC = g++
CPPFLAGS = --std=c++11 -pedantic -Wall

all: proj3

proj3: proj3.o secret.o
	$(CC) $(CPPFLAGS) -o proj3 proj3.o secret.o

proj3.o: proj3.cpp
	$(CC) $(CPPFLAGS) -c proj3.cpp

secret.o: secret.cpp
	$(CC) $(CPPFLAGS) -c secret.cpp

clean: 
	rm *.o