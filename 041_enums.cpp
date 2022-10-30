//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

enum grades_t {
    A, B, C, D, F
};

enum weekdays_t {
    monday = 1, tuesday, wednesday, thursday, friday, saturday, sunday
};

enum class months_t : short {
    january = 1, february, march, april, may, june, july, august, september, october, november,
    december
};

int main() {
    grades_t myGrade;
    myGrade = B;
    if (myGrade == A || myGrade == B || myGrade == C || myGrade == D)
        cout << "You passed!\n";
    else
        cout << "You did not pass.\n";
    weekdays_t today;
    today = tuesday;
    cout << (int) today << endl; // 2
    months_t myMonth;
    myMonth = months_t::february;
    cout << sizeof(myMonth) << " bytes " << endl;
    return 0;
}