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

int SIZE = 5;

class Color {
    int red_val;
    int green_val;
    int blue_val;

    public:
    int getRedVal() const {return red_val;}
    int getGreenVal() const {return green_val;}
    int getBlueVal() const {return blue_val;}
    void setRedVal(int val) {this->red_val = val;}
    void setGreenVal(int val) {this->green_val = val;}
    void setBlueVal(int val) {this->blue_val = val;}
    void print() {
        cout << "Red Value: " << red_val << endl;
        cout << "Green Value: " << green_val << endl;
        cout << "Blue Value: " << blue_val << endl;
        cout << endl;
    }
};

int main() {
    //create array of colors using file input
    Color colors[SIZE];
    ifstream fin("colors.txt");
    if (fin.good( )) {
        int red, green, blue;
        int index = 0;

        while (fin >> red) {
            fin >> green;
            fin >> blue;

            Color temp;
            temp.setRedVal(red);
            temp.setGreenVal(green);
            temp.setBlueVal(blue);
            colors[index] = temp;
            index++;
        }
        fin.close( );
    }
    else
        cout << "ERROR! Please verify file name/directory and restart program.";
        return 1;


    return 0;
}