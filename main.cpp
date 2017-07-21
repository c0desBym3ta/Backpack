#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "Book.h"
#include "DVD.h"
#include "Library.h"
#include "Combine.h"
using namespace std;

int main(){
    Library library;
    vector<Combine> libraryList;
    list<Book> it;
    //cout << "Size: " << libraryList.size() << endl;
    library.insertToLibrary(libraryList);
    //cout << "Size: " << libraryList.size() << endl;
    library.testPrintVector(libraryList);

    system("pause");
    return 0;
}
