#include <iostream>
using namespace std;

// Function declaration
double theAverage(int myArray[],int size);
int theMedian(int myArray[], int size);

int main(){

    int students_surveyed = 0;

    cout << "How many students were surveyed?" << endl;
    cin >> students_surveyed;

    // Negative numbers checking
    if ( students_surveyed == 0){
        cout << "You enter zero, thus you did not surveyed anyone." << endl;
        cout << "Have a good day!";
        exit(0);
    }

    // Checking for negative numbers
    while (students_surveyed < 0) {
        cerr << "Do not enter negative numbers,"
                " please enter a valid number:" << endl;
        cin >> students_surveyed;

        if (students_surveyed == 0) {
            cout << "You enter zero, thus you did not surveyed anyone." << endl;
            cout << "Have a good day!";
            exit(0);
        }
    }

    int *movies_watched = new int[students_surveyed]; // Allocating memory using "new"

    for (int i = 0 ; i < students_surveyed; i++) {
        cout << "How many movies did student number " << i + 1 << " watched?" << endl;
        cin >> movies_watched[i];

        while (movies_watched[i] < 0) {
            cerr << "Do not enter negative numbers,"
                    " please enter a valid number:" << endl;
            cin >> movies_watched[i];
        }
    }

    // Printing table Table using two loops

    for (int i = 0; i<students_surveyed; i++)
    {
        cout << "S"<< i+1 <<": ";

        for (int j = 0; j < movies_watched[i]; j++)
        {

            cout << "*";
        }
        cout << endl;
    }

    cout << "The average is: "<< theAverage(movies_watched,students_surveyed)<< endl;
    cout << "The median is: " << theMedian(movies_watched,students_surveyed)<< endl;

    return 0;
}


// Function implementation

double theAverage(int myArray[], int size){

    double total = 0;
    double average = 0;

    for(int i = 0; i < size; i++)
    {
      total = total + myArray[i];
    }

    average = total/size;

    return average;
}

int theMedian(int myArray[], int size){

    // First we sort the array
    sort(myArray, myArray+size);

    // check for even case
    if (size % 2 != 0)
        return myArray[size/2];

    return (myArray[(size-1)/2] + myArray[size/2])/2;
}