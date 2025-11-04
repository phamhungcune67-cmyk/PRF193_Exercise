#include <bits/stdc++.h>

using namespace std;

class Employee {
   private:
    int id;
    string firstName;
    string lastName;
    int salary;

   public:
    Employee(int id, string firstName, string lastName, int salary) {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    }
    string getFullName() {
        return this->firstName + " " + this->lastName;
    }
    void setId(int id) {
        this->id = id;
    }
    int getId() {
        return this->id;
    }
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }
    string getFirstName() {
        return this->firstName;
    }
    void setLastName(string lastName) {
        this->lastName = lastName;
    }
    string getLastName() {
        return this->lastName;
    }
    void setSalary(int salary) {
        this->salary = salary;
    }
    int getSalary() {
        return this->salary;
    }
};