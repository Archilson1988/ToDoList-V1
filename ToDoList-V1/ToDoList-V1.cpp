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

/*������������ ������

1. ��������

2. �������

3. ��������

4. �������� ���� ������ ���

��������� TodoItem : id, name, description, due_date, ��� - �� ���...

��������� TodoList : id, name, todoItems[]

GIT:

������� ����� develop

��� ������ ��������� ������� ����������� ��������� ����� features / ����� - ������ - �������� - ������
����� ������������� � ������ - merge � develop �����

������ ��������� merge ���������

��������� feature ����� �������, � origin(github) ��� ����� ��������

����� ��� � master(develop �������� �������� � ��������) */
