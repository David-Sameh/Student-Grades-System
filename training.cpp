// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     //GPA Calculator
//     string courses [7]={"Math 2","statics 1","discreate","programming fundamentals","computer laws","tec writing","Organizational behaviors"};
//     int credits [7]={3,3,3,3,2,2,2};
//     string grade []={"A+","A","A-","B+","B","C+","C","D+","D","F"};
//     double My_Grades [7]={};
//     double totalWeightedPoints = 0;
//     double totalSemesterCredits = 0;

//     for(int i=0;i<7;i++)
//     {
//         cout<<"Enter your grade in "<<courses[i]<<" ";
//         cin>>My_Grades[i];

//        double points = (My_Grades[i] >= 50) ? (1.4 + (My_Grades[i] - 50) * (2.6 / 50.0)) : 0;
//         if( points >4,0) points=4.0;
//         totalWeightedPoints += (points * credits[i]); 
//         totalSemesterCredits += credits[i];           85

//     }

//     double old_gpa;
//     int old_hours;

//     cout<<"enter your old GPA"<<endl;
//     cin>>old_gpa;
//     cout<<"enter your old HOURS"<<endl;
//     cin>>old_hours;

//     double semesterGPA = totalWeightedPoints / totalSemesterCredits;
//     double cumulativeGPA=((old_gpa*old_hours)+totalWeightedPoints)/(old_hours+totalSemesterCredits);
//     cout << fixed << setprecision(2); //بتطلع النتيجه بررقمين عشريين بس زي الموقع

//     cout << "\n========================================" << endl;
//     cout << "Semester GPA: " << semesterGPA << endl;
//     cout << "Total Cumulative GPA (CGPA): " << cumulativeGPA << endl;
//     cout << "========================================" << endl;
// }


#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
    
    string courses[7] = {"Math 2", "Statics 1", "Discrete Structures", "Programming Fundamentals", "Computer Law", "Technical Writing", "Organizational Behavior"};
    int credits[7] = {3, 3, 3, 3, 2, 2, 2};
    double My_Grades[7];
    
    
    double totalWeightedPoints = 0;
    double totalSemesterCredits = 0;

    cout << "=== GPA Calculator ===" << endl;

    
    for(int i = 0; i < 7; i++) {
        cout << "Enter your grade in " << courses[i] << " (out of 100): ";
        cin >> My_Grades[i];

        double p = (My_Grades[i] >= 50) ? (1.4 + (My_Grades[i] - 50) * (1.9 / 35.0)) : 0;

        if (p > 4.0) p = 4.0;

        totalWeightedPoints += (p * credits[i]);
        
        totalSemesterCredits += credits[i];
    }

    double old_gpa;
    int old_hours;
    
    cout << "\n--- Cumulative Data ---" << endl;
    cout << "Enter your old GPA : ";
    cin >> old_gpa;
    cout << "Enter your old HOURS: ";
    cin >> old_hours;

    double semesterGPA = totalWeightedPoints / totalSemesterCredits;
    double cumulativeGPA = ((old_gpa * old_hours) + totalWeightedPoints) / (old_hours + totalSemesterCredits);

    cout << fixed << setprecision(2); 
    cout << "\n=======================================" << endl;
    cout << "Semester GPA: " << semesterGPA << endl;
    cout << "Total Cumulative GPA (CGPA): " << cumulativeGPA << endl;
    cout << "=======================================" << endl;

    return 0;
}