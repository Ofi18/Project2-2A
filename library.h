

#ifndef library_h
#define library_h

#include <stdio.h>
#include <string>
#include <queue>
#include <list>
#include "Date.h"
#include "book.h"

class Library {
private:
	list<Book> toBeCirculated;
	list<Book> archived;
	list<Employee*> employeeList;
	list <Book> tmepBook;// list of pointers to employees

public:
	Library();
	~Library();

	void add_book(string newBook);
	void add_employee(string newPerson);
	void circulate_book(string bookToMove, Date dayOfMove);
	void pass_on(string bookToMove, Date date);
};

#endif
