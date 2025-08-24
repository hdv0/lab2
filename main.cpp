//client for TimeEmployee
#include <iostream>
#include "inherit2.h"
#include "partTimeEmployee.h"
using namespace std;
int main()
{
	personType newPerson;

	/**< Creates new employee with the first name John, the last name Smith, a pay rate of
		 7.50 and 56 hours. */
	partTimeEmployee newEmployee("John", "Smith", 7.50, 56);
	partTimeEmployee employee;
	newEmployee.print();
	
	/**< Updates the attributes of an existing employee object. Assigns the employee object
		 with the first name Rachel, the last name Moore, a pay rate of 9.75 and 45 hours. */
	employee.setNameRateHours("Rachel", "Moore", 9.75, 45);
	employee.print();
	return 0;
}