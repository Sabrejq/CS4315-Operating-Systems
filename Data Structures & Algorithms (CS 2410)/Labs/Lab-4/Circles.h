//
// Created by Juilo Quintero on 10/9/18.
//

#ifndef LAB_4_CIRCLES_H
#define LAB_4_CIRCLES_H


class Circles
{
public:
    double findArea();
    double findCircumference();
    void printCircleStats();	// This outputs the radius and center of the circle.
    Circles(float r);			// Constructor
    Circles();					// Default constructor
    Circles(int x, int y);                  // just the center
    Circles(float r, int x, int y);    //radius and center
    ~Circles();

private:
    float radius;
    int	center_x;
    int	center_y;
};


#endif //LAB_4_CIRCLES_H
