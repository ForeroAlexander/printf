## C - printf

<p align="center"><img width="250" src="https://uploads-ssl.webflow.com/5b0fe6b5acd20859e6fbac66/5b1641a1e46275621a2b436d_Holberton-Logo-final.png" alt="printf logo"></a></p>

## Project Requirements
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
* Code must follow the [Betty](https://github.com/holbertonschool/Betty/wiki) style
* Global variables are not allowed
* Authorized functions and macros:
  * ```write``` (man 2 write)
  * ```malloc``` (man 3 malloc)
  * ```free``` (man 3 free)
  * ```va_start``` (man 3 va_start)
  * ```va_end``` (man 3 va_end)
  * ```va_copy``` (man 3 va_copy)
  * ```va_arg``` (man 3 va_arg)
## Mandatory Tasks
- [ ] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [ ] Handle conversion specifiers ```d```, ```i```.
- [ ] Create a man page for your function.
## Advanced Tasks
- [ ] Handle conversion specifier ```b```.
- [ ] Handle conversion specifiers ```u```, ```o```, ```x```, ```X```.
- [ ] Use a local buffer of 1024 chars in order to call write as little as possible.
- [ ] Handle conversion specifier ```S```.
- [ ] Handle conversion specifier ```p```.
- [ ] Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers.
- [ ] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the ```0``` flag character for non-custom conversion specifiers.
- [ ] Handle the custom conversion specifier ```r``` that prints the reversed string.
- [ ] Handle the custom conversion specifier ```R``` that prints the rot13'ed string.
- [ ] All above options should work well together.
## File Descriptions
* **_printf.c:** - contains the ```_printf``` function, which uses the prototype ```int _printf(const char *format, ...);```.The format string is composed of zero or more directives. See ```man 3 printf``` for more detail.
**_printf** will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to
**stdout**, the standard output stream.
* **_putchar.c:** - contains the function ```_putchar```, which writes a character to stdout.
* **holberton.h:** - contains all function prototypes used for ```_printf```.
* **man_3_printf:** - manual page for the custom ```_printf``` function.
* **functions_print.c:** - contains the functions ```print_char```, ```print_string```, ```print_porc```, and ```print_rev``` which handle the conversion specifiers ```c```, ```s```, ```%```, and ```r```, respectively, as well as ```print_bin```, which prints binary numbers.
* **aux_print_int.c:** - contains the functions ```print_digit``` and ```aux```, which handle the conversion specifiers ```i``` and ```d```, respectively and an auxiliar function to print positive and negative numbers.
* **advanced_functions.c:** - contains the functions ```print_hex```, which prints an unsigned int in hexidecimal form, ```print_rot```, which handles the conversion specifier ```R``` and prints the rot13 letters substitution, ```print_oct```, wich prints octal numbers.
* **get_function.c:** - wich contains the structure array to find the function that the program needs to execute for each format.

## Authors :copyright:
* **Alexander Forero** - [Github](https://github.com/ForeroAlexander)
* **Carolina Capote** - [Github](https://github.com/Carolinacapote)
* **Daniel Escobar** - [Github](https://github.com/dantereto)
