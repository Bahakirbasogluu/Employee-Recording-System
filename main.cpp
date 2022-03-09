#include <iostream>
#include "Employee.cpp"
#include "Employee.h"
#include "TemporaryEmployee.h"
#include "PermanentEmployee.h"
using namespace std;

/*
____ Employee Recording System ____
Please select for the following Menu Operation:
1) Appointment of a new emplyoee
2) Appointment of a transferred employee
3) Updating the title and salary coefficient of an employee
4) Deletion of an employee
5) Listing the information of the employee
6) Listing employees ordered by employee number
7) Listing employees ordered by appointment date
8) Listing employees appointed after a certain date
9) Listing employees assigned in a given year
10) Listing employees born before a certain date
11) Listing employees born in a particular month
12) Listing the information of the last assigned employee with a given title

- Please type the employee number
- Type the employee type
- Type the Name
- Type surname
- Type title
- Type salary coefficient
- Type birth date
- Type appointment date
- Type length of service days
*/

int main() {
    int x;
    cin>>x;
    if(x == 1 ){
       PermanentEmployee *a = new PermanentEmployee(1, 2, 3, 4, "a", "b", "c", "s", "d");
    }
    if(x == 0 ){
       TemporaryEmployee *a = new TemporaryEmployee(1,2,3,4,"a","b","c","s","e");
    }

}
