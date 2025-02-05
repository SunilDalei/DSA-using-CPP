// WAP to find grade of a student .
#include <iostream>

using namespace std;

int main()
{
    int marks;
    char grade;
    cout << "Enter your marks : " << endl;
    cin >> marks;
    if (marks > 90 && marks <= 100)
    {
        grade = 'A';
        cout << "The grade of the student is : " << grade << endl;
    }
    else if (marks > 80 && marks <= 90)
    {
        grade = 'B';
        cout << "The grade of the student is : " << grade << endl;
    }
    else if (marks > 70 && marks <= 80)
    {
        grade = 'C';
        cout << "The grade of the student is : " << grade << endl;
    }
    else if (marks > 60 && marks <= 70)
    {
        grade = 'D';
        cout << "The grade of the student is : " << grade << endl;
    }
    else if (marks > 40 && marks <= 60)
    {
        grade = 'E';
        cout << "The grade of the student is : " << grade << endl;
    }
    else if (marks <= 40)
    {
        grade = 'F';
        cout << "The grade of the student is : " << grade << endl;
    }
    else
    {
        cout << "You have entered wrong marks!" << endl;
    }

    return 0;
}