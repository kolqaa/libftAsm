NAME = libfts.a
NASM = nasm -f elf64
SRC = ft_isalpha.s \
	ft_isalnum.s \
	ft_isdigit.s \
	ft_bzero.s \
	ft_strcat.s 
OBJ = $(SRC:.s=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling ..."
	@ar -rc $(NAME) $(OBJ)
	@echo "DONE"

%.o: %.s
	@$(NASM) -s $< -o $@

clean :
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

