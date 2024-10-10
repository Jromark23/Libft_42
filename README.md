# Libft_42
Implementation of a ![C Badge](https://camo.githubusercontent.com/22b0e77892653e16fcf3818ead4d321aeb3f11db10b5fe2e8b5ccd15e115d852/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f432d2532333030353939432e7376673f7374796c653d666c6174266c6f676f3d63266c6f676f436f6c6f723d7768697465) library.
The library includes standard functions for string manipulation, memory management, linked lists, and other basic utilities, following the 42 project's guidelines.

| Function                                    | Description                                                                 |
|---------------------------------------------|-----------------------------------------------------------------------------|
| [`ft_atoi`](libft/ft_atoi.c)                | Converts a string to an integer. Returns the integer representation of the string. |
| [`ft_bzero`](libft/ft_bzero.c)              | Sets a block of memory to zero.|
| [`ft_calloc`](libft/ft_calloc.c)            | Allocates memory for an array and initializes it to zero. Returns a pointer to the allocated memory. |
| [`ft_isalnum`](libft/ft_isalnum.c)          | Checks if the character is alphanumeric. Returns 1 if true, 0 otherwise.   |
| [`ft_isalpha`](libft/ft_isalpha.c)          | Checks if the character is alphabetic. Returns 1 if true, 0 otherwise.     |
| [`ft_isascii`](libft/ft_isascii.c)          | Checks if the character is a valid ASCII character. Returns 1 if true, 0 otherwise. |
| [`ft_isdigit`](libft/ft_isdigit.c)          | Checks if the character is a digit (0-9). Returns 1 if true, 0 otherwise.  |
| [`ft_isprint`](libft/ft_isprint.c)          | Checks if the character is printable. Returns 1 if true, 0 otherwise.      |
| [`ft_itoa`](libft/ft_itoa.c)                | Converts an integer to a string. Returns the string representation of the integer. |
| [`ft_lstadd_back_bonus`](libft/ft_lstadd_back_bonus.c) | Adds a new element at the end of a linked list.|
| [`ft_lstadd_front_bonus`](libft/ft_lstadd_front_bonus.c) | Adds a new element at the beginning of a linked list.  |
| [`ft_lstclear_bonus`](libft/ft_lstclear_bonus.c) | Frees all elements in a linked list. |
| [`ft_lstdelone_bonus`](libft/ft_lstdelone_bonus.c) | Frees a single element in a linked list. |
| [`ft_lstiter_bonus`](libft/ft_lstiter_bonus.c) | Iterates over a linked list and applies a function to each element.  |
| [`ft_lstlast_bonus`](libft/ft_lstlast_bonus.c) | Returns the last element of a linked list.                                |
| [`ft_lstmap_bonus`](libft/ft_lstmap_bonus.c)  | Applies a function to each element of a list and creates a new list. Returns the new list. |
| [`ft_lstnew_bonus`](libft/ft_lstnew_bonus.c)  | Creates a new linked list element. Returns a pointer to the new element.   |
| [`ft_lstsize_bonus`](libft/ft_lstsize_bonus.c) | Returns the number of elements in a linked list.                          |
| [`ft_memchr`](libft/ft_memchr.c)            | Searches for a byte in a block of memory. Returns a pointer to the byte found or NULL if not found. |
| [`ft_memcmp`](libft/ft_memcmp.c)            | Compares two blocks of memory. Returns an integer less than, equal to, or greater than zero. |
| [`ft_memcpy`](libft/ft_memcpy.c)            | Copies a block of memory from one location to another. Returns a pointer to the destination. |
| [`ft_memmove`](libft/ft_memmove.c)          | Moves a block of memory to another location, handling overlapping regions. Returns a pointer to the destination. |
| [`ft_memset`](libft/ft_memset.c)            | Fills a block of memory with a specific byte. Returns a pointer to the memory. |
| [`ft_putchar_fd`](libft/ft_putchar_fd.c)    | Writes a character to a file descriptor.      |
| [`ft_putendl_fd`](libft/ft_putendl_fd.c)    | Writes a string followed by a newline to a file descriptor.|
| [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)      | Writes an integer to a file descriptor.         |
| [`ft_putstr_fd`](libft/ft_putstr_fd.c)      | Writes a string to a file descriptor. |
| [`ft_split`](libft/ft_split.c)              | Splits a string into an array of strings using a delimiter. Returns a pointer to the array of strings. |
| [`ft_strchr`](libft/ft_strchr.c)            | Finds the first occurrence of a character in a string. Returns a pointer to the character or NULL if not found. |
| [`ft_strdup`](libft/ft_strdup.c)            | Duplicates a string. Returns a pointer to the new string.                  |
| [`ft_striteri`](libft/ft_striteri.c)        | Applies a function to each character of a string, passing the index.|
| [`ft_strjoin`](libft/ft_strjoin.c)          | Joins two strings into a new string. Returns a pointer to the new string.  |
| [`ft_strlcat`](libft/ft_strlcat.c)          | Concatenates two strings with size protection. Returns the total length of the string it tried to create. |
| [`ft_strlcpy`](libft/ft_strlcpy.c)          | Copies a string with size protection. Returns the length of the source string. |
| [`ft_strlen`](libft/ft_strlen.c)            | Calculates the length of a string. Returns the number of characters in the string. |
| [`ft_strmapi`](libft/ft_strmapi.c)          | Applies a function to each character of a string, creating a new string. Returns the new string. |
| [`ft_strncmp`](libft/ft_strncmp.c)          | Compares two strings up to a specified number of characters. Returns an integer less than, equal to, or greater than zero. |
| [`ft_strnstr`](libft/ft_strnstr.c)          | Finds a substring within a string up to a specified length. Returns a pointer to the substring or NULL if not found. |
| [`ft_strrchr`](libft/ft_strrchr.c)          | Finds the last occurrence of a character in a string. Returns a pointer to the character or NULL if not found. |
| [`ft_strtrim`](libft/ft_strtrim.c)          | Trims all leading and trailing characters from the first string that are specified in the second parameter. Returns a new trimmed string. |
| [`ft_substr`](libft/ft_substr.c)            | Creates a substring from a string. Returns a pointer to the substring.     |
| [`ft_tolower`](libft/ft_tolower.c)          | Converts a character to lowercase if it is uppercase. Returns the converted character. |
| [`ft_toupper`](libft/ft_toupper.c)          | Converts a character to uppercase if it is lowercase. Returns the converted character. |
