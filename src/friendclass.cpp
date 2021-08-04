//============================================================================
// Name        : friendclass.cpp
// Author      : akshay singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class A{
	int age;
	int sal;
public:
	void set_data(int a,int b){
		age=a;
		sal=b;
		cout<<"sal"<<sal<<endl<<"age"<<age<<endl;
	}
	friend class B;
};

class B{
public:
	void get_data(A &t){
		cout<<t.sal<<endl<<t.age<<endl;
		t.set_data(30,3000);
	}

	friend void test_again();

};
 void test_again(){
	 cout<<"akshay singh"<<endl;
 }


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	A a;
	B b;
	a.set_data(10,2000);
	b.get_data(a);
	test_again();


}
