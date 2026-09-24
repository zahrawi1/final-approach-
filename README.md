*This activity has been created as part of the 42 curriculum by aal-zahr.*

# Libft

## Description

Libft is my first library project at 42.

The goal of this project is to understand how commonly used C functions
work by implementing them from scratch and creating my own static library.

The library contains reimplementations of several standard C library
functions, additional string and memory utility functions, and functions
for working with linked lists.

The project also helped me practice important C concepts such as:

- Pointers
- Memory management
- Dynamic memory allocation
- Strings
- Arrays
- Function pointers
- Structures
- Linked lists
- Makefiles
- Static libraries

The final library is compiled into:

`libft.a`

## Library Content

### Part 1 - Libc Functions

These functions reproduce the behavior of functions from the standard C
library.

Character checking and conversion:

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

String functions:

- ft_strlen
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strlcpy
- ft_strlcat
- ft_strnstr
- ft_strdup

Memory functions:

- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

Conversion:

- ft_atoi

### Part 2 - Additional Functions

These are additional utility functions for working with strings,
memory, and file descriptors.

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Part 3 - Linked List Functions

The library also provides functions for creating and manipulating
singly linked lists using the `t_list` structure.

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
