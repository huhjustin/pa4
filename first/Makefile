OUTPUT=first
CFLAGS=-Wall -Werror -fsanitize=address

%: %.c %.h
	gcc $(CFLAGS) -o $@ $<

%: %.c
	gcc $(CFLAGS) -o $@ $<

all: $(OUTPUT)

clean:
	rm -f *.o $(OUTPUT)