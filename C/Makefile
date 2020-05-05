FLAGS = -Wall -Wextra -Werror
CC = clang

COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

SRC1 = Colleen.c
SRC2 = Grace.c
SRC3 = Sully.c

OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)
OBJ3 = $(SRC3:.c=.o)

_DEF = $'\033[0m
_RED = $'\033[31m
_GREEN = $'\033[32m
_YELLOW = $'\033[33m

.PHONY: all clean re fclean

all: $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN): $(OBJ1)
	@$(CC) -o $(COLLEEN) $(OBJ1)
	@echo "$(_GREEN)$(COLLEEN) created.$(_DEF)"

$(GRACE): $(OBJ2)
	@$(CC) -o $(GRACE) $(OBJ2)
	@echo "$(_GREEN)$(GRACE) created.$(_DEF)"

$(SULLY): $(OBJ3)
	@$(CC) -o $(SULLY) $(OBJ3)
	@echo "$(_GREEN)$(SULLY) created.$(_DEF)"

%.o: %.c
	@echo "$(_YELLOW)"
	$(CC) $(FLAGS) -c $< -o $@
	@echo "$(_DEF)"

clean:
	@echo "$(_RED)$(OBJ1) $(OBJ2) $(OBJ3) Grace_kid.c Sully_* removed$(_DEF)"
	@rm -f $(OBJ1) $(OBJ2) $(OBJ3) Grace_kid.c Sully_*

fclean: clean
	@echo "$(_RED)$(COLLEEN) $(GRACE) $(SULLY) removed$(_DEF)"
	@rm -f $(COLLEEN) $(GRACE) $(SULLY)

re: fclean all
