# CPractice — University Showcase

Resume: [RESUME.md](RESUME.md)

This repository organizes small C programs by topic and provides simple run instructions for Windows (PowerShell). Each program is self-contained and demonstrates a specific concept.

## Structure

- practice/
  - arrays/: Array input, pointer traversal, reversing
  - control_flow/: Switch statements, loops, tables, star patterns
  - io/: Console input/output and reading/writing files
  - math/: Averages and temperature conversions
  - recursion/: Recursive algorithms and functions
  - structs/: Using `struct` for grouped data
- main projects/
  - math_solvers/: Prime detection (range + sieve), factorial (iterative), Fibonacci (iterative), GCD/LCM
  - data_structures/: 1D/2D arrays and simple string processing
  - patterns/: Visual patterns using loops and control flow
- small projects/
  - test.txt

## Programs (highlights)

- arrays
  - price_with_tax_array.c: Reads item prices, prints price with tax (18%).
  - array_pointer_input_print.c: Inputs integers and prints via pointer traversal.
  - reverse_array.c: Reverses an array in-place.

- control_flow
  - day_of_week_switch.c: Maps 1–7 to weekday names.
  - pyramid_stars.c: Prints a left-aligned pyramid of stars.
  - smaller_of_two.c: Prints the smaller of two inputs.
  - multiplication_table_1_to_10.c: 10×10 multiplication tables.

- io
  - is_digit.c: Checks if a single character is a digit.
  - print_file_index_html.c: Reads and prints `index.html`.
  - write_and_print_content.c: Writes a line to `content.txt` then prints it.

- math
  - average_of_three.c: Average of three integers.
  - celsius_to_fahrenheit.c: Converts °C to °F.

- recursion
  - factorial_recursive.c: Computes `n!` recursively.
  - fibonacci_recursive.c: Prints Fibonacci numbers up to `n`.
  - recurse_hello_world.c: Recursively prints "Hello World" `n` times.
  - sum_1_to_n_recursive.c: Recursive sum `1 + ... + n`.

- structs
  - player_structs.c: Reads and prints player stats using a `struct`.

- projects
  - math_solvers
    - prime_check_range.c: Lists primes in a given range and counts them.
    - factorial_iterative.c: Iterative factorial with safe bounds.
    - fibonacci_iterative.c: Iterative Fibonacci up to `n`.
    - gcd_lcm.c: Computes GCD and LCM for two integers.
    - prime_sieve_upto_n.c: Lists primes up to `n` using the sieve method.
  - data_structures
    - array_1d_sum_avg.c: Reads a 1D array, computes sum and average.
    - array_2d_transpose.c: Inputs a matrix and prints its transpose.
    - string_reverse_vowels.c: Reverses a word and counts vowels.
  - patterns
    - pattern_diamond.c: Prints a symmetric diamond of `*`.
    - pattern_hollow_square.c: Prints a hollow square.
    - pattern_number_triangle.c: Prints a simple number triangle.

## How to Build & Run (Windows)

Requires GCC (`gcc --version` should work). Use `PowerShell`:

```powershell
# Build an example (arrays/reverse_array.c)
cd "practice/arrays"
gcc -std=c11 -Wall -Wextra -o reverse_array.exe reverse_array.c
./reverse_array.exe

# Another (recursion/factorial_recursive.c)
cd "../recursion"
gcc -std=c11 -Wall -Wextra -o factorial_recursive.exe factorial_recursive.c
./factorial_recursive.exe

# Projects examples
cd "../../main projects/math_solvers"
gcc -std=c11 -Wall -Wextra -o prime_check_range.exe prime_check_range.c
./prime_check_range.exe

cd "../data_structures"
gcc -std=c11 -Wall -Wextra -o array_2d_transpose.exe array_2d_transpose.c
./array_2d_transpose.exe

cd "../patterns"
gcc -std=c11 -Wall -Wextra -o pattern_diamond.exe pattern_diamond.c
./pattern_diamond.exe
```

## Showcase Summary

- Math solvers: Prime checks (range + sieve), factorial, Fibonacci, GCD/LCM.
- Data structures practice: 1D/2D arrays, matrix transpose, basic string processing.
- Pattern printing: Classic console patterns using loops and conditionals.
- Focus: Beginner-friendly C11 code with basic input validation.

For programs that read files, ensure the file is present in the same folder (e.g., `practice/io/index.html` for `print_file_index_html.c`).

## Notes

- All executables provided were compiled on Windows. You can recompile any `.c` file with the commands above.
- The `write_and_print_content.c` program uses `content.txt` in `practice/io/`.
- Feel free to extend with more topics (sorting, pointers, file formats).
