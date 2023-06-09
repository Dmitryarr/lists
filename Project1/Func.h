#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
//#include <cmath>
#include <cstring>
#include <cctype>
#include <Assert.h>
using namespace std;
const int N = 200;
// ��������� ������ �� 3� ���������: 1)�����������, 2)���������, 3)����������
struct marks {
	float infa;
	float matan;
	float english;
};
// ��������� ��������� �� �����, ������ � ��������� ������
struct Student {
	char* name;
	marks m;
};
// Node - ����
template<typename T>
struct ListNode {
	T value;
	ListNode<T>* next;
};
// value - ��������
template<typename T>
value struct List {
	ListNode<T>* head;
	int len;
};
//// ������� ��� ����� ���������� � ��������
//Student enter() {
//	Student p;
//	cin.get();
//	cout << "������� ��� ��������:                      ";
//	cin.getline(p.name, N);
//	cout << "������� ������ �� �����������:             ";
//	cin >> p.m.infa;
//	cout << "������� ������ �� ��������������� �������: ";
//	cin >> p.m.matan;
//	cout << "������� ������ �� ����������� �����:       ";
//	cin >> p.m.english;
//	cout << endl;
//	return p;
//}
// ������� ��� �������� ��������
template <typename T>
ListNode <T>* createnode(T el) {
	ListNode <T>* l = new ListNode<T>;
	l->value = el;
	l->next = nullptr;
	return l;
}
// ������� ��� ����������� � ��������������� ����� ������
template <typename T>
List <T> createlist() {
	List <T> lst;
	lst.head = nullptr;
	lst.len = 0;
	return lst;
}
// ������� ��� ������������ ������
template <typename T>
void deletenode(ListNode <T>* l) {
	delete l;
}
// ������� ��� ���������� �������� � ����� ������
template <typename T>
void append(List <T>% lst, T el) {
	ListNode <T>* l = createnode(el);
	if (lst.head == nullptr)
		lst.head = l;
	else {
		ListNode <T>* p = lst.head;
		while (p->next != nullptr)
			p = p->next;
		p->next = l;
	}
	lst.len++;
}
// ������� ��� ���������� �������� � ������ �� ������
template <typename T>
void addat(List <T>% lst, T el, int i) {
	ListNode<T>* l = createnode(el);
	if (i < 0 || i > lst.len)
		return;
	ListNode <T>* d;
	if (i == 0) {
		d = lst.head;
		lst.head = l;
		lst.head->next = d;
	}
	else {
		ListNode <T>* p = lst.head;
		for (int j = 0; j < i - 1; j++)
			p = p->next;
		d = p->next;
		p->next = l;
		l->next = d;
	}
	lst.len++;
}
// ������ ��� �������� �������� �� ������ �� ������
template <typename T>
void removeat(List<T>% lst, int i) {
	if (i < 0 || i >= lst.len)
		return;
	ListNode <T>* d;
	if (i == 0) {
		d = lst.head;
		lst.head = lst.head->next;
	}
	else {
		ListNode <T>* p = lst.head;
		for (int j = 0; j < i - 1; j++)
			p = p->next;
		d = p->next;
		p->next = d->next;
	}
	deletenode(d);
	lst.len--;

}
// ������� ��� �������� ������
template <typename T>
void deletelist(List<T>% lst) {
	while (lst.head != nullptr)
		removeat<Student>(lst, 0);
}
// ������� ��� �������� �������� �����
double avg(ListNode <Student>* p);
// ������� ��� ���������� �������� �� �������� �����
template <typename T>
void sort(List <T>% lst) {
	ListNode <T>* p = lst.head;
	Student s;
	for (int i = lst.len - 1; i > 0; i--) {
		p = lst.head;
		for (int j = 0; j < i; j++) {
			if (avg(p) < avg(p->next)) {
				s = p->value;
				p->value = p->next->value;
				p->next->value = s;
			}
			p = p->next;
		}
	}
}
