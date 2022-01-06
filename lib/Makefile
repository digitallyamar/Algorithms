all: libprint.a

print.o:
	gcc -c print.c
	
libprint.a: print.o
	ar -cvq libprint.a print.o

clean:
	rm -rf *.o *.a