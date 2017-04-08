#ifndef book_h
#define book_h

#include <stdio.h>
#include <string>
#include "Queue.h"
#include <list>
#include "Date.h"
#include "employee.h"

using namespace std;

class Book {
private:
	string name;
	Date startDate;
	Date endDate;
	bool archived;
	pQueue waiting;
	Date lastHeld;
public:
	Book();
	Book(string bookName);
	Book(string bookName, Date start);
	Book(const Book& other);

	string getname();
	Date getstartDate();
	Date getendDate();
	bool getarchived();
	Date getHeld();

	void setname(string newName);
	void setstartDate(Date newDate);
	void setendDate(Date newDate);
	void setarchived(bool newBool);
	void setHeld(Date date);

	void populate_queue(list<Employee*> empList);
	Employee* pop_max();
	Employee* top();
	bool isEmpty();
};

#endif /* book_hpp */
