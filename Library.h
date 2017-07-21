//
// Created by UserW7m3ra on 7/20/2017.
//

#ifndef BACKPACK_LIBRARY_H
#define BACKPACK_LIBRARY_H

#include <iostream>
#include <string>
#include <list>
#include "Book.h"
#include "DVD.h"
#include "Combine.h"
using namespace std;

class Library{
public:
    void insertToLibrary(vector <Combine> &libraryList){
        string bookTitle, bookAuthor, bookEditor; int pagesNumber, num;
        string dvdTitle, dvdDirector; int duration;
        cout << "How many entries do you want to make (Book & Films included): "; cin >> num;
        for(int i = 0; i <num ; i++){
            cout << "\nBook's title: "; cin >> bookTitle;
            cout << "Book's author: "; cin >> bookAuthor;
            cout << "Book's editor: "; cin >> bookEditor;
            cout << "Number of pages: "; cin >> pagesNumber;
            cout << "\nFilm's title: "; cin >> dvdTitle;
            cout << "Film's director: "; cin >> dvdDirector;
            cout << "Film's duration: "; cin >> duration;
            Combine newEntry(bookTitle, bookAuthor, bookEditor, pagesNumber, dvdTitle, dvdDirector, duration);
            libraryList.push_back(newEntry);

            cout << "\nNew entry registered to the library!" << endl;
        }
        cout << "Total Entries: " << libraryList.size();
        cout << endl;
    }

    void testPrintVector(const vector<Combine> &trialvector){
        cout << "\nLIST OF AVAILABLE BOOKS" << endl;
        cout << "-----------------------" << endl;
        for(int i = 0; i < trialvector.size(); i++)
            cout << "[" << i+1 << "] TITLE: " << trialvector[i].getBookTitle() << ", AUTHOR: " << trialvector[i].getBookAuthor() << ", EDITOR:  " << trialvector[i].getBookEditor() << ", PAGES: " << trialvector[i].getPagesNumber() << endl;

        cout << "\nLIST OF AVAILABLE FILMS" << endl;
        cout << "------------------------" << endl;
        for(int i = 0; i < trialvector.size(); i++)
            cout << "[" << i+1 << "] TITLE: " << trialvector[i].getFilmTitle() << ", DIRECTOR: " << trialvector[i].getFilmDirector() << ", DURATION: " << trialvector[i].getDuration() << endl;
    }

private:

};


#endif //BACKPACK_LIBRARY_H
