LIBPRINT = ../lib/
LIBINCLUDE = ../lib/

CFLAGS += -I$(LIBINCLUDE)
LDFLAGS += -L$(LIBPRINT)

LDFLAGS += -lprint

all: insertion_sort

insertion_sort: insertion_sort.o
	gcc $< $(LDFLAGS) -o $@

insertion_sort.o: insertion_sort.c
	gcc $(CFLAGS) $< -c

clean:
	rm -rf *.o *.a insertion_sort