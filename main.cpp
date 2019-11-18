#include <iostream>
#include "Rectangles.h"
#include <fstream>
#include <sstream>
#include <string>
#include <cassert>



#define CATCH_CONFIG_MAIN
int main() {
    Rectangles rectangles("../rectangulos.in");
    ofstream myfile;
    myfile.open ("resultado.txt");
    rectangles.Save(myfile);
    myfile.close();



    // Prueba
    Rectangles rectangles2("../rectangulos2.in");
    ofstream myfile2;
    myfile2.open ("resultado2.txt");
    rectangles2.Save(myfile2);
    myfile2.close();

    //Prueba
    Rectangles rectangles3("../rectangulos3.in");
    ofstream myfile3;
    myfile3.open ("resultado3.txt");
    rectangles3.Save(myfile3);
    myfile3.close();


    //assert(Rectangles rectangles1("../rectangulos1.in")=="xxxxx");
    //assert(rectangles.figures[1].y==11);
    return 0;
}