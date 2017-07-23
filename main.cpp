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
    vector<int> vi;

    library.insertToLibrary(libraryList);
    library.printLibrary(libraryList);

    cout << endl;
    system("pause");
    return 0;
}

