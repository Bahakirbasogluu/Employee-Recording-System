# Employee Recording System

The class design for an employee record system in C++, written as an undergraduate programming assignment. Permanent and temporary employees share one base class, and the repository also holds a circular array queue and a doubly linked list.

## Classes

- `Employee`: base class with employee number, type, salary coefficient, length of service in other institutions, name, surname, title, date of birth and date of start.
- `PermanentEmployee` and `TemporaryEmployee`: the two kinds of employee, both derived from `Employee`. The headers note the intended storage: a doubly linked list ordered by appointment date for permanent employees, an array ordered by employee number for temporary ones.
- `CircularArrayLinkedList`: a circular queue of integers over a fixed-size array, with `push`, `deletion` and `show`.
- `DoubleDynamicLinkedList.h`: a doubly linked list node with functions to insert at the head or tail, delete by position, measure the length, rotate the list and merge two sorted lists.

## Menu

`main.cpp` lists the twelve operations of the system in a comment: appointing a new or a transferred employee, updating title and salary coefficient, deleting an employee, and listing employees by number, appointment date, birth date or title.

The `main` function reads one number and creates a `PermanentEmployee` for 1 or a `TemporaryEmployee` for 0.
