using namespace std;
#include <iostream>
int main()
{
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    double avg_grade;

    cout << "whats your first grade?"<<endl;
    cin >> grade1;

    cout << "whats your second grade?"<<endl;
    cin >> grade2;

    cout << "whats your third grade?"<<endl;
    cin >> grade3;

    cout << "whats your fourth grade?"<<endl;
    cin >> grade4;

    avg_grade = (grade1+grade2+grade3+grade4)/4.0;
    cout << "Your average grade is:" << avg_grade << endl;

    return 0;

}
// Alan Villa, lab #2