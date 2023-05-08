# Projekt "Sito Eratostenesa" 
Program "Sito Eratostenesa" to program napisany w języku C, którego zadaniem jest wyznaczanie liczb pierwszych w danym przedziale. Nazwa programu pochodzi od metody, jaką wykorzystuje, czyli Sita Eratostenesa.

## Jak działa program?
Program działa w następujący sposób:
1. Pyta użytkownika o przedział, w którym chce szukać liczb pierwszych (górny przedział nie może być większy niż 300 000 z powodu czasu wykonywania programu).
2. Na podstawie wybranego przedziału program tworzy tablicę o rozmiarze przedziału, w której zaznacza liczbami 1 te elementy, które na pewno nie są liczbami pierwszymi (np. wielokrotności innych liczb).
3. Program następnie przegląda całą tablicę i usuwa elementy, które zostały zaznaczone jako niebędące liczbami pierwszymi, a następnie wyświetla pozostałe liczby pierwsze.
4. Dodatkowo program oferuje opcję zapisania wyników do pliku tekstowego oraz wczytania pliku tekstowego z danymi i sprawdzenia, które z liczb w pliku są liczbami pierwszymi.

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
