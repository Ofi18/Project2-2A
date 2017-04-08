

#ifndef Queue_h
#define Queue_h

#include <stdio.h>
#include <list>
#include "employee.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class pQueue {
private:
	vector<Employee*> WorkQueue;
public:
	pQueue();
	void addEmployee(Employee* temp);
	Employee* pop_max();
	Employee* top();
	bool empty();
};

#endif /* pQueue_hpp */
