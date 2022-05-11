<<<<<<< HEAD
<<<<<<< HEAD
#include "Header.h"
=======
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
>>>>>>> features/1-add-function
=======
#include "Header.h"

To_Do_List DelToDoItem(To_Do_List userToDoList, int number)
{
	int counter = 1;
	while (counter == userToDoList.toDoItems[counter - 1].id)
	{
		counter++;
	}

	To_Do_List newUserToDoList;

	newUserToDoList.id = userToDoList.id;
	newUserToDoList.name = userToDoList.name;
	newUserToDoList.toDoItems = new ToDoItem[counter - 1];

	for (int i = 0; i < counter; i++)
	{

		if (userToDoList.id < number - 1)
		{
			ToDoItem userItem = userToDoList.toDoItems[i];

			newUserToDoList.toDoItems[i] = userItem;
		}

		if (userToDoList.id > number - 1)
		{
			ToDoItem userItem = userToDoList.toDoItems[i];

			userItem.id--;

			newUserToDoList.toDoItems[i - 1] = userItem;
		}
	}

	delete[] userToDoList.toDoItems;

	return newUserToDoList;
}
>>>>>>> origin/features/2-del-function
