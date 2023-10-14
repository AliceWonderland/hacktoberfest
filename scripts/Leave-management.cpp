#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#define total_leaves 20

using namespace std;

void apply_leave();
void enquire_user();
void display_all_user();

class employee
{

private:

    int ID, age, leaves_taken, leaves_left, days;
    static int id;
    string fname, sname, reason, sdate, edate;

public:

    employee(string f, string s, int a)
    {
        fname = f;
        sname = s;
        age = a;
        leaves_taken = 0;
        leaves_left = total_leaves;
        ID = id;
        id++;
    }

    friend void apply_leave();
    friend void enquire_user();
    friend void display_all_user();

};

int employee ::id = 91;

employee e1("Priyanka", "Likhar", 20),
    e2("Pushpendra", "Rajput", 20),
    e3("Rahul", "Bora", 20),
    e4("Rajesh", "singh", 20),
    e5("Rakhi", "Sehrawat", 20),
    e6("Ram", "Shrivastava", 20),
    e7("Ranu", "maida", 20),
    e8("Ratnesh", "Kumar", 20),
    e9("Rinky", "Verma", 20),
    e10("Rishabh", "Nayak", 20);

employee E[10] = {e1, e2, e3, e4, e5, e6, e7, e8, e9, e10};


void apply_leave()
{
    // When an employee asks for leave an approval reciept is printed.

    cout << "\n\t\t\t Enter Employee ID : ";
    int idee;
    cin >> idee;
    int limit = employee::id;

    if (idee < limit && idee >= 91)
    {
        cout << "\t\t Enter number of leaves : ";
        int num;
        cin >> num;

        if (num <= E[idee - 91].leaves_left)
        {
            cout << "\n\t\t\t Choices available : ";
            cout << "\n\t\t\t\t1. Wedding";
            cout << "\n\t\t\t\t2. Outing";
            cout << "\n\t\t\t\t3. Sick";
            cout << "\n\t\t\t\t4. others" << endl;
            cout << "\t\t Enter any reason : \n\t\t\t" << endl;
            cin.ignore();
            getline(cin, E[idee - 91].reason);
            cout << "\t\t Enter dates :\t\t(dd/mm/yy)\n\t\t\t\t Starting date : ";
            cin >> E[idee - 91].sdate;
            cout << "\n\t\t\t\t Ending  date : ";
            cin >> E[idee - 91].edate;
            cout << "\t\t LEAVE APPROVED." << endl;

            E[idee - 91].leaves_taken += num;
            E[idee - 91].leaves_left -= num;
            E[idee - 91].days = num;

            // File handling.
            //***//

            fstream a_new_file;
            a_new_file.open("newfile.txt", ios::trunc | ios::out);

            if (!a_new_file)
            {
                cout << "file not created";
            }

            else
            {
                a_new_file << "\n \t\t\t Employee name : " << E[idee - 91].fname << " " << E[idee - 91].sname
                           << "\n \t\t\t Employee id : " << E[idee - 91].ID
                           << "\n \t\t\t days : " << to_string(num)
                           << "\n \t\t\t Reason : " << E[idee - 91].reason
                           << "\n \t\t\t Leaves left : " << E[idee - 91].leaves_left
                           << "\n \t\t\t Starting date : "<< E[idee - 91].sdate
                           << "\n \t\t\t Ending date : "<< E[idee - 91].edate
                           << "\n\n\t\t\t LEAVE APPROVED.";
                a_new_file.close();
            }

            //***//
        }

        else
        {
            cout << "\n\t\tLeaves not available for more than " << E[idee - 91].leaves_left << " days." << endl;
        }
    }

    else
    {
        cout << "\t\t No Employee with such id. " << endl;
    }
}


void enquire_user()
{
    // Allows user to get record of taken leaves.

    int idee;
    cout << "\n\t\tEnter employee id : ";
    cin >> idee;

    if (idee < employee::id && idee >= 91)
    {
        cout << "\t\t Employee Name : " << E[idee - 91].fname << " " << E[idee - 91].sname;
        cout << "\n\t\t Leaves Taken : " << E[idee - 91].leaves_taken;
        cout << "\n\t\t Leaves left : " << E[idee - 91].leaves_left;
        cout << "\n\t\t\t Details of last leave : " << endl;
        cout << "\n\t\t\t\tDays :" << E[idee - 91].days;
        cout << "\n\t\t\t\tReason : " << E[idee - 91].reason;
        cout << "\n\t\t\t\tLeave taken from :" << E[idee - 91].sdate;
        cout << "\n\t\t\t\tTo : " << E[idee - 91].edate << endl;
    }

    else
    {
        cout << "\n\t\t No employee with such id." << endl;
    }
}


void display_all_user()
{
    //displays all user's info.
    //A page showing leave data of all employee is printed.

          //file opened to write info.

           fstream a_new_file;
        a_new_file.open("newfile.txt", ios::trunc | ios::out);

    for (int i = 91; i < employee::id; i++)
    {
        cout << "\t\tEmployee Name : " << E[i - 91].fname << " " << E[i - 91].sname << endl;
        cout << "\t\tEmployee ID : " << i << endl;
        cout << "\t\tTotal leaves : " << total_leaves << endl;
        cout << "\t\tLeaves taken : " << E[i - 91].leaves_taken << endl;
        cout << "\t\tLeaves left : " << E[i - 91].leaves_left << endl;
        cout << endl;

        // file handling code.

        if (!a_new_file)
        {
            cout << "file not created"<<endl;
        }
        else
        {
            a_new_file << "\t\tEmployee Name : " << E[i - 91].fname << " " << E[i - 91].sname << endl
                       << "\t\tEmployee ID : " << i << endl
                       << "\t\tTotal leaves : " << total_leaves << endl
                       << "\t\tLeaves taken : " << E[i - 91].leaves_taken << endl
                       << "\t\tLeaves left : " << E[i - 91].leaves_left << endl
                       << endl;

        }
    }
                 
                 a_new_file.close();

}


int main()
{

    cout << "\t\t\t\t -----------  LEAVE MANAGEMENT SYSTEM  -----------\t\t\t\t" << endl;

begin:

    cout << "\n\t\t Options available : " << endl;
    cout << "\t\t\t\t\t1. Apply for leave.";
    cout << "\n\t\t\t\t\t2. Enquire User Info.";
    cout << "\n\t\t\t\t\t3. Display All User Info.";
    cout << "\n\t\t\t\t\t4. EXIT" << endl;
    cout << "\t\t\t Enter your choice : ";

    int choice;
    cin >> choice;

    // switch case to switch over actions.

    switch (choice)
    {
    case 1:
        apply_leave();
        break;

    case 2:
        enquire_user();
        break;

    case 3:
        display_all_user();
        break;

    case 4:
        goto end;
    }
    goto begin;

end:

    cout << "\n\t\t\t\t Program exited successfully." << endl;

    return 0;

    getch();
}
