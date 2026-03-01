//*****************************************************************************
// COMSC-210 | Lab 14 | Gabriel Marquez
// Description: this program exhibits a Color class that has as its private
// member variables three integers representing the red, green, and blue values
// of that color.
//*****************************************************************************

#include <iostream>
#include <fstream>
using namespace std;

class Color {
    int red_val;
    int blue_val;
    int green_val;

    public:
    int getRedVal() const;
    int getBlueVal() const;
};