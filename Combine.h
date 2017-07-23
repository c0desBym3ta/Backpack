//
// Created by UserW7m3ra on 7/20/2017.
//

#ifndef BACKPACK_COMBINE_H
#define BACKPACK_COMBINE_H

#include <string>
#include "Book.h"
#include "DVD.h"
using namespace std;

class Combine : public Book, public DVD{
public:
    Combine(string bt, string ba, string be, int pn, string ft, string fd, int dur)  : Book(bt,ba,be,pn), DVD(ft,fd,dur){}
};

#endif //BACKPACK_COMBINE_H
