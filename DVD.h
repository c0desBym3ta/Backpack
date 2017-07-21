//
// Created by UserW7m3ra on 7/20/2017.
//

#ifndef BACKPACK_DVD_H
#define BACKPACK_DVD_H


#include <iostream>
#include <string>
using namespace std;

class DVD{
public:
    DVD(string ft, string fd, int dur) : filmTitle(ft), filmDirector(fd), duration(dur) {}
    DVD(){filmTitle = " "; filmDirector = " "; duration = 0;}

    void setFilmTitle(const string &newFilmTitle){this->filmDirector = newFilmTitle;}
    const string &getFilmTitle() const{return filmTitle;}
    void setFilmDirector(const string &newFilmDirector){this->filmDirector = newFilmDirector;}
    const string &getFilmDirector() const {return filmDirector;}
    void setDuration(int newDuration){this->duration = newDuration;}
    int getDuration()const {return duration;}

protected:
    string filmTitle, filmDirector;
    int duration;
};


#endif //BACKPACK_DVD_H
