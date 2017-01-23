#include "Grades.h"
#include <iostream>
#include<vector>
using namespace std;

int main(){
vector<Grades> v;
Grades obj;
obj.set_grade('A');
obj.set_mark(85);
v.push_back(obj);
obj.set_grade('B');
obj.set_mark(70);
v.push_back(obj);
obj.set_grade('C');
obj.set_mark(60);
v.push_back(obj);
obj.set_grade('D');
obj.set_mark(50);
v.push_back(obj);

for(int i=0; i<v.size();i++){
cout<<v[i].get_grade()<<""
    <<v[i].get_mark()<<endl;
}
return 0;
}
