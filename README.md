# Projekt "Sito Eratostenesa" 
Program "Sito Eratostenesa" to program napisany w języku C, którego zadaniem jest wyznaczanie liczb pierwszych w danym przedziale. Nazwa programu pochodzi od metody, jaką wykorzystuje, czyli Sita Eratostenesa.

## Jak działa program?
Program działa w następujący sposób:
1. Pyta użytkownika o przedział, w którym chce szukać liczb pierwszych (górny przedział nie może być większy niż 300 000 z powodu czasu wykonywania programu).
2. Na podstawie wybranego przedziału program tworzy tablicę o rozmiarze przedziału, w której zaznacza liczbami 1 te elementy, które na pewno nie są liczbami pierwszymi (np. wielokrotności innych liczb).
3. Program następnie przegląda całą tablicę i usuwa elementy, które zostały zaznaczone jako niebędące liczbami pierwszymi, a następnie wyświetla pozostałe liczby pierwsze.
4. Dodatkowo program oferuje opcję zapisania wyników do pliku tekstowego oraz wczytania pliku tekstowego z danymi i sprawdzenia, które z liczb w pliku są liczbami pierwszymi.
