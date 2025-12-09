#include <iostream>
#include "Book.h"
using namespace std;

int main() {

    Book correct[3] = {
        Book("Alpha", "A", "111", "Available", "2024-01-01"),
        Book("Bravo", "B", "222", "Available", "2024-01-02"),
        Book("Charlie", "C", "333", "Available", "2024-01-03")
    };

    cout << "=== Correct Book's Information ===\n";
    for (int i = 0; i < 3; i++) correct[i].print();

    Book incorrect[3] = {
        Book("", "123", "ABC", "???", "BAD_DATE"),
        Book("Wrong", "", "NO_ISBN", "None", "Invalid"),
        Book("!!", "??", "-999", "Error", "")
    };

    cout << "\n=== Incorrect Book's Information ===\n";
    for (int i = 0; i < 3; i++) incorrect[i].print();

    Book ascendingArr[3] = {
        Book("Cat", "C", "555", "Available", "2024-02-02"),
        Book("Apple", "A", "444", "Available", "2024-02-01"),
        Book("Banana", "B", "666", "Available", "2024-02-03")
    };

    Book descendingArr[3] = {
        Book("Dog", "D", "777", "Available", "2024-02-02"),
        Book("Fish", "F", "888", "Available", "2024-02-03"),
        Book("Elephant", "E", "999", "Available", "2024-02-01")
    };

    Book mixedArr[3] = {
        Book("Lion", "L", "777", "Available", "2024-03-01"),
        Book("Bear", "B", "999", "Available", "2024-03-03"),
        Book("Tiger", "T", "888", "Available", "2024-03-02")
    };

    sortAscending(ascendingArr, 3);
    cout << "\n=== Sort Ascending (A → Z) ===\n";
    for (int i = 0; i < 3; i++) ascendingArr[i].print();

    sortDescending(descendingArr, 3);
    cout << "\n=== Sort Descending (Z → A) ===\n";
    for (int i = 0; i < 3; i++) descendingArr[i].print();

    cout << "\n=== Sort Mixed Array (A → Z) ===\n";
    sortAscending(mixedArr, 3);
    for (int i = 0; i < 3; i++) mixedArr[i].print();

    return 0;
}
