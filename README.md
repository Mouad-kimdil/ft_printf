# ft_printf - 42 Project By ![Your Name](https://img.shields.io/badge/Mouad-kimdil-blue)

![School: 42](https://img.shields.io/badge/School-1337-blue)

Welcome to the "ft_printf" project, part of the 42 School cursus. This project is a custom implementation of the printf function in C, providing a flexible and extensible way to format and print output.

## Table of Contents
- [Project Description](#project-description)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Function Descriptions](#function-descriptions)
- [Contributing](#contributing)

## Project Description

"ft_printf" is a crucial project in the 42 School cursus, challenging you to implement your version of the printf function. This project involves handling various format specifiers, such as `%s`, `%d`, `%x`, etc., and providing the expected output for different types of input.

## Usage

To use the ft_printf function, follow these steps:

1. Clone the repository: `git clone <repository_url>`
2. Include the "ft_printf.h" header in your C file: `#include "ft_printf.h"`
3. Compile your code with the "libftprintf.a" library: `gcc your_code.c libftprintf.a`

## Supported Format Specifiers

- `%c`: Character
- `%s`: String
- `%d` and `%i`: Integer
- `%x`: Lowercase hexadecimal
- `%X`: Uppercase hexadecimal
- `%u`: Unsigned integer
- `%p`: Pointer
- `%%`: Percent sign

## Function Descriptions
`int ft_printf(const char *format, ...)`
Description: This is the main function implementing a custom version of the printf function. It takes a format string containing format specifiers and a variable number of arguments corresponding to these specifiers. The function processes the format string, interprets the specifiers, and prints formatted output.

Parameters:

format: A format string containing format specifiers.
...: Variable number of arguments corresponding to the format specifiers.
Return Value:

Returns the total number of characters printed (excluding the null-terminating byte used to end output to strings). If an error occurs, it returns -1.
static int ft_percent(va_list ap, const char s, int len)
Description: This static function handles a specific format specifier and updates the total length. It is called by the ft_printf function for each encountered format specifier.



### `int ft_printf(const char *format, ...)`

- Description: Custom implementation of the printf function.
- Parameters:
  - `format`: A format string containing format specifiers.
  - `...`: Variable number of arguments corresponding to the format specifiers.

### `static int ft_percent(va_list ap, const char s, int len)`

- Description: Handle a specific format specifier and update the total length.
- Parameters:
  - `ap`: A va_list of arguments.
  - `s`: The format specifier character.
  - `len`: The current total length.
  - Return Value:
Returns the updated total length after processing the format specifier. If an error occurs, it returns -1.

## Contributing

Feel free to contribute to the project by opening issues or submitting pull requests. Your contributions are highly appreciated.

