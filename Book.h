#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    string isbn;
    string availability;
    string dateAdd;

    Book();
    Book(string t, string a, string i, string av, string d);

    void print() const;
};

void sortAscending(Book arr[], int size);
void sortDescending(Book arr[], int size);

#endif
