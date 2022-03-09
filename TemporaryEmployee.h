#include <iostream>
#include "Employee.h"
using namespace std;

// Array implementation olacak - order by employee number - unique access by employee number


class TemporaryEmployee: public Employee{

public:
    TemporaryEmployee(int employeeNumber, int employeeType, int salaryCoefficient, int lenServiceOtherInst, const string &name,
                      const string &surname, const string &title, const string &dateofBirt, const string &dateofStart);
};

