#include <iostream>
#include "Book.h"
using namespace std;

Book::Book() {}

Book::Book(string t, string a, string i, string av, string d) {
    title = t;
    author = a;
    isbn = i;
    availability = av;
    dateAdd = d;
}

void Book::print() const {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Availability: " << availability << endl;
    cout << "DateAdd: " << dateAdd << endl;
    cout << "---------------------------\n";
}

void sortAscending(Book arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j].title > arr[j + 1].title)
                swap(arr[j], arr[j + 1]);
}

void sortDescending(Book arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j].title < arr[j + 1].title)
                swap(arr[j], arr[j + 1]);
}
