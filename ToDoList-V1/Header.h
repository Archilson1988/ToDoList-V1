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

To_Do_List addToDoList(int, string, int*);

To_Do_List changeToDoList(To_Do_List);

To_Do_List delToDoItem(To_Do_List, int, int*);

void cleanToDoList(To_Do_List);

void printTo_Do_List(To_Do_List, int*);