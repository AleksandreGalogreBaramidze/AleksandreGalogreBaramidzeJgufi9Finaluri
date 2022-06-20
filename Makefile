#
#
#
CC=gcc
CFLAGS=-Wall 
 
 
all : strend
.PHONY : all
 
strend : mgetline.o mystrlen.o strend.o main.o
	$(CC) $(CFLAGS) -o output strend.o mgetline.o mystrlen.o main.o
 
mgetline.o : mgetline.c 
	$(CC) $(CFLAGS) -c -o mgetline.o mgetline.c
 
mystrlen.o : mystrlen.c 
	$(CC) $(CFLAGS) -c -o mystrlen.o mystrlen.c
	
strend.o : strend.c 
	$(CC) $(CFLAGS) -c -o strend.o strend.c
 
main.o : main.c 
	$(CC) -Wall -c -o main.o main.c
 
 

 
 
.PHONY: clean
clean : 
	rm -rf *.o 
