CC = gcc
CFLAGS = -Wall -Wextra

rush-02: rush-02.o
	$(CC) $(CFLAGS) -o $@ $^

rush-02.o: rush-02.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f rush-02.o rush-02

fclean: clean

re: fclean rush-02
