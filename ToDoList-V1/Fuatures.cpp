#include "Header.h"

#include "Header.h"

To_Do_List addToDoList(int id, string name)
{
	int counter = 0;
	int choise = 1;
	To_Do_List userToDoList;

	userToDoList.id = id;
	userToDoList.name = name;
	userToDoList.toDoItems = new ToDoItem[];

	while (choise != 0)
	{
		ToDoItem userItem;

		userItem.id = counter + 1;

		cout << "Add name of item: ";
		cin >> userItem.name;

		cout << "Add description of item: ";
		cin >> userItem.description;

		cout << "Add date of item: ";
		cin >> userItem.date;

		cout << "Add budget of item: ";
		cin >> userItem.budget;

		userToDoList.toDoItems[counter] = userItem;

		counter++;

		cout << "Add new item(1) or comlete(0) ?" << endl;
		cin >> choise;
	}

	return userToDoList;
}