#include "Header.h"

To_Do_List changeToDoList(To_Do_List userToDoList)
{
	int choise = 0;
	cout << "Enter id item for change or enter '0' to comlete." << endl;

	while (choise != 0)
	{
		cout << "Change name of item: ";
		cin >> userToDoList.toDoItems[choise - 1].name;

		cout << "Change description of item: ";
		cin >> userToDoList.toDoItems[choise - 1].description;

		cout << "Change date of item: ";
		cin >> userToDoList.toDoItems[choise - 1].date;

		cout << "Change budget of item: ";
		cin >> userToDoList.toDoItems[choise - 1].budget;

		cout << "Enter id item for change or enter '0' to comlete." << endl;
		cin >> choise;
	}

	return userToDoList;
}