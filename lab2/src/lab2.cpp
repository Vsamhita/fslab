//============================================================================
// Name        : lab2a.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
class student{
	string usn;
	string name;
	string branch;
	int semester
	string buffer;

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
	void write()
	{
		fstream file;
		file.open("2a.txt",ios::out|ios::app);
		file<<buffer;
		file.close();
	}
	int search(string key)
	{
		fstream file;
		int flag=0,pos=0;
		file.open("2a.txt",ios::in);
		while(!file.eof())
		{
			buffer.erase();
			getline(file,buffer);
			unpack();
			if(key==usn)
			{
				flag=1;
				cout<<"found the record is:\n"<<buffer;
				pos=file.tellg();
				cout<<"\n pos="<<pos;
				return pos;
			}
		}
		if(!flag)
			cout<<"record not found";
		return pos;
	}
	void unpack()
	{
		string sem;
		int ch=1,i=0;
		usn.erase();
		while(buffer[i]!='|')
			usn+=buffer[i++];
		name.erase();
		i++;
		while(buffer[i]!='|')
			name+=buffer[i++];
		branch.erase();
		i++;
		while(buffer[i]!='|')
			branch+=buffer[i++];
		sem.erase();
		i++;
		while(buffer[i]!='$')
			sem+=buffer[i++];
		stringstream out(sem);
		cout<<sem;
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
	int choice,choice,len,i;
	student s;
	string key;
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
		       .open("2a.txt",ios::out|ios::app);
		       		file<<buffer;
		       		file.close();
		       	}
		}
	}
	return 0;
}
