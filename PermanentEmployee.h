#include <iostream>
#include "Employee.h"
using namespace std;

// Double-linked list -- order by date of appointment -- unique acces by employee number

class PermanentEmployee: public Employee{

public:
    PermanentEmployee(int employeeNumber, int employeeType, int salaryCoefficient, int lenServiceOtherInst, const string &name,
                      const string &surname, const string &title, const string &dateofBirt, const string &dateofStart);
};
