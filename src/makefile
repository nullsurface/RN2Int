CC = gcc
CFLAGS = -Wall 
OBJS = main.o roman.o

all: rn2Int 

rn2Int:	$(OBJS)
		$(CC) $(CFLAGS) $^ -o rn2Int

main.o: main.c roman.h 
		$(CC) -c $(CFLAGS) main.c

roman.o: roman.h 
		$(CC) -c $(CFLAGS) roman.c

clean:
		rm -rf *.o rn2Int
