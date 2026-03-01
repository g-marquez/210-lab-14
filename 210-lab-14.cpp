//*****************************************************************************
// COMSC-210 | Lab 14 | Gabriel Marquez
// Description: this program exhibits a Color class that has as its private
// member variables three integers representing the red, green, and blue values
// of that color.
//*****************************************************************************

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int SIZE = 5;

class Color {
    int red_val;
    int green_val;
    int blue_val;

    public:
    //getters and setters
    int getRedVal() const {return red_val;}
    int getGreenVal() const {return green_val;}
    int getBlueVal() const {return blue_val;}
    void setRedVal(int val) {this->red_val = val;}
    void setGreenVal(int val) {this->green_val = val;}
    void setBlueVal(int val) {this->blue_val = val;}
    //member print() method
    void print() {
        cout << "\tRed Value: " << red_val << endl;
        cout << "\tGreen Value: " << green_val << endl;
        cout << "\tBlue Value: " << blue_val << endl;
        cout << endl;
    }
};

int main() {
    //create array of color objects using file input
    Color colors[SIZE];
    //color names to ouput at the end
    string colorNames[SIZE] = {"Grey", "Salmon", "Beige", "Teal", "Maroon"};
    ifstream fin("colors.txt");
    if (fin.good( )) {
        int red, green, blue;
        int index = 0;

        while (fin >> red) {
            fin >> green;
            fin >> blue;
            
            //create temp color object, populate, and add it to array
            Color temp;
            temp.setRedVal(red);
            temp.setGreenVal(green);
            temp.setBlueVal(blue);
            colors[index] = temp;
            index++;
        }
        fin.close( );
    }
    else {
        cout << "ERROR! Please verify file name/directory and restart program.";
        return 1;
    }
    //output values using color object's print() method
    cout << "Outputting color objects: " << endl;
    for (Color c : colors) {
        static int i = 0;
        cout << "Color #" << i + 1 << ": " << colorNames[i] << endl;
        c.print();
        i++;
    }
    return 0;
}