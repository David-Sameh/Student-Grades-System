#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const int grades = 100;
    float arr[grades] = {};
    int n = 0;

    cout << "enter the numbers of students" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter your grades" << endl;
        cin >> arr[i];
    }
    float sum = 0;
    float max = arr[0];
    float min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        sum = sum + arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    float average = sum / n;
    cout << "The student with the highest grade is : " << max << endl;
    cout << "The student with the lowest grade is : " << min << endl;
    cout << "the average is : " << average << endl;
}
