//
// Created by Usuario on 11/17/2019.
//

#include "Rectangles.h"


bool Rectangles::verification(const figure &t) {
    if (t.fx>n || t.fy>m) throw logic_error("Uno o más rectangulos no alcanzan en el tablero");;
    for (auto u:figures)
        if (!((u.x<=t.x && u.y<=t.y && t.fx<=u.fy && t.fy<=u.fy) || t.fx<=u.x || t.fy<=u.y || u.fx<=t.x || u.fy<=t.y))
            return false;
    return true;
}

void Rectangles::Save(ofstream &myfile){
    sort(figures.begin(),figures.end());
    for(auto u:figures)
        myfile<<"A"<<" "<<u.x<<" "<<u.y<<" "<<u.fx-u.x<<" "<<u.fy-u.y<<"\n";
}


Rectangles::Rectangles(const string &file) {
    figures.clear();
    ifstream s(file);
    int number;
    char a;
    int f,c;
    s>>number>>n>>m;
    figure temp;
    s>>a>>temp.x>>temp.y>>f>>c;
    temp.fx=c+temp.x;
    temp.fy=f+temp.y;
    figures.emplace_back(temp);
    while(s>>a>>temp.x>>temp.y>>f>>c){
        if (f < 0) throw logic_error("Se encontro una cantidad de filas negativa");
        if (c < 0) throw logic_error("Se encontro una cantidad de columnas negativa");
        temp.fx=temp.x+c;
        temp.fy=temp.y+f;
        if (verification(temp)) figures.emplace_back(temp);
    }
}
