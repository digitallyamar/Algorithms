LIBPRINT = ../lib/
LIBINCLUDE = ../lib/

CFLAGS += -I$(LIBINCLUDE)
LDFLAGS += -L$(LIBPRINT) -lprint

TARGETS = insertion_sort bubble_sort

all: $(TARGETS)

insertion_sort: insertion_sort.o
	gcc $< $(LDFLAGS) -o $@

insertion_sort.o: insertion_sort.c
	gcc $(CFLAGS) $< -c

bubble_sort: bubble_sort.o
	gcc $< $(LDFLAGS) -o $@

bubble_sort.o: bubble_sort.c
	gcc $(CFLAGS) $< -c

clean:
	rm -rf *.o $(TARGETS)
