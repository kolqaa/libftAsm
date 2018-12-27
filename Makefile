SRC=ft_isalpha.s
OBJ=ft_isalpha.o
all:
	nasm -f elf64 -o $(OBJ) $(SRC)
	gcc -c main.c
	gcc main.o $(OBJ)

