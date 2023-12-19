#pragma once
#include "Brain.h"
#include <iostream>
#include <fstream>
#include <string>

class Human
{
private:
	int age;
	double height;
	double weight;
	std::string name;
	std::string surname;
public:
	Brain brain;
	Human() {
		age = 0;
		height = 0;
		weight = 0;
		name = " ";
		surname = " ";
		brain = Brain(30,20);
	}
	Human(std::string name, std::string surname, int age, double height, double weight) {
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->height = height;
		this->weight = weight;
		brain = Brain(90, 110);
	}
	void display();
	Human operator +(const Human& other);
	Human& operator ++();//���������� ��������� 
	Human& operator ++(int val); //����������� 
	friend void ageing(Human& age);
	void setAge(int age);
	void setHeight(double height);
	void setWeight(double weight);
	void remember_word();
	void recall_word();
	void examination();
};

