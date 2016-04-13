#pragma once
#include "lab.h"
#include <cmath>
#include <algorithm>

class Salnikov: public lab
{
	/**
	* Метод Гаусса
	*/
	virtual void lab1();
	/**
	* Метод Гаусса с выбором главного элемента
	*/
	virtual void lab2();
	/**
	* Метод квадратного корня (метод Холецкого)
	*/
	virtual void lab3();
	/**
	* Метод прогонки
	*/
	virtual void lab4();
	/**
	* Метод Якоби
	*/
	virtual void lab5();
	/**
	* Метод Зейделя
	*/
	virtual void lab6();
	/**
	* Один из градиентных методов
	*/
	virtual void lab7();
};
