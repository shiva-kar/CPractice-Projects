# Math Solvers (C)

Small console programs focused on common math problems.

## Programs

- `prime_check_range.c` — prints primes in a range and counts them
- `prime_sieve_upto_n.c` — prints all primes up to `n` (sieve)
- `gcd_lcm.c` — computes GCD and LCM of two integers
- `factorial_iterative.c` — iterative factorial (0..20)
- `fibonacci_iterative.c` — iterative Fibonacci (0..46)

## Build & Run (PowerShell)

```powershell
cd "main projects/math_solvers"
gcc -std=c11 -Wall -Wextra -o gcd_lcm.exe gcd_lcm.c
./gcd_lcm.exe
```
