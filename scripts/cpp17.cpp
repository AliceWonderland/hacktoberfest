#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

int main();

void mySleep(clock_t m_sec) {
    clock_t start_time = clock();
    clock_t end_time = m_sec * 1000 + start_time;
    while(clock() <= end_time);
}

void waiting_for_hacktober(string c_mon) {
    for(auto c : c_mon) {
        mySleep(500);
        cout << c << " " << flush;
    }
    for(auto c : "...") {
        mySleep(800);
        cout << c << " " << flush;
    }
    cout << endl;
    main();
}

void intiate_hacktober(string c_mon) {
    if(c_mon != "October") {
        waiting_for_hacktober(c_mon);
        return;
    }
    string wait_over = "Hail HacktoberFest";
    string space(wait_over.length(), ' ');
    for(auto c : wait_over) {
        space.pop_back();
        for(auto s : space)
            cout << s << "  " << flush;
        for(auto c : wait_over) {
            cout << c << "  " << flush;
            mySleep(20);
        }
        cout << endl;
    }
    for(auto c : wait_over) {
        wait_over = wait_over.substr(1);
        for(auto c : wait_over) {
            cout << c << "  " << flush;
            mySleep(20);
        }
        cout << endl;
    }
}

int main() {
    vector<string> list_of_mon = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    time_t now = time(0);   // Number of sec since January 1,1970 based on current system
    tm *ltm = localtime(&now);
                            // Year: 1900 + ltm->tm_year
                            // Month: 1 + ltm->tm_mon
                            // Day: ltm->tm_mday
                            // Hour: 1 + ltm->tm_hour
                            // Minute: 1 + ltm->tm_min
                            // Second: 1 + ltm->tm_sec
    int c_year = 1900 + ltm->tm_year;
    string c_mon = list_of_mon[ltm->tm_mon];
    intiate_hacktober(c_mon);
    return 0;
}
