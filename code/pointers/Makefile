EXES = broken-sizeof  \
array-of-strings  \
array-of-strings2 \
structstruct \
pointer2pointer-wrong \
pointer2pointer
src = $(wildcard *.c)
obj = $(src:.c=.o)

LDFLAGS = -lGL -lglut -lpng -lz -lm

myprog: $(obj)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) myprog $(EXES)
