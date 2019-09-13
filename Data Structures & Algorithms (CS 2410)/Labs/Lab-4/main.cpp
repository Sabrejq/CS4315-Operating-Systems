// Julio Quintero

#include <iostream>
#include "Circles.h"
using namespace std;

int main()
{

    Circles sphere(2);
    Circles sphere_two(15,16); // just the center
    Circles sphere_three(2,15,16); // all of them
    Circles sphere_four;


    sphere.printCircleStats();
    cout << "The area of the circle is " << sphere.findArea() << endl;
    cout << "The circumference of the circle is " << sphere.findCircumference() << endl;

    cout << endl;

    sphere_two.printCircleStats();
    cout << "The area of the circle is " << sphere_two.findArea() << endl;
    cout << "The circumference of the circle is " << sphere_two.findCircumference() << endl;

    cout << endl;

    sphere_three.printCircleStats();
    cout << "The area of the circle is " << sphere_three.findArea() << endl;
    cout << "The circumference of the circle is " << sphere_three.findCircumference() << endl;

    cout << endl;


    sphere_four.printCircleStats();
    cout << "The area of the circle is " << sphere_four.findArea() << endl;
    cout << "The circumference of the circle is " << sphere_four.findCircumference() << endl;

    return 0;
}