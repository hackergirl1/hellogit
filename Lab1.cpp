#include "Grades.h"
#include <iostream>
#include<vector>
using namespace std;

int linearSearch(auto data, auto key);//prototype

int linearSearch(auto data, auto key){
for (int location=0;location<data.size();location++)
{
        if (data[location].get_grade() == key)
        return location;
}
return -1; //not found
}

int main()
{
vector<Grades> v;
char search_key, choice;
int result;
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

cout<<"Enter a grade (e.g. A, B) to be searched :)"<<endl;
cout<<"To end input, enter the character '#'"<<endl;
cin>>search_key;
while(search_key != '#')
    {
        result = linearSearch(v, search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key;
    }
cout<<"Before you go, would you like to print the grades vector? y/n ";
cin>>choice;
if (choice =='y'){ 
for(int i=0; i<v.size();i++){
cout<<v[i].get_grade()<<""
    <<v[i].get_mark()<<endl;
}
}
else{
cout<<endl<<"Have a nice day!!! ;)"<<endl;
}
return 0;
}
