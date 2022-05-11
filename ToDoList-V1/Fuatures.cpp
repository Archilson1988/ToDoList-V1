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