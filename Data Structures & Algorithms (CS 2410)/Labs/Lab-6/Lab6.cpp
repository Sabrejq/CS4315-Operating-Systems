#include <iostream>
#include "ThreeD.h"
#include "TwoD.h"
using namespace std;

int main()
{
    int x,y,z = 0;

    cout << "Please enter the x,y coordinates for the first point in 2D P1<x,y>: ";
    cin >> x >> y;

    //Create an object named P1_2D and assign x and y
    TwoD P1_2D(x,y);


    cout << "Please enter the x,y coordinates for the second point in 2D P2<x,y>: ";
    cin >> x >> y;

    //Create an object named P2_2D and assign x and y

    TwoD P2_2D(x,y);

    cout << "Please enter the x,y,z coordinates for the first point in 3D P1<x,y,z>: ";
    cin >> x >> y >> z;

    //Create an object named P1_3D and assign x, y, and z
    ThreeD P1_3D(x,y,z);

    cout << "Please enter the x,y,z coordinates for the second point in 3D P2<x,y,z>: ";
    cin >> x >> y >> z;

    //Create an object named P2_3D and assign x, y, and z

    ThreeD P2_3D(x,y,z);


    //Compute 2D distance and display it
    cout << "Distance (P1, P2) in 2D: "<<P1_2D.compute(P2_2D) << endl;

    //Compute 2D distance and display it
    cout << "Distance (P1, P2) in 3D: "<<P1_3D.compute(P2_3D) << endl;


    cout << "Get Ready" << endl;

    return 0;
}