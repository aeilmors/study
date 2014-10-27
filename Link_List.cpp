/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <string>
//#include <vector>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <new>
//#include <type_info>
#define WARNING "List does not exist"

using namespace::std;

using Elemtype = int;

//with header node
typedef struct LNode {
	Elemtype data;
	struct LNode * next;
}LNode, *LinkList;


bool Compare(const Elemtype &e1, const Elemtype &e2);
void Visit(const LNode &node);
void Menu();

void InitList(LinkList &L);
void DestroyList(LinkList &L);
void ClearList(LinkList &L);
bool ListEmpty(const LinkList &L);
int ListLength(const LinkList &L);
bool GetElem(const LinkList &L, int i, Elemtype &e);
int LocateElem(const LinkList &L, Elemtype e);
bool PriorElem(const LinkList &L, Elemtype cur_e, Elemtype &pre_e);
bool NextElem(const LinkList &L, Elemtype cur_e, Elemtype &next_e);
bool ListInsert(LinkList &L, int i, Elemtype e);
bool ListDelete(LinkList &L, int i, Elemtype &e);
void ListTraverse(const LinkList &L);

void Sort(LinkList &L);
void HeadInsert(LinkList &L);
void TailInsert(LinkList &L);
void MergeDecrease(LinkList &L1, LinkList &L2);

int main()
{
	LinkList L = 0, LL = 0;
	Elemtype e, ee;
	int choice;
	int param;

	Menu();
	while(cin >> choice && choice > 0 && choice < 15) {
		switch (choice) {
			case 1:
				if (L) {
					cout << "List already exists" << endl;
				} else {
					InitList(L);
					cout << "Done" << endl;
				}
				break;
			case 2:
				if (!L) {
					cout << WARNING << endl;
				} else {
					DestroyList(L);
					cout << "Done" << endl;
				}
				break;
			case 3:
				if (!L) {
					cout << WARNING << endl;
				} else {
					ClearList(L);
					cout << "Done" << endl;
				}
				break;
			case 4:
				if (!L) {
					cout << WARNING << endl;
				} else {
					if (ListEmpty(L)) {
						cout << "List is empty" << endl;
					} else {
						cout << "List is not empty" << endl;
					}
				}
				break;
			case 5:
				if (!L) {
					cout << WARNING << endl;
				} else {
					cout << "The length of list is " << ListLength(L) << endl;
				}
				break;
			case 6:
				if (!L) {
					cout << WARNING << endl;
				} else {
					cout << "Enter the location:" << endl;
					cin >> param;
					if (GetElem(L, param, e)) {
						cout << "The Element of location " << param << " is " << e <<endl;
					}
				}
				break;
			case 7:
				if (!L) {
					cout << WARNING << endl;
				} else {
					cout << "Enter the element" << endl;
					cin >> e;
					if (param = LocateElem(L, e)) {
						cout << "The location of " << e << " is " << param << endl;
					}
				}
				break;
			case 8:
				if (!L) {
					cout << WARNING << endl;
				} else {
					cout << "Enter the element" << endl;
					cin >> e;
					if (PriorElem(L, e, ee)) {
						cout << "The prior of " << e << " is " << ee << endl;;
					}
				}
				break;
			case 9:
				if (!L) {
					cout << WARNING << endl;
				} else {
					cout << "Enter the element" << endl;
					cin >> e;
					if (NextElem(L, e, ee)) {
						cout << "The next of " << e << " is " << ee << endl;
					}
				}
				break;
			case 10:
				if (!L) {
					cout << WARNING << endl;
				} else {
					cout << "Enter the location you want to insert a element" << endl;
					cin >> param;
					cout << "Enter the element" << endl;
					cin >> e;
					if (ListInsert(L, param, e)) {
						cout << "Done" << endl;
					}
				}
				break;
			case 11:
				if (!L) {
					cout << WARNING << endl;
				} else {
					cout << "Enter the location of a element you want to delete" << endl;
					cin >> param;
					if (ListDelete(L, param, e)) {
						cout << "The element " << e << " has been deleted" << endl;
					}
				}
				break;
			case 12:
				if (!L) {
					cout << WARNING << endl;
				} else {
					ListTraverse(L);
				}
				break;
			case 13:
				if (!L) {
					cout << WARNING << endl;
				} else {
					Sort(L);
					cout << "Done" << endl;
				}
				break;
			case 14:
				if (!L) {
					cout << WARNING << endl;
				} else {
					cout << "Create another LinkList" << endl;
					InitList(LL);
					HeadInsert(LL);
					Sort(LL);
					ListTraverse(LL);
					MergeDecrease(L, LL);
					cout << "Done" << endl;
				}
				break;
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

bool Compare(const Elemtype &e1, const Elemtype &e2)
{
	return e1 == e2 ? true : false;
}

void Visit(const LNode &node)
{
	cout << node.data << endl;
}

void Menu()
{
	cout << "*****************************************************" << endl;
	cout << "Enter your choice on List:" << endl;
	cout << "1.Initialize                 2.Destroy" << endl;
	cout << "3.Clear                       4.IsListEmpty" << endl;
	cout << "5.ListLength              6.GetElem" << endl;
	cout << "7.LocateElem             8.PriorElem" << endl;
	cout << "9.NextElem               10.Insert" << endl;
	cout << "11.Delete                  12.ListTraverse" << endl;
	cout << "13.Sort                      14.MergeDecrease" << endl;
	// cout << "15.Sort                      16.DeleteFromSToTSorted" << endl;
	// cout << "17.DeleteFromSToT            18.DeleteRepeatedElemSorted" << endl;
	// cout << "19.Merge" << endl;
	cout << "0.Quit" << endl;
	cout << "*****************************************************" << endl;
}

void InitList(LinkList &L)
{
	L = (LinkList)malloc(sizeof(LNode));

	if (!L) {
		cout << "Initialize Failed" << endl;
		exit(-1);
	} else {
		L->data = 0;
		L->next = NULL;
	}
}

void DestroyList(LinkList &L)
{
	LinkList p = L, q = 0;
	while (p) {
		q = p;
		p = p->next;
		free(q);
	}
}

void ClearList(LinkList &L)
{
	LinkList p = L, q = 0;

	while (p->next) {
		q = p->next;
		p = q;
		free(q);
	}
	L->data = 0;
	L->next = NULL;
}

bool ListEmpty(const LinkList &L)
{
	// if (L->data) {
	// 	return false;
	// } else {
	// 	return true;
	// }

	if (L->next) {
		return false;
	} else {
		return true;
	}

	// if (L->data && L->next) {
	// 	return false;
	// } else if (L->data && !L->next) {
	// 	cout << "L->data = " << L->data << " and L->next is NULL" << endl;
	// 	exit(-1);
	// } else if (!L->data && L->next) {
	// 	cout << "L->data = " << L->data << " and L-next is not NULL" << endl;
	// 	exit(-1);
	// } else {
	// 	return true;
	// }
}

int ListLength(const LinkList &L)
{

	// return L->data;

	LinkList p = L->next;
	int count = 0;

	while (p) {
		++count;
		p = p->next;
	}

	return count;
}

bool GetElem(const LinkList &L, int i, Elemtype &e)
{
	// if (i < 1) {
	// 	cout << "Wrong parameter" << endl;
	// 	return false;
	// }

	LinkList p = L->next;
	int index = 1;
	
	while (p && index < i) {
		p = p->next;
		++index;
	}
	if (index != i || !p) {
		cout << "Wrong parameter" << endl;
		return false;
	} else {
		e = p->data;
		return true;
	}
}

int LocateElem(const LinkList &L, Elemtype e)
{
	LinkList p = L->next;
	int location = 1;

	while (p && !Compare(e, p->data)) {
		p = p->next;
		++location;
	}

	if (p) {
		return location;
	} else {
		cout << "Not found" << endl;
		return 0;
	}
}

bool PriorElem(const LinkList &L, Elemtype cur_e, Elemtype &pre_e)
{
	LinkList p = L;

	while (p->next && p->next->data != cur_e) {
		p = p->next;
	}
	if (p->next && p != L) {
		pre_e = p->data;
		return true;
	} else {
		cout << "Not found" << endl;
		return false;
	}
}
bool NextElem(const LinkList &L, Elemtype cur_e, Elemtype &next_e)
{
	LinkList p = L->next;

	while (p && p->data != cur_e) {
		p = p->next;
	}
	if (p) {
		next_e = p->data;
		return true;
	} else {
		cout << "Not found" << endl;
		return false;
	}
}

bool ListInsert(LinkList &L, int i, Elemtype e)
{
	// if (i < 1) {
	// 	cout << "Wrong parameter" << endl;
	// 	return false;
	// }

	LinkList p = L;
	int index = 1;
	
	while (index < i && p->next) {
		p = p->next;
		++index;
	}
	if (index != i) {
		cout << "Wrong parameter" << endl;
		return false;
	} else {
		LinkList p_node;
		p_node = (LinkList)malloc(sizeof(LNode));
		if (!p_node) {
			cout << "Cannot add node" << endl;
			exit(-1);
		}
		p_node->data = e;
		p_node->next = p->next;
		p->next = p_node;
		++L->data;
		return true;
	}
}

bool ListDelete(LinkList &L, int i, Elemtype &e)
{
	if (i < 1) {
		cout << "Wrong parameter" << endl;
		return false;
	}

	LinkList p = L;
	int index = 1;

	while (p && index < i) {
		p = p->next;
		++index;
	}
	if (index != i || !p->next) {
		cout << "Wrong parameter" << endl;
		return false;
	} else {
		LinkList to_free = p->next;
		e = p->data;
		p->next = p->next->next;
		free(to_free);
		--L->data;
		return true;
	}
}

void ListTraverse(const LinkList &L)
{
	LinkList p = L->next;

	while (p) {
		Visit(*p);
		p = p->next;
	}
}

void Sort(LinkList &L)
{
	LinkList p = L->next, q;
	Elemtype temp;

	while (p) {
		q = p->next;
		while (q) {
			if (p->data > q->data) {
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
			q = q->next;
		}
		p = p->next;
	}
}

void HeadInsert(LinkList &L)
{
	Elemtype e;
	LinkList p;
	cout << "Enter some data to Insert, end with 999" << endl;

	while (cin >> e && e != 999) {
		LinkList p_node;
		p = L;
		p_node = (LinkList)malloc(sizeof(LNode));

		p_node->data = e;
		p_node->next = p->next;
		p->next = p_node;
	}
}

void TailInsert(LinkList &L)
{
	Elemtype e;
	LinkList p = L;
	cout << "Enter some data to Insert, end with 999" << endl;

	while (cin >> e && e != 999) {
		LinkList p_node;
		p_node = (LinkList)malloc(sizeof(LNode));

		p_node->data = e;
		p_node->next = NULL;
		p->next = p_node;
		p = p->next;
	}
}

void MergeDecrease(LinkList &L1, LinkList &L2)
{
	LinkList p1, p2, temp1, temp2, ready = 0;
	p1 = L1->next;
	p2 = L2->next;

	while (p1 && p2) {
		temp1 = p1->next;
		temp2 = p2->next;
		if (p1->data < p2->data) {
			p1->next = ready;
			ready = p1;
			p1 = temp1;
		} else {
			p2->next = ready;
			ready = p2;
			p2 = temp2;
		}
	}
	LinkList rest;
	rest = p1 ? p1 : p2;
	while (rest) {
		temp1 = rest->next;
		rest->next = ready;
		ready = rest;
		rest = temp1;
	}
	L1->next = ready;
}