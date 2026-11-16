#include <iostream>

using namespace std;

class Employee {
private:
    string employeename;
    int employeeid;
    string department;
    int basicsalary;
    int yearsofservice;

public:
    void setEmployee(string name, int id, string dept, int salary, int years);
    void displayEmployee();
    int getSalary();
    int calculateSalaryWithBonus(int bonuspercentage);
};
void Employee::setEmployee(string name, int id, string dept, int salary, int years){
	employeename = name;
	employeeid = id;
	  department = dept;
    basicsalary = salary;
    yearsofservice = years;
}
void Employee::displayEmployee(){
	cout<<"Employee Name : "<<employeename<<endl;
}
int Employee::getSalary() {
    return basicsalary;
}
int Employee::calculateSalaryWithBonus(int bonuspercentage) {
    int bonus = (basicsalary * bonuspercentage) / 100;
    return basicsalary + bonus;
}
int main() {
    Employee emp1, emp2;
    emp1.setEmployee("Abdul Rehman", 201, "IT", 80000, 4);
    emp2.setEmployee("Ali", 202, "HR", 65000, 2);
    emp1.displayEmployee();
    emp2.displayEmployee();
    cout << "\nEmployee 1 Basic Salary: " << emp1.getSalary() << endl;
    cout << "Employee 2 Basic Salary: " << emp2.getSalary() << endl;
    cout << "\nEmployee 1 Salary with 15% bonus: " << emp1.calculateSalaryWithBonus(15) << endl;
    cout << "Employee 2 Salary with 10% bonus: " << emp2.calculateSalaryWithBonus(10) << endl;

    return 0;
}
