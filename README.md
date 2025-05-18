# MyPrintf - Custom Printf Implementation

A custom implementation of the printf function in C, providing formatted output conversion. This library implements many of the standard printf format specifiers and modifiers.

## Project Overview

MyPrintf is a custom implementation of the standard C printf function that supports:
- Basic format specifiers (%d, %s, %c, etc.)
- Number conversions (decimal, hexadecimal, octal)
- String formatting and character output
- Custom format handling

## Project Structure

```
MyPrintf/
├── sources/
│   ├── my_printf.c      # Main printf implementation
│   ├── my_converts.c    # Number conversion functions
│   ├── my_functions.c   # Core formatting functions
│   └── my_functions2.c  # Additional utility functions
├── tests/
│   ├── my_tests.c       # Unit tests
│   └── my_tests2.c      # Additional test cases
├── includes/            # Header files
└── Makefile            # Build configuration
```

## Building the Project

To build the static library:

```bash
make
```

This will generate `libmy.a` which you can link with your programs.

## Usage

### Including in Your Project

```c
#include "my_printf.h"

int main(void)
{
    my_printf("Hello, %s!\n", "World");
    my_printf("Number: %d\n", 42);
    return 0;
}
```

### Supported Format Specifiers

- `%d`, `%i`: Signed decimal integer
- `%u`: Unsigned decimal integer
- `%o`: Unsigned octal
- `%x`, `%X`: Unsigned hexadecimal
- `%c`: Single character
- `%s`: String
- `%p`: Pointer address
- `%%`: Literal percent sign

## Testing

The project includes comprehensive unit tests using the Criterion framework.

To run the tests:

```bash
make run_tests
```

## Building and Cleaning

The following make targets are available:
- `make`: Build the static library
- `make clean`: Remove object files
- `make fclean`: Remove object files and the library
- `make re`: Rebuild the project
- `make run_tests`: Run unit tests

## Implementation Details

The implementation is divided into several components:
- Core printf logic with format string parsing
- Number conversion utilities
- String and character handling
- Format specifier processing

## Error Handling

The implementation includes error handling for:
- Invalid format strings
- Missing arguments
- Unsupported format specifiers

## License

This project is licensed under the terms provided in the LICENSE file.

## Contributing

Contributions are welcome! Feel free to submit issues and pull requests. 