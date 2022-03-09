#include "Employee.h"

Employee::Employee(int employeeNumber, int employeeType, int salaryCoefficient, int lenServiceOtherInst,
                   const string &name, const string &surname, const string &title, const string &dateofBirt,
                   const string &dateofStart) : employeeNumber(employeeNumber), employeeType(employeeType),
                                                salaryCoefficient(salaryCoefficient),
                                                lenServiceOtherInst(lenServiceOtherInst), name(name), surname(surname),
                                                title(title), dateofBirt(dateofBirt), dateofStart(dateofStart)
                                                {}

int Employee::getEmployeeNumber() const {
    return employeeNumber;
}

void Employee::setEmployeeNumber(int employeeNumber) {
    Employee::employeeNumber = employeeNumber;
}

int Employee::getEmployeeType() const {
    return employeeType;
}

void Employee::setEmployeeType(int employeeType) {
    Employee::employeeType = employeeType;
}

int Employee::getSalaryCoefficient() const {
    return salaryCoefficient;
}

void Employee::setSalaryCoefficient(int salaryCoefficient) {
    Employee::salaryCoefficient = salaryCoefficient;
}

int Employee::getLenServiceOtherInst() const {
    return lenServiceOtherInst;
}

void Employee::setLenServiceOtherInst(int lenServiceOtherInst) {
    Employee::lenServiceOtherInst = lenServiceOtherInst;
}

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

const string &Employee::getSurname() const {
    return surname;
}

void Employee::setSurname(const string &surname) {
    Employee::surname = surname;
}

const string &Employee::getTitle() const {
    return title;
}

void Employee::setTitle(const string &title) {
    Employee::title = title;
}

const string &Employee::getDateofBirt() const {
    return dateofBirt;
}

void Employee::setDateofBirt(const string &dateofBirt) {
    Employee::dateofBirt = dateofBirt;
}

const string &Employee::getDateofStart() const {
    return dateofStart;
}

void Employee::setDateofStart(const string &dateofStart) {
    Employee::dateofStart = dateofStart;
}
