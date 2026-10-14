
*This project has been created as part of the 42 curriculum by marsaleh.*

# Description
## Libft.h
Reacreating libft C library in addition to some extra functions.

 # Instructions
- make -> builds libft.a
- make clean -> deletes object files
- make fclean -> deletes object files + libft.a
- re -> deletes object files + libft.a then rebuild libft.a from the start
Include the library header in your c file
Then compile it, an example
```c
cc main.c libft.a
```
# Resources
- linux man.
- 42 libft subject.
- https://stackoverflow.com/questions/982388/how-to-implement-a-linked-list-in-c
- https://www.geeksforgeeks.org/c/string-functions-in-c/
- https://www.ghirass-jo.com/files/%D8%B9%D9%84%D9%88%D9%85-%D8%A7%D9%84%D8%AD%D8%A7%D8%B3%D9%88%D8%A8/datastrucutre
- Used ai to help me get a grib on some concepts I couldn't understand such as overlap in the memmove execise and a little help to research linked lists.

# (Additional Section) A detailed description of the libray i created for this project
## Libft
libft is a custom C library made by me as a part of the 42 school curriculum. The goal of this project is to recreat a collection of function in the C standard library while learning and exploring the way pointers, arrays, memory, and some main concepts in fd.
The functions I created in this project are written manually from zero acording to their expected behaviour provided in the linux manual page.

## Function

### libc Functions
#### Charachter Functions
```c
Charachter Functions are functions created to check and manipulate individual charachters. They can determine if the charachter is alpha, digit or if any of them, upper or lower, if it is printable or in the ascii, and convert charachters to upper or lower.
``` 
- isalpha : is a standard library function used to check whether a given character is an alphabetic letter
- isdigit : is a standard library function used to check whether a given character is a digit
- isalnum : is a standard library function used to check whether a given character is an alphabetic letter or a digit
- isascii : is a standard library function used to check whether a given character is in the ascii
- isprint : is a standard library function used to check whether a given character is printable
- toupper : is a standard library function used to a make characters upper
- tolower : is a standard library function used to a make characters lower

#### String Functions
```c
String Functions are created to manipulate strings. They allow you to measure, compare, search, copy and modify strings.
```

- strlen : calculate the length of a string
- strlcpy : size-bounded string copying
- strlcat : size-bounded string concatenation
- strchr : locate character in string (first occurence)
- strrchr : locate character in string in reverse (last occurence)
- strncmp : it compares only the first (at most) n bytes of s1 and s2.
- strnstr : function locates the first occurrence of the null-terminated string little in the string big

#### Memory Functions
```c
Memory functions are created to work directly with memory blocks and allow you to measure, compare, search, copy through memory using pointers and only for the first 'n' bytes.
```
- memset :  fills the first n bytes of the memory area pointed to by s with the constant byte c
- bzero : function  erases  the data in the n bytes of the memory starting at the location pointed to by s
- memcpy : function copies n bytes from memory area src to memory area dest.
- memmove : function  copies n bytes from memory area src to memory area dest. It should handel overlap
- memchr : function  scans  the initial n bytes of the memory area pointed to by s for the first instance of c.
- memcmp : function returns an integer less than, equal to, or  greater  than  zero  if  the first  n bytes of s1 is found

#### Conversion 
```c
atoi (ascii to integer) converts a string that represents an integer into an integer value skipping the white spaces at the left and handling the sign '+' or the sign '-'
- atoi
```

#### Memory Allocation
- calloc
```c
Calloc allocates memory acording to the given ammount and and initializes all allocated bytes to **0**
```
- strdup
```c
Strdup creates a duplicate of a string by allocating enough memory and copying it
```


### Additional Functions

#### Memmory Managment
```c
These functions dynamically allocate memory with malloc. For functions like ft_split  to handle memory allocation errors effciently is so important especially that several allocations can happen befor an error happens.
```

- ft_substr : Creates and returns a new substring from a given string, starting at a specified index and limited to a maximum length
- ft_strjoin : Concatenates two strings into a newly allocated string.
- ft_strtrim : Removes specified characters from the beginning and end of a string, returning a newly allocated trimmed string.
- ft_split : Splits a string into an array of strings using a specified delimiter character.
- ft_itoa : Converts an integer into its string representation and returns a newly allocated string.

### Function Pointers
```c
Functions that stores the address of a function. It allows a function to receive another function as a parametar and then call it later.
```

- ft_strmapi : Applies a given function to each character of a string and returns a new string containing the resulting characters.
- ft_striteri :  Applies a given function to each character of a string, passing the character's index and a pointer to the character, allowing the original string to be modified.

#### File Descriptor
```c
File descriptors or shortly fd is a small positive integer used as a refrence to an open file in a process or an input/output resources such as a screen.
We can use fd with functions like read(), write().
```

- ft_putchar_fd :  Writes a single character to the specified file descriptor.
- ft_putstr_fd : Writes a string to the specified file descriptor.
- ft_putendl_fd : Writes a string followed by a newline to the specified file descriptor.
- ft_putnbr_fd : Writes an integer to the specified file descriptor.

#### linked List
```c
A Linked List is a data structure made of nodes, each node contains data and a pointer to the next node in the list.
In libft t_list structure is used:
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```
```c
content --> stores data of the node.
next --> points at the next node. The last node points at **NULL**.
```
- ft_lstnew : Creates and returns a new list node containing the given content.
- ft_lstadd_front : Adds a node to the beginning of a linked list.
- ft_lstsize : Counts and returns the number of nodes in a linked list.
- ft_lstlast : Returns the last node of a linked list.
- ft_lstadd_back :  Adds a node to the end of a linked list.
- ft_lstdelone : Deletes a single node and frees its content using the provided deletion function.
- ft_lstclear : Deletes and frees all nodes in a linked list using the provided deletion function.
- ft_lstiter :  Applies a given function to the content of each node in a linked list.
- ft_lstmap : Creates a new linked list by applying a given function to the content of each node.
