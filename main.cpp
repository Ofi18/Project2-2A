

#include <iostream>
#include <queue>
#include <list>
#include "book.h"
#include "library.h"

int main() {
	Library library;

	library.add_book("Software Engineering");
	library.add_book("Biology");

	library.add_employee("Adam");
	library.add_employee("Sam");
	library.add_employee("Ann");

	library.circulate_book("Biology", Date(2015, 3, 1, DateFormat::US));
	library.circulate_book("Software Engineering", Date(2015, 4, 1, DateFormat::US));

	library.pass_on("Biology", Date(2016, 3, 5, DateFormat::US)); //tell the next employee to pass the book on March 5, 2015
	library.pass_on("Biology", Date(2016, 3, 7, DateFormat::US));
	library.pass_on("Biology", Date(2016, 3, 15, DateFormat::US)); //at this point in time, the system will archive the chemistry book

	library.pass_on("Software Engineering", Date(2015, 4, 5, DateFormat::US));
	library.pass_on("Software Engineering", Date(2015, 4, 10, DateFormat::US));
	library.pass_on("Software Engineering", Date(2015, 4, 15, DateFormat::US));
	system("pause");
	return 0;
	
}
