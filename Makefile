CC = cc
LIBS = `glib-config --libs`
INCS = `glib-config --cflags`
FLAGS = -Wall -g

main: test
test: autocomp
	$(CC) -c $(FLAGS) $(INCS) test.c
	$(CC) $(FLAGS) $(LIBS) autocomp.o test.o -o test
autocomp: autocomp.c autocomp.h
	$(CC) -c $(FLAGS) $(INCS) autocomp.c

clean:
	-rm *.o
	-rm test
