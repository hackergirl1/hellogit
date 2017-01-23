#include "Grades.h"
#include<iostream>
void Grades::set_grade(char a){
	grade = 'a';
}
void Grades::set_mark(int b){
	mark = b;
}
char Grades::get_grade(){
	return grade;
}
int Grades::get_mark(){
	return mark;
}

Grades::Grades(){
grade = 'a';
mark = 0;
}
