#pragma once
#include <iostream>
#include <string>

using namespace std;

struct ToDoItem
{
	int id;
	string name;
	string description;
	string date;
	int budget;
};

struct To_Do_List
{
	int id;
	string name;
	ToDoItem* toDoItems;
};

To_Do_List addToDoList(int, string);

To_Do_List changeToDoList(To_Do_List);

To_Do_List DelToDoItem(To_Do_List, int);

To_Do_List cleanToDoList(To_Do_List);
