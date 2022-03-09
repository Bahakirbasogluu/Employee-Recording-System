#include "TemporaryEmployee.h"

TemporaryEmployee::TemporaryEmployee(int employeeNumber, int employeeType, int salaryCoefficient,
                                     int lenServiceOtherInst, const string &name, const string &surname,
                                     const string &title, const string &dateofBirt, const string &dateofStart)
        : Employee(employeeNumber, employeeType, salaryCoefficient, lenServiceOtherInst, name, surname, title,
                   dateofBirt, dateofStart) {}
