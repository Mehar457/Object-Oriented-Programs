#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student
{
	public:
		string name,CNIC,add,Fname,DOB,phoneno;
		int rollno;
		void setdata(string n,string cn,string ad,string ph,int rn,string fn,string db)
		{
			name=n;CNIC=cn;add=ad;phoneno=ph;rollno=rn;Fname=fn;DOB=db;
		}
		void getdata()
		{
			cout<<"Name:"<<name<<"\n"<<"address:"<<add<<"\n"<<"phoneno:"<<phoneno<<"\n"<<"rollno:"<<rollno<<"\n"<<"Fname:"<<
			Fname<<"\n"<<"DOB:"<<DOB;
		}
	
	    void setdata()
	    {
	    	cout<<"S2.name"<<"\n"<<"S2.Fname"<<"\n"<<"S2.CNIC"<<"\n"<<"S2.DOB"<<"\n"<<"S2.add"<<"\n"<<"S2.rollno"<<"\n"<<"S2.phoneno"<<endl;
	    	cin>>name>>Fname>>CNIC>>DOB>>add>>rollno>>phoneno;
	    	
		}

};
    int main()
    {
    	Student S1,S2;
    	S1. setdata("Rayan","35404-4567888-1","Lahore","0346-4876541",344,"Manzoor","23-06-2004");
    	S1. getdata();
		S2. setdata();
		S2. getdata();
    	
    	return 0;
	}
	
