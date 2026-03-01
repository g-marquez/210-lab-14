//*****************************************************************************
// COMSC-210 | Lab 14 | Gabriel Marquez
// Description: this program exhibits a Color class that has as its private
// member variables three integers representing the red, green, and blue values
// of that color.
//*****************************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Color {
    int red_val;
    int blue_val;
    int green_val;

    public:
    int getRedVal() const {return red_val;}
    int getBlueVal() const {return blue_val;}
    int getGreenVal() const {return green_val;}
    void setRedVal(int val) {this->red_val = val;}
    void setBlueVal(int val) {this->blue_val = val;}
    void setGreenVal(int val) {this->green_val = val;}
    void print() {

    }
};