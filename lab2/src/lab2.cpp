//============================================================================
// Name        : lab2a.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<sstream>
using namespace std;
class student{
	string usn;
	string name;
	string branch;
	int semester;

public:
	void readfromconsole() {
		cout<<"enter the usn"<<endl;
		cin>>usn;
		cin.clear();
		cin.ignore(255,'\n');
		cout<<"enter the name"<<endl;
		getline(cin,name);
		cout<<"enter the branch"<<endl;
		cin>>branch;
		cout<<"enter the semester"<<endl;
		cin>>semester;
	}
	void showstudent()
	{
		cout<<usn<<endl<<name<<endl<< branch<<endl<< semester<<endl;
	}
	void pack()
	{
		string buffer;
		string sem1;
		stringstream out;
		out<<semester;
		sem1=out.str();
		string temp;
		int j,len;
		temp=usn+'|'+name+'|'+branch+'|'+sem1;
		len=temp.size();
		buffer=temp;
		for(j=len+1;j<100;j++)
		{
			temp+='$';
		}
	}
};

int main() {
	int choice;
	student s;
	while(1)
	{
		cout<<"1.insert"<<endl<<"2.search"<<endl<<" 3.delete"<<endl<<" 4.modify"<<endl;
		cout<<"enter choice";
		cin>>choice;
		switch(choice)
		{
		case 1:s.readfromconsole();
		       s.showstudent();
		       s.pack();
		       break;

		}
	}
	return 0;
}
