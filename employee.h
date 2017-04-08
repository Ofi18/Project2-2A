

#ifndef employee_h
#define employee_h

#include <stdio.h>
#include <string>
#include "Date.h"

using namespace std;

class Employee {
private:
	string name;
	int waitTime;
	int retainTime;
public:
	Employee();
	Employee(string newName);
	const Employee& operator = (const Employee& rhs);

	void setName(string newName);
	void wait(int wait);
	void retain(int retain);

	string getName();
	int getWait();
	int getRetain();

	friend bool operator<(const Employee& lhs, const Employee& rhs);
	friend bool operator>(const Employee& lhs, const Employee& rhs); // might be unnecessary
};

#endif /* employee_hpp */
