#include <iostream>
#ifndef Employee_HEADER
#define Employee_HEADER
using namespace std;

class Employee {

private:
    int const employeeNumber ;
    int const employeeType;
    int const salaryCoefficient;
    int const lenServiceOtherInst;
    string const name;
    string const surname;
    string const title;
    string const dateofBirt;
    string const dateofStart;

public:
    Employee(int employeeNumber, int employeeType, int salaryCoefficient, int lenServiceOtherInst, const string &name,
             const string &surname, const string &title, const string &dateofBirt, const string &dateofStart);

    int getEmployeeNumber() const;

    void setEmployeeNumber(int employeeNumber);

    int getEmployeeType() const;

    void setEmployeeType(int employeeType);

    int getSalaryCoefficient() const;

    void setSalaryCoefficient(int salaryCoefficient);

    int getLenServiceOtherInst() const;

    void setLenServiceOtherInst(int lenServiceOtherInst);

    const string &getName() const;

    void setName(const string &name);

    const string &getSurname() const;

    void setSurname(const string &surname);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getDateofBirt() const;

    void setDateofBirt(const string &dateofBirt);

    const string &getDateofStart() const;

    void setDateofStart(const string &dateofStart);

};

#endif