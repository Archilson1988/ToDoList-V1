#include "Header.h"

int main()
{
	int id_list, size_list, choise = 5, del_task;
	int* ptr_size_list = &size_list;
	string name_list;
	To_Do_List userList;

	while (choise != 0)
	{
		cout << "\nEnter your choice (1 - add, 2 - del, 3 - change, 4 - clean, 0 - exit): ";
		cin >> choise;

		if (choise == 1)
		{
			cout << "Enter id your list: ";
			cin >> id_list;
			cout << "Enter name your list: ";
			cin >> name_list;
			cout << "Enter size your list: ";
			cin >> size_list;


			userList = addToDoList(id_list, name_list, ptr_size_list);
			printTo_Do_List(userList, ptr_size_list);
		}

		else if (choise == 2)
		{
			cout << "\nEnter id item for delete: ";
			cin >> del_task;

			userList = delToDoItem(userList, del_task, ptr_size_list);
			printTo_Do_List(userList, ptr_size_list);
		}

		else if (choise == 3)
		{
			userList = changeToDoList(userList);
			printTo_Do_List(userList, ptr_size_list);
		}

		else if (choise == 4)
		{
			cleanToDoList(userList);
			*ptr_size_list = 0;
			printTo_Do_List(userList, ptr_size_list);
		}
		else if (choise == 0)
		{
			delete[] userList.toDoItems;
			return 0;
		}
		else
		{
			cout << "Try again." << endl;
		}
	}

	delete[] userList.toDoItems;
	return 0;
}

/*Практическая работа

1. Добавить

2. Удалить

3. Изменить

4. Очистить весь список дел

Структура TodoItem : id, name, description, due_date, что - то еще...

Структура TodoList : id, name, todoItems[]

GIT:

Создать ветку develop

Для каждой отдельной функции реализовать отдельную ветку features / номер - задачи - название - задачи
после имплементации в ветках - merge в develop веток

Решить возможные merge конфликты

Локальные feature ветки удалить, в origin(github) эти ветки оставить

Слить все в master(develop оставить локально и удаленно) */
