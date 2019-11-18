//
// Created by Usuario on 11/17/2019.
//

#ifndef PRACTICA_CALIFICADA_3B_JREBOSIO_RECTANGLES_H
#define PRACTICA_CALIFICADA_3B_JREBOSIO_RECTANGLES_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

struct figure {
    int x=0;
    int y=0;
    int fx=0;
    int fy=0;
    bool operator<(const figure &other) const {
        if (x<other.x) return true;
        if (x>other.x) return false;
        if (y<other.y) return true;
        if (y>other.y) return false;
        if (fx-x<other.fx-other.x) return true;
        if (fx-x>other.fx-other.x) return false;
        if(fy-y<other.fy-other.y)return true;
        if(fy-y>other.fy-other.y)return false;
        return false;
    }
};



class Rectangles {
public:
    Rectangles(const string& file);
    void Save(ofstream &myfile);
    bool verification(const figure& t);
    vector<figure>figures;
private:
    int n,m;
};


#endif //PRACTICA_CALIFICADA_3B_JREBOSIO_RECTANGLES_H
