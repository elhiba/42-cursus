NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

# Directories
LIBFT_DIR = ./includes/libft
PRINTF_DIR = ./includes/ft_printf
SRC_DIR = ./src

# Special directories for push_swap
INPUTS = inputs/
MOVES = moves/
INITIALIZE = initialize/
OPERATIONS = operations/
SORT = sort/
UTILS = utils/
# A & B folders
A = A/
B = B/
A&B = $(addprefix $(INITIALIZE),$(A) $(B))
# A special case do not care about it! (i know its weird) #
ALLFOLDERS = $(addprefix $(SRC_DIR)/, $(INPUTS) $(MOVES) $(OPERATIONS) $(SORT) $(UTILS) $(addprefix $(MOVES), $(INITIALIZE) $(A&B)))

# ft_printf source files!
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a

# Libft source files
LIBFT_LIB = $(LIBFT_DIR)/libft.a

# push_swap files
SRC_FILES =	main.c \
			$(addprefix $(INPUTS), inputs.c) \
			$(addprefix $(MOVES), ) \
			$(addprefix $(addprefix $(MOVES), $(INITIALIZE)), initialize.c index.c A/rank.c A/move_a_b.c B/cheapest.c B/target.c B/move_b_a.c B/cost.c) \
			$(addprefix $(OPERATIONS), push.c reverse_rotate.c rotate.c swap.c) \
			$(addprefix $(SORT), sort.c sort_checker.c) \
			$(addprefix $(UTILS), freeUtils.c nodesUtils.c printUtils.c)
SRCS = $(addprefix $(SRC_DIR)/,$(SRC_FILES))
SRCS_OBJS = $(SRCS:.c=.o)
all: $(NAME)
 
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(PRINTF_LIB) $(LIBFT_LIB) $(SRCS_OBJS)
	@$(CC) $(CFLAGS) $(SRCS_OBJS) $(PRINTF_LIB) $(LIBFT_LIB) -o $(NAME)
	@echo "✅ Push_swap builded successfully🛠️!"

$(PRINTF_LIB):
	@echo "🔨 Rebuilding FT_PRINTF!"
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR)
	@echo "✅ 'libftprintf.a' is ready to use!"

$(LIBFT_LIB):
	@echo "🔨 Rebuilding LIBFT!"
	@$(MAKE) --no-print-directory -C $(LIBFT_DIR)
	@echo "✅ 'libft.a' is ready to use!"

clean:
	@echo "🧹 Cleaning FT_PRINTF!"
	@$(MAKE) --no-print-directory clean -C $(PRINTF_DIR)
	@echo "✅ All 'ft_printf' objects files has removed!"
	@echo "🧹 Cleaning LIBFT!"
	@$(MAKE) --no-print-directory clean -C $(LIBFT_DIR)
	@echo "✅ All libft objects files has removed!"
	@rm -f $(SRC_DIR)/*.o
	@rm -f $(addsuffix *.o,$(ALLFOLDERS))
	@echo "✅ ALl objects files has been removed!"

fclean: clean
	@echo "🧹 Deleting 'libftprintf.a'!"
	@$(MAKE) --no-print-directory fclean -C $(PRINTF_DIR)
	@echo "✅ 'libftprintf.a' removed successfully!"
	@echo "🧹 Deleting 'libft.a'!"
	@$(MAKE) --no-print-directory fclean -C $(LIBFT_DIR)
	@echo "✅ 'libft.a' removed successfully!"
	@rm -f $(NAME)
	@echo "✅ Push_swap removed successfully!"

re: fclean all

.PHONY: all clean fclean re
