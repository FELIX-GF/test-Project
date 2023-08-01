// Testing C++ Object Oriented Programming Language.
/*
class-> is a template or blue print for creating an object and memory is -
not allocated while creating class and class is logical entity. 
Object-> is an instance of class and memory is allocated while creating - 
an object and Object is physical entity.
There are three access specifers 
1.private-> can not be accessed outside the class.
2.public-> Accessable from  anywhere or outside the class.
3.protected-> can not be accessed outside the class, they can be accessed inherited class.
There are four properties of object oriented programming Langauge 
1.Encapsulation -> Sensitive data must be hidden from the user (use private )
2.Abstraction ->  user pure virtual functions 
3.Inheritance- inherit member functions and member data from super class.
4.Polymorphism -> This allows us to perform a single action in different ways
- Creating constructor, there are three rules while creating constructor.
1. Constructor has no return type.
2. Constructor has the same name as  class 
3. Constructor has to be public.
*/
#include<iostream>
#include<string>
using namespace std;
class Job
{
    virtual void askforQualification() = 0;  
   
};
class Employee:public Job
{
protected:      
string Name;
int Age;
float Salary;
// Method or Member functions 
public:
// Abstract class methods.
void askforQualification()
{
if(Age > 25)
cout<<" Congradualations "<<Name<<" you are qualified !!"<<endl;
else 
cout<<" We are really sorry "<<Name<<",  You are not qualified at this time!!"<<endl;

}
// creating Employee constructor.
Employee(string name,int age,float salary)
{
// initializations 
Name=name;
Age=age;
Salary=salary;   

}
void printEmployeeData()
{
 cout<<"NAME:"<<Name<<endl;
 cout<<"AGE:"<<Age<<endl;
 cout<<"SALARY:"<<Salary<<endl;

}
// implementing polymorphisim
  virtual void work()
{
 cout<<Name<<" is Teaching course,Advising students and Helping project...."<<endl;
}

};
// create Developer subcalss 
class Developer:public Employee
{
string favorite_Course;
// create developer constructor here.
public:
Developer(string name,int age,float salary,string f_title)
:Employee(name,age,salary)
{
// initialization 
favorite_Course=f_title;
}
// create emthods for Developer sub class.
void FixBug()
{
cout<<"Name:"<<Name<<", Fixed Bugs : "<<favorite_Course<<endl;
}
 void work()
{
 cout<<Name<<" is writing "<<favorite_Course<<" Code"<<endl;
 }
};
// create teacher sub class.
class Teacher:public Employee
{
string Subject;
// create Teacher constructor 
public:
Teacher(string name,int age,float salary,string subject)
:Employee(name,age,salary)
{
Subject=subject;
}
void prepareLesson()
{
 cout<<"Name: "<<Name<<" is prepareing   "<<Subject<<" lessons "<<endl;
}
  void work()
{
 cout<<Name<<" is teaching  "<<Subject<<endl;
}
};
int main()
{
/*
/The most common use of polymorphism is when a -
 parent class used to refer a child class object 
*/
// Create object 
 Employee emp("Felix",25,4000.67);
 //emp.printEmployeeData();
 Employee emp1("Henok",34,2000.90);
 //emp1.printEmployeeData();
 emp.askforQualification();
 emp1.askforQualification();

Developer d=Developer("Felix ",18,456.89," C++ ");
Teacher t=Teacher("Daniel ",44,200.56," Economics");
// referencing object using pointer and please read pointer.
Employee* e1=&d;
Employee* e2=&t;
e1->work();
e2->work();
// we can not create object of an abstract class.

  return 0;
}