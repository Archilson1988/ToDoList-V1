#include "Header.h"

To_Do_List addToDoList(int id, string name, int* size)
{
	int counter = 0;
	int choise = 1;
	To_Do_List userToDoList;

	userToDoList.id = id;
	userToDoList.name = name;
	userToDoList.toDoItems = new ToDoItem[*size];

	while (choise != 0)
	{
		userToDoList.toDoItems[counter].id = counter + 1;

		cout << "Add name of item: ";
		cin >> userToDoList.toDoItems[counter].name;

		cout << "Add description of item: ";
		cin >> userToDoList.toDoItems[counter].description;

		cout << "Add date of item: ";
		cin >> userToDoList.toDoItems[counter].date;

		cout << "Add budget of item: ";
		cin >> userToDoList.toDoItems[counter].budget;

		counter++;

		cout << "Add new item(1) or comlete(0) ?" << endl;
		cin >> choise;
	}

	return userToDoList;
}



To_Do_List changeToDoList(To_Do_List userToDoList)
{
	int choise = 0;
	cout << "Enter id item for change or enter '0' to comlete." << endl;
	cin >> choise;

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



To_Do_List delToDoItem(To_Do_List userToDoList, int number, int* size)
{
	To_Do_List newUserToDoList;

	newUserToDoList.id = userToDoList.id;
	newUserToDoList.name = userToDoList.name;
	newUserToDoList.toDoItems = new ToDoItem[(*size) - 1];

	for (int i = 0; i < *size; i++)
	{

		if (userToDoList.toDoItems[i].id < number - 1)
		{
			newUserToDoList.toDoItems[i] = userToDoList.toDoItems[i];
		}
		else if (userToDoList.toDoItems[i].id > number - 1)
		{
			newUserToDoList.toDoItems[i - 1] = userToDoList.toDoItems[i];
			newUserToDoList.toDoItems[i - 1].id--;
		}
	}

	(*size)--;
	delete[] userToDoList.toDoItems;

	return newUserToDoList;
}



void cleanToDoList(To_Do_List userTo_Do_List)
{
	delete[] userTo_Do_List.toDoItems;
}



void printTo_Do_List(To_Do_List userToDoList, int *size)
{
	cout << "\nID: " << userToDoList.id << "\tName: " << userToDoList.name << endl;


	if (*size == 0)
	{
		cout << "No tasks" << endl << endl;
	}

	else
	{
		for (int i = 0; i < *size; i++)
		{

			cout << "\nID: " << userToDoList.toDoItems[i].id << "\nName: " <<
				userToDoList.toDoItems[i].name << "\nDescription: " <<
				userToDoList.toDoItems[i].description << "\nDate: " <<
				userToDoList.toDoItems[i].date << "\nBudget: " <<
				userToDoList.toDoItems[i].budget << endl << endl;
		}
	}
}