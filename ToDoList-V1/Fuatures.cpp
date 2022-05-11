#include "Header.h"

To_Do_List cleanToDoList(To_Do_List userTo_Do_List)
{
	delete[] userTo_Do_List.toDoItems;

	return userTo_Do_List;
}