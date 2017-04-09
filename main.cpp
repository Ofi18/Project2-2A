

#include <iostream>
#include <queue>
#include <list>
#include "book.h"
#include "library.h"
#include <omp.h>
int main() {
	Library library;
#pragma omp parallel
	{
		library.add_book("Software Engineering");
	}
#pragma omp parallel
	{
		library.add_book("Chemistry");
	}
#pragma omp parallel
	{
		library.add_employee("Adam");
	}
#pragma omp parallel
	{
		library.add_employee("Sam");
	}
#pragma omp parallel
	{
		library.add_employee("Ann");
	}
#pragma omp parallel
	{
		library.circulate_book("Chemistry", Date(2015, 3, 1, DateFormat::US));
	}
#pragma omp parallel
	{
		library.circulate_book("Software Engineering", Date(2015, 4, 1, DateFormat::US));
	}
#pragma omp parallel
	{
		library.pass_on("Chemistry", Date(2016, 3, 5, DateFormat::US)); //tell the next employee to pass the book on March 5, 2015
	}
#pragma omp parallel
	{library.pass_on("Chemistry", Date(2016, 3, 7, DateFormat::US));
	}
#pragma omp parallel
	{
		library.pass_on("Chemistry", Date(2016, 3, 15, DateFormat::US)); //at this point in time, the system will archive the chemistry book
	}
	library.pass_on("Software Engineering", Date(2015, 4, 5, DateFormat::US));
#pragma omp parallel
	{
		library.pass_on("Software Engineering", Date(2015, 4, 10, DateFormat::US));
	}
#pragma omp parallel
	{
		library.pass_on("Software Engineering", Date(2015, 4, 15, DateFormat::US));
	}return 0;
	
}

