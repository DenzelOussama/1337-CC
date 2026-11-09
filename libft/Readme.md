*This project has been created as part of the 42 curriculum by olgarh.*

## Description

Libft is the foundational project of the 42 curriculum. The goal is to recreate a custom C standard library (`libc`) from scratch, without relying on the native functions, to build a deep understanding of memory management, pointers, and data structures.

The result is `libft.a`, a static library that follows the Norm and is reused in all later C projects of the curriculum.

### Library Overview

**Part 1 - Libc Functions**

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is a letter |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is in the ASCII range (0-127) |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a memory area with a given byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies n bytes between non-overlapping memory areas |
| `ft_memmove` | Copies n bytes, handling overlapping memory areas |
| `ft_strlcpy` | Copies a string into a buffer of a given size, always NUL-terminating |
| `ft_strlcat` | Appends a string to a buffer of a given size, always NUL-terminating |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares at most n characters of two strings |
| `ft_memchr` | Finds the first occurrence of a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Finds a substring within the first n characters of a string |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string using malloc |

**Part 2 - Additional Functions**

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new allocated string |
| `ft_strtrim` | Trims a set of characters from both ends of a string |
| `ft_split` | Splits a string into an array of strings using a delimiter |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character and builds a new string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

**Part 3 - Linked List Functions**

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Counts the nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees one node using a given delete function |
| `ft_lstclear` | Deletes and frees a node and all nodes after it |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Applies a function to each node and builds a new list |

### Design Notes

- Functions that allocate memory return `NULL` if `malloc` fails.
- `ft_split` and `ft_lstmap` free everything already allocated if a later allocation fails.
- Behavior matches the original libc functions, including edge cases (empty strings, `n = 0`, overlapping memory).

## Instructions

**Requirements:** `cc`, `make`

**Compilation:**
```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes objects and the library
make re     # rebuilds everything
```

**Usage:** include the header and link the library:
```c
#include "libft.h"
```
```bash
cc main.c libft.a -o main
```

### Testing

Test each function with normal inputs and edge cases: empty strings, zero length, `INT_MIN` / `INT_MAX`, overlapping memory, and empty or single-node lists.

```bash
# Check coding standard
norminette

# Compile a test with debug info
cc -Wall -Wextra -Werror -g3 my_test.c libft.a -o test

# Check for memory leaks and invalid accesses
valgrind --leak-check=full --show-leak-kinds=all ./test

# Alternative: AddressSanitizer reports invalid memory accesses with the exact line
cc -Wall -Wextra -Werror -g3 -fsanitize=address my_test.c libft.a -o test_asan
./test_asan
```

## Resources

- `man 3` pages: used extensively to study the native implementations, exact return values, and edge cases.
- [C Programming: Makefiles](https://www.youtube.com/watch?v=GExnnTaBELk) - Barry Brown (Makefile basics)
- [C/C++ Compilation & Execution Steps](https://www.youtube.com/watch?v=erS7FGcRTGw&t=1s) - Nilesh Ghule (preprocessing, compiling, assembling, linking)

**AI usage:**
- Adding prototypes to the header file
- Finding learning resources
- Reviewing Norm compliance