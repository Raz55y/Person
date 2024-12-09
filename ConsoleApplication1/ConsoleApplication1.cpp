#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

int main(){
	Person person1("A123", "Chen", "Jason", "M", "2024-11-25");

	Person* person2 = new Person();
	person2->setId("B321");
	person2->setLastName("Wang");
	person2->setFirstName("David");
	person2->setGender("M");
	person2->setBirthDate("2023-10-24");

	person1.display();
	cout << endl;
	person2->display();
}