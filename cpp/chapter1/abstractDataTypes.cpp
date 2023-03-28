#include<iostream>
#include <string>

using namespace std;

class student {
public:
	int id;
	string name;
    double score;
	// A constructor is called here
	student(int i, string n, double s)
	{
		// It automatically assigns the
		// value to the id, name and score.
		id = i;
		name = n;
		score = s;
		
	}
};

struct employee {
    int id;
    string name;
    int age;
    double salary;
};

int main(){
//in this program, we are going to present the diferentiation between data structures, data type and design patterns.

    //premitive data types.
    int n=9;
    char ch='R';
    double d = 2.5;

    cout<<"the value of n = "<<n<<endl;

    //abstract data type
    student std1(101, "ali", 66.4);
    student std2(102, "abdul", 98.5);
    student std3(103, "dahir", 44);

    cout<<"\n\nThis is an abstract data type using classes and objects."<<endl;
    cout<<"List of the students"<<endl;
    cout<<std1.id<<" "<<std1.name<<" "<<std1.score<<endl;
    cout<<std2.id<<" "<<std2.name<<" "<<std2.score<<endl;
    cout<<std3.id<<" "<<std3.name<<" "<<std3.score<<endl;
    
    //another version of abstract data type is struct.
    employee emp1, emp2;
    emp1.id = 201;
    emp1.name = "sicid";
    emp1.age = 24;
    emp1.salary = 1200;

    emp1.id = 202;
    emp1.name = "leylo";
    emp1.age = 26;
    emp1.salary = 1400;

    cout<<"\n\nthis is an example of abstract data type using struct"<<endl;
    cout<<emp1.id<<" "<<emp1.name<<" "<<emp1.age<<" "<<emp1.salary<<endl;
    cout<<emp2.id<<" "<<emp2.name<<" "<<emp2.age<<" "<<emp2.salary<<endl;
    return 0;
}