# The sieve of Eratosthenes

This program allows you to find prime numbers in a given range, save them to a file, or check if numbers in a file are prime.

## Usage

To run the program, compile the code using a C compiler and run the resulting executable file.

Upon starting the program, you will be prompted to choose one of the following options by entering a number:

1. Calculate and display prime numbers in a range
2. Save prime numbers in a range to a file
3. Check if numbers in a file are prime

## Finding prime numbers in a range

If you choose option 1, you will be prompted to enter the upper bound of the range in which to search for prime numbers. The upper bound cannot exceed 300,000 due to the execution time of the program. After entering the upper bound, the program will display all prime numbers in the range from 2 to the specified upper bound.

## Saving prime numbers to a file

If you choose option 2, the program will prompt you for the upper bound of the range as in option 1. After entering the upper bound, the program will save the prime numbers in the range from 2 to the specified upper bound to a file named "wynikowy.dat" in the program's directory.

## Checking if numbers in a file are prime

If you choose option 3, the program will prompt you for the name of the file to check. The program will then read the numbers from the file and check if they are prime. The results will be displayed on the screen.

### The program uses the sieve of Eratosthenes algorithm to find prime numbers.
