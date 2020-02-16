CC = gcc
CFLAGS = -I./include -g -Wall -Wextra -Wpedantic

ASM = nasm
AFLAG = -f elf64 -Wall -Wextra

C_SRC = $(wildcard src/*.c)
C_OBJ = $(C_SRC:.c=.o)

A_SRC = $(wildcard src/*.s)
A_OBJ = $(A_SRC:.s=.o)

PROG = sudoku.exe

$(PROG): $(C_OBJ) $(A_OBJ)
	$(CC) $(CFLAGS) $(C_OBJ) $(A_OBJ) -o $(PROG)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.s
	$(ASM) $(AFLAGS) $< -o $@

clean:
	rm -rf $(PROG) src/*.o

test: $(PROG)
	./$(PROG) 490103600020009003500046000002300810050007962019205007000608070070950320031400580
