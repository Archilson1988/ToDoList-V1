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
	ToDoItem toDoItems[];
};
