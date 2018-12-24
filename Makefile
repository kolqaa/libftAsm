SRC=ft_strcat.s
OBJ=ft_strcat.o
all:
	nasm -f elf64 -o $(OBJ) $(SRC)
	gcc -c main.c
	gcc main.o $(OBJ)

