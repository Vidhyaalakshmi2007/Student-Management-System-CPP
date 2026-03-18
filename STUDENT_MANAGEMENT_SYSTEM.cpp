#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class student
{
private:
    string name;
    int id;
    string course;
    float marks[5];
    float total;
    float per;
    char grade;

public:
    void getdetails()
    {
        total = 0; // reset

        cout << "ENTER STUDENT DETAILS:" << endl;

        cout << "ENTER STUDENT ID: ";
        cin >> id;
        cin.ignore();

        cout << "ENTER NAME OF THE STUDENT: ";
        getline(cin, name);

        cout << "ENTER COURSE NAME: ";
        getline(cin, course);

        cout << "ENTER YOUR MARKS ONE BY ONE: " << endl;

        for(int i = 0; i < 5; i++)
        {
            while(true)
            {
                cin >> marks[i];

                if(marks[i] >= 0 && marks[i] <= 100)
                {
                    total += marks[i];
                    break;
                }
                else
                {
                    cout << "Invalid marks! Enter again: ";
                }
            }
        }

        per = (total / 500.0) * 100;

        if(per >= 90)
            grade = 'A';
        else if(per >= 80)
            grade = 'B';
        else if(per >= 70)
            grade = 'C';
        else if(per >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\nSTUDENT DETAILS:\n";
        cout << "NAME: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "COURSE: " << course << endl;
        cout << "TOTAL: " << total << endl;
        cout << "PERCENTAGE: " << fixed << setprecision(2) << per << endl;
        cout << "GRADE: " << grade << endl;
    }
};

int main()
{
    student v;
    v.getdetails();
    v.display();
    return 0;
}
