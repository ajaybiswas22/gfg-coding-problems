#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
#include <string>

class Employee {
public:
std::string *name;
const unsigned int employeeNum;
unsigned int lineManagerEmployeeNum;

Employee& operator =( Employee&& other) {
if (&other == this) return *this; 
name = std::move(other.name); 
employeeNum = std::move(other.employeeNum); 
lineManagerEmployeeNum = std::move(other. lineManagerEmployeeNum);
return *this;
}


};
