//
// Created by UserW7m3ra on 7/20/2017.
//

#ifndef BACKPACK_BOOK_H
#define BACKPACK_BOOK_H

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Book{
public:
    Book(string bt, string ba, string be, int pn) : bookTitle(bt), bookAuthor(ba), bookEditor(be), pagesNumber(pn) {}
    Book(){bookTitle = " "; bookAuthor = " "; bookEditor = " "; pagesNumber = 0;}

    void setBookTitle(const string &newBookTitle){this->bookTitle = newBookTitle;}
    const string &getBookTitle() const{return bookTitle;}
    void setBookAuthor(const string &newBookAuthor){this->bookAuthor = newBookAuthor;}
    const string &getBookAuthor() const{return bookAuthor;}
    void setBookEditor(const string &newBookEditor){this->bookEditor = newBookEditor;}
    const string &getBookEditor() const{return bookEditor;}
    void setPagesNumber(int newPagesNumber){this->pagesNumber = newPagesNumber;}
    int getPagesNumber() const {return pagesNumber;}

protected:
    string bookTitle, bookAuthor, bookEditor;
    int pagesNumber;
};


#endif //BACKPACK_BOOK_H
