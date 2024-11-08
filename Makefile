# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 19:04:15 by alel-you          #+#    #+#              #
#    Updated: 2024/11/08 15:44:40 by alel-you         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# #Source files
# FILES = ft_isascii.c    ft_memmove.c    ft_split.c      ft_strlcat.c    ft_strstr.c \
# ft_atoi.c       ft_isdigit.c    ft_memset.c     ft_strchr.c     ft_strlcpy.c    ft_strtrim.c \
# ft_bzero.c      ft_isprint.c    ft_putchar_fd.c ft_strcpy.c     ft_strlen.c     ft_substr.c \
# ft_calloc.c     ft_itoa.c       ft_putendl_fd.c ft_strdup.c     ft_strmapi.c    ft_toupper.c \
# ft_isalnum.c    ft_memcmp.c 	ft_striteri.c   ft_strncmp.c	ft_strnstr.c \
# ft_isalpha.c    ft_memcpy.c     ft_putstr_fd.c  ft_strjoin.c \
# #Object files (this will convert .c files to .o files)
# OBJF = $(FILES:.c=.o)

# #Compiler and flags
# CC = cc
# FLAGS = -Wall -Wextra -Werror

# #Executable name
# ARCH = libft.a

# all: $(OBJF)
# 	@ar rcs $(ARCH) $(OBJF)
# 	@printf "\033[32m DONE ! \033[0m"

# %.o: %.c
# 	printf "Compiling object file: $<\r"
# 	@$(CC) $(FLAGS) -c $< -o $@

# re: fclean all

# clean:
# 	@rm -rf $(OBJF)

# fclean: clean
# 	@rm -rf $(ARCH)
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 19:04:15 by alel-you          #+#    #+#              #
#    Updated: 2024/10/27 23:03:54 by alel-you         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Source files
FILES = ft_isascii.c    ft_memmove.c    ft_split.c      ft_strlcat.c    ft_strstr.c \
 ft_atoi.c       ft_isdigit.c    ft_memset.c     ft_strchr.c     ft_strlcpy.c    ft_strtrim.c \
 ft_bzero.c      ft_isprint.c    ft_putchar_fd.c ft_strcpy.c     ft_strlen.c     ft_substr.c \
 ft_calloc.c     ft_itoa.c       ft_putendl_fd.c ft_strdup.c     ft_strmapi.c    ft_toupper.c \
 ft_isalnum.c    ft_memcmp.c 	ft_striteri.c   ft_strncmp.c	ft_strnstr.c     ft_lstnew.c  ft_lstlast.c \
 ft_isalpha.c    ft_memcpy.c     ft_putstr_fd.c  ft_strjoin.c 	ft_lstsize.c 	ft_lstadd_front.c  \
 ft_lstdelone.c	 ft_lstmap.c    ft_lstadd_back.c ft_lstdelone.c \
		
#Object files (this will convert .c files to .o files)
OBJF = $(FILES:.c=.o)

#Compiler and flags
CC = cc
FLAGS = -Wall -Wextra -Werror

#Executable name
ARC = libft.a

#Default rule to compile everything
#recip used to create the static lib.a and add the object files 
all: $(OBJF)
#Rule to compile .c files into .o files
%.o: %.c libft.h
	@$(CC) $(FLAGS) -c $< -o $@
	@ar rcs $(ARC) $@
#Rule to create the executable by linking object files
ARC:
	$(CC) $(FLAGS) -o $(ARC) $(OBJF)
#Clean object files
clean:
	@rm -f $(OBJF)

#Clean object files and the executable
fclean: clean
	@rm -f $(ARC)

#Clean everything and rebuild
re: fclean all

.PHONY: clean