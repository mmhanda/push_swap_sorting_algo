# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 00:46:53 by mhanda            #+#    #+#              #
#    Updated: 2022/09/25 22:28:50 by mhanda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILES  = ./mandatory/push_swap.c ./mandatory/utils.c ./mandatory/util.1.c ./mandatory/util.2.c ./mandatory/util.3.c ./mandatory/util.4.c \
		  ./mandatory/compair.c ./mandatory/swap_num.c ./mandatory/sort_2_3_5.c ./mandatory/sort_2_3_5_utils.c ./mandatory/ft_free.c ./mandatory/compair_2.c \
		  ./mandatory/swap_num_2.c ./mandatory/util.5.c

BCFILES = ./bonus/checkerr.c ./bonus/get_next_line.c ./bonus/get_next_line_utils.c ./mandatory/utils.c ./mandatory/util.1.c \
		   ./mandatory/util.2.c ./mandatory/util.3.c ./mandatory/compair.c ./mandatory/swap_num.c ./mandatory/util.4.c ./mandatory/ft_free.c \
		   ./mandatory/compair_2.c ./mandatory/swap_num_2.c ./mandatory/util.5.c

OCFILES = $(CFILES:.c=.o)
BOCFILES = $(BCFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf
NAME = push_swap
BNAME = checker 
INC = ./mandatory/push_swap.h
BINC = ./bonus/checker.h

all : $(NAME)
bonus : $(BNAME)
$(NAME) : $(INC) $(OCFILES)
	@$(CC) $(CFLAGS) $(OCFILES) -o push_swap

$(BNAME) : $(BINC) $(BOCFILES)
	@$(CC) $(CFLAGS) $(BOCFILES) -o checker

clean :
	@$(RM) $(OCFILES)
	@$(RM) $(BOCFILES)
fclean : clean
	@$(RM) $(NAME)
	@$(RM) $(BNAME)

re : fclean all
reb : fclean bonus
