#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
//#include <cmath>
#include <cstring>
#include <cctype>
#include <Assert.h>
using namespace std;
const int N = 200;
// структура оценок по 3м предметам: 1)информатика, 2)матанализ, 3)английский
struct marks {
	float infa;
	float matan;
	float english;
};
// структура студентов из имени, группы и структуры оценок
struct Student {
	char* name;
	marks m;
};
// Node - узел
template<typename T>
struct ListNode {
	T value;
	ListNode<T>* next;
};
// value - значение
template<typename T>
value struct List {
	ListNode<T>* head;
	int len;
};
//// функция для ввода информации о студенте
//Student enter() {
//	Student p;
//	cin.get();
//	cout << "Введите имя студента:                      ";
//	cin.getline(p.name, N);
//	cout << "Введите оценку по Информатике:             ";
//	cin >> p.m.infa;
//	cout << "Введите оценку по Математическому анализу: ";
//	cin >> p.m.matan;
//	cout << "Введите оценку по Английскому языку:       ";
//	cin >> p.m.english;
//	cout << endl;
//	return p;
//}
// функция для создания элемента
template <typename T>
ListNode <T>* createnode(T el) {
	ListNode <T>* l = new ListNode<T>;
	l->value = el;
	l->next = nullptr;
	return l;
}
// функция для определения и самоисправления длины списка
template <typename T>
List <T> createlist() {
	List <T> lst;
	lst.head = nullptr;
	lst.len = 0;
	return lst;
}
// функция для освобождения памяти
template <typename T>
void deletenode(ListNode <T>* l) {
	delete l;
}
// функция для добавления элемента к концу списка
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
// функция для добавления элемента в список по номеру
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
// фнкция для удаления элемента из списка по номеру
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
// функция для удаления списка
template <typename T>
void deletelist(List<T>% lst) {
	while (lst.head != nullptr)
		removeat<Student>(lst, 0);
}
// функция для подсчета среднего балла
double avg(ListNode <Student>* p);
// функция для сортировки студента по среднему баллу
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
