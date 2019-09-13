#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;



struct StudentInfo {
    string name;
    int grade;

};



// Everything inside of the struct is public, fucntions declaration and implementation
int minimum(vector <StudentInfo> objectA, int length)
{

    int minimumGrade = objectA[0].grade;

    for (int i = 0; i < length; i++) {

        if(minimumGrade > objectA[i].grade)
        {
            minimumGrade =objectA[i].grade;
        }

    }
    return minimumGrade;
}

int maximum(vector <StudentInfo> objectA, int length)
{

    int maximumGrade = objectA[0].grade;

    for (int i = 0; i < length; i++) {

        if(maximumGrade < objectA[i].grade)
        {
            maximumGrade = objectA[i].grade;
        }

    }
    return maximumGrade;
}

double average(vector <StudentInfo> objectA, int length)
{

    double sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum = sum + objectA[i].grade;

    }
    return sum/length;
}


// this is used to sort the vector in order to calculate the median
bool compareLength(const StudentInfo &a, const StudentInfo &b)
{
    return a.grade < b.grade;
}

double median(vector <StudentInfo> objectA, int length)
{

        // First we sort the vector
    sort(objectA.begin(), objectA.end(), compareLength);


         // check for even case
        if (length % 2 != 0)
         {

        return objectA[length/2].grade;
         }
         else
        {
        return (double) (objectA[(length - 1) / 2].grade + objectA[length / 2].grade) / 2.0;
    }
}




int main() {

    vector <StudentInfo> students;
    StudentInfo temp_students;
    bool menu = true;
    int control = 0;

     cout << "Enter Student's name and grade: " << "\n";

     // input, try/catch
     while (menu){
         string names;
         int grades = 0;

         cout << "Type name of student " << control + 1 << ": ";
          getline(cin, names);
         if (names == "done" || names == "Done" || names == "DONE")
         {
             menu = false;
             break;
         }

         cout << "Type grade of student " << control + 1 << ": ";
         cin >>grades;

         try
         {
             if (grades < 0)
             {
                 throw "Enter a grade above negative numbers for student ";
             }
         }

             catch( const char *negative)
             {
                 while (grades < 0){
                 cerr << negative << "number " << control + 1 << ": ";
                     cin >> grades;
                 }
             }

         temp_students.name = names;
         temp_students.grade = grades;

         students.push_back(temp_students);


         control++;
         cin.ignore();

     }

     cout<< "****************************************************************************" << endl;
     cout << setw(40);
     cout <<"Class Info: " << "\n";
     cout << "Names" ;
     cout << setw(15);
     cout <<"Grades\n";
     // Main output of the class
     for(int i = 0 ; i < students.size();i++)
     {
         cout << students.at(i).name <<" : "<< setw(5) <<students.at(i).grade <<" ----> ";
         if (students.at(i).grade < 70){
             cout <<"F\n";
         }
         else{
             cout <<"P\n";
         }
     }

     // Stats output average, median,max, min
     cout<< "\n****************************************************************************" << endl;
     cout << "Stats: "<< endl;
     cout << "The minimum grade is: " << minimum(students, students.size())<< endl;
     cout << "The maximum grade is: " << maximum(students, students.size())<< endl;
     cout << "The average grade is: " << average(students, students.size())<< endl;
     cout << "The median grade is: " << median(students, students.size())<< endl;

    // Out put of Minimum and maximum names
    cout<< "\n****************************************************************************" << endl;
    cout << "Maximum grades:\n";
    for(int i = 0 ; i < students.size();i++) {

        if (students.at(i).grade >= maximum(students, students.size())) {
            cout <<students.at(i).name<< endl;
        }
    }
    cout <<"\n";
    cout << "Minimum grades:\n";
    for(int i = 0 ; i < students.size();i++) {

        if (students.at(i).grade <= minimum(students, students.size())) {
            cout <<students.at(i).name<< endl;
        }
    }
    
    return 0;
}

