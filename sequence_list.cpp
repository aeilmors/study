/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
#include <cstdlib>
//#include <cstring>
//#include <vector>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <new>
//#include <type_info>

#define LIST_INIT_SIZE 50
#define LIST_INCREAMENT 10

using namespace::std;
using ElemType = int;

typedef struct SqList {
	ElemType *data;
	unsigned int list_size;
	unsigned int length;
}SqList, *pSq;

bool compare(const ElemType &e1, const ElemType &e2)
{
	if (e1 == e2)
		return true;
	else 
		return false;
}

bool InitList(SqList &L)
{
	if (L.data = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType))) {
		L.list_size = LIST_INIT_SIZE;
		L.length = 0;
		return true;
	}
	else {
		exit(-1);
		return false;
	}
}

unsigned int ListLength(const SqList &L)
{
	return L.length;
}

void DestroyList(SqList &L)
{
	if (L.data) {
		free(L.data);
		L.length = 0;
		L.list_size = 0;
	}
}

void ClearList(SqList &L)
{
	L.length = 0;
}

bool ListEmpty(const SqList &L)
{
	if (L.length) {
		return false;
	}
	else {
		return true;
	}
}

bool GetElem(const SqList &L, int i, ElemType &e)
{
	if (i < 1 || i > L.length) {
		return false;
	} else {
		e = L.data[i - 1];
		return true;
	}
}

bool PriorElem(const SqList &L, ElemType cur_e, ElemType &prior_e)
{
	for (int i = 1; i < L.length; ++i) {
		if (L.data[i] == cur_e) {
			prior_e = L.data[i - 1];
			return true;
		}
	}

	return false;
}

bool NextElem(const SqList &L, ElemType cur_e, ElemType &next_e)
{
	for (int i = 0; i < L.length - 1; ++i) {
		if (L.data[i] == cur_e) {
			next_e = L.data[i + 1];
			return true;
		}
	}

	return false;
}

bool ListInsert(SqList &L, int i, ElemType e)
{
	if (i < 1 || i > L.length + 1) {
		return false;
	} else {
		if (L.length == L.list_size) {
			L.data = (ElemType *)realloc(L.data, (L.list_size + LIST_INCREAMENT) * sizeof(ElemType));
			L.list_size += LIST_INCREAMENT;
		}
		for (int index = L.length - 1; index >= i - 1; ++index) {
			L.data[index] = L.data[index - 1];
		}
		L.data[i -1] = e;
		++L.length;

		return true;
	}
}

bool ListDelete(SqList &L, int i, ElemType &e)
{
	if (i < 1 || i > L.length) {
		return false;
	} else {
		e = L.data[i - 1];
		for (int index = i; index < L.length; ++index) {
			L.data[index - 1] = L.data[index];
			--L.length;
		}

		return true;
	}
}

bool ListTraverse(const SqList &L)
{
	if (!L.length) {
		return false;
	}
	for (int index = 0; index != L.length; ++index) {
		cout << L.data[index] << ' ';
	}
	cout << endl;

	return true;
}

int LocateElem(const SqList &L, ElemType e, bool (*compare)(const ElemType &e1, const ElemType &e2))
{
	if (!L.length) {
		return 0;
	} else {
		for (int index = 0; index != L.length; ++index) {
			if ((*compare)(e, L.data[index])) {
				return index + 1;
			}
		}

		return 0;
	}
}


void Menu()
{
	cout << "*****************************************************" << endl;
	cout << "Enter your choice on Sequence List:" << endl;
	cout << "1.Initialize                 2.Clear" << endl;
	cout << "3.Insert                     4.Destroy" << endl;
	cout << "5.GetElem                    6.IsEmpty" << endl;
	cout << "7.Prior                      8.Length" << endl;
	cout << "9.Next                       10.Delete" << endl;
	cout << "11.Traverse                  12.Inversion" << endl;
	cout << "13.DeleteMin                 0.Quit" << endl;
	cout << "*****************************************************" << endl;
}
bool DeleteMin(SqList &L, ElemType &e);
bool Inversion(SqList &L);

int main()
{
	int choice;
	ElemType e, ee;
	int param;
	SqList L;
	L.list_size = 0;

	Menu();
	while (cin >> choice && choice > 0 && choice < 14) {
		switch(choice) {
			case 1:
				InitList(L);
				cout << "Initialize successfully" << endl;
				break;
			case 2:
				if (L.list_size) {
					ClearList(L);
					cout << "Clear successfully" << endl;
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 3:
				if (L.list_size) {
					cout << "Enter the place you want to insert a data:" << endl;
					cin >> param;
					cout << "Enter the data you want to insert:" << endl;
					cin >> e;
					if (!ListInsert(L, param, e)) {
						cout << "Wrong place" << endl;
					} else {
						cout << "Insert successfully!" << endl;
					}
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 4:
				if (L.list_size) {
					DestroyList(L);
					cout << "Destroy successfully" << endl;
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 5:
				if (L.list_size) {
					cout << "Enter the place of the data:" << endl;
					cin >> param;
					if (GetElem(L, param, e)) {
						cout << "The place " << param << " data is " << e << endl;
					} else {
						cout << "Wrong Place" << endl;
					}
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 6:
				if (L.list_size) {
					if (ListEmpty(L)) {
						cout << "Sequence List is empty" << endl;
					} else {
						cout << "Sequence List is not empty" << endl;
					}
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 7:
				if (L.list_size) {
					cout << "Enter a data that you want to find its prior" << endl;
					cin >> e;
					if (PriorElem(L, e, ee)) {
						cout << "The prior of " << e << " is " << ee <<endl;
					} else {
						cout << "There is no prior of " << e << endl;
					}
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 8:
				if (L.list_size) {
					cout << "The length of Sequence List is " << ListLength(L) <<endl;
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 9:
				if (L.list_size) {
					cout << "Enter a data that you want to find its next" << endl;
					cin >> e;
					if (NextElem(L, e, ee)) {
						cout << "The next of " << e << " is " << ee <<endl;
					} else {
						cout << "There is no next of " << e << endl;
					}
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 10:
				if (L.list_size) {
					cout << "Enter the place that you want to delete its data" << endl;
					cin >> param;
					if (ListDelete(L, param, e)) {
						cout << "The data " << e << " has been deleted" << endl;
					} else {
						cout << "Wrong place" << endl;
					}
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 11:
				if (L.list_size) {
					if (!ListTraverse(L)) {
						cout << "There is no data" << endl;
					}
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			case 12:
				if (L.list_size) {
					if (Inversion(L)) {
						cout << "Done" << endl;
					} else {
						cout << "There is no data here" << endl;
					}
				} else {
					cout << "List does not exist" << endl;
				}				
				break;
			case 13:
				if (L.list_size) {
					if (DeleteMin(L, e)) {
						cout << "The minimize element " << e << "has been deleted" << endl;
					} else {
						cout << "There is no data here" << endl;
					}
				} else {
					cout << "List does not exist" << endl;
				}
				break;
			// case 2:
			// case 2:
			// case 2:
			// case 2:
			// case 2:
			default :
				break;
		}
		cout << "Do you want to continue? Enter y or n" << endl;
		char yn;
		cin >> yn;
		system("clear");
		if (yn == 'y') {
			Menu();
		} else {
			break;
		}
	}

	return 0;
}

bool DeleteMin(SqList &L, int &e)
{
	if (L.length == 0) {
		exit(-1);
		return false;
	}
	e = L.data[0];
	int index;
	index  = 0;
	for (int i = 1; i < L.length; ++i) {
		if (e > L.data[i]) {
			e = L.data[i];
			index = i;
		}
	}
	L.data[index] = L.data[L.length - 1];
	return true;
}

bool Inversion(SqList &L)
{
	if (L.length == 0)
		return false;

	// int temp;
	for (int i = 0; i != L.length / 2 + L.length % 2; ++i) {
		// temp = L.data[L.length - i - 1];
		// L.data[L.length - i - 1] = L.data[i];
		// L.data[i] = temp;
		L.data[L.length - i - 1] += L.data[i];
		L.data[i] = L.data[L.length - i -1] - L.data[i];
		L.data[L.length - i - 1] -= L.data[i];
	}

	return true;
}