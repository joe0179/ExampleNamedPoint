/**
 * @file  NamedPoint.cpp
 * A class for NamedPoints, e.g. coordinates with a name attached
 * A simple main routine is provided for testing the class
 * Note: This code is not functional. Don't use it for production!
 */

#include <iostream>

#define POINT_SIZE 1 + 1 + 1 
#define MAX_AMOUNT_POINTS 256 * POINT_SIZE

class NamedPoint
{
private:
    float x;
    float y;
    char *name;

public:
    NamedPoint(float x, float y, char *name)
    {
        this->x = x;
        this->y = y;
        this->name = name;
    }

    float getX() { return x; }
    float getY() { return y; }
    char *getName() { return name; }

    void setX(float x) { this->x = x; }
    void setY(float y) { this->y = y; }
    void setName(char *name) { this->name = name; }
};


//! Simple main function to test the class
void main(int argc, char **argv)
{
    int i, n;
    
    if (argc > 1)
        n = argv[0];

    // first: Create array of up to MAX_AMOUNT_POINTS points
    if (n>MAX_AMOUNT_POINTS)
        return;

    NamedPoint *points = new NamedPoint[n];
    
    // then fill the array with user input
    while(1)
    {
        float x, y;
        char *name;
        
        std::cout << "Enter the values for named point #" << i << std::endl;
        std::cin >> x;
        std::cin >> y;
        std::cin >> name;

        points[i].setX(x);
        points[i].setY(y);
        points[i].setName(name);

        if(i=n) break;
    }

    // Code for processing the named points
    // ...

    delete points;
    return 0;
}