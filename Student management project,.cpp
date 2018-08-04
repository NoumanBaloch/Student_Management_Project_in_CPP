/*
My project is example of
Hierarchical Inheritance....
*/

#include <iostream>

using namespace std;


//Hierarchical Inheritance..........

//perent class... identifier...
class identifiers
{    protected:
	
	char name[30],father_name[30];
	char id[30],date_of_birth[30];
	int roll;
	int number,oop,digital,bc,math,discret;
	float total;
};


//record is child class of identifier.....
class record: public identifiers
{

	
	public:
	
    	void personal_info()
	{
		cout<<"\nEnter your name = ";
		cin>>name;
		cout<<"\nEnter father name = ";
		cin>>father_name;
		cout<<"\nEnter date of birth = ";
		cin>>date_of_birth;
		cout<<"\nEnter id number = ";
		cin>>id;
		cout<<endl;
		
	}
	
	void show_p_info()
	
	{
		cout<<"\nName\tFather Name\tDate of birth\tID Number";
		cout<<"\n\n"<<name<<"\t"<<father_name<<"\t\t"<<date_of_birth<<"\t"<<id;
	    cout<<endl;
	}
	
};

//result is also child class of identifier....
class  Result:public identifiers
{
      
		public:
		void info()
		
		{
			cout<<"\nEnter Your name = ";
			cin>>name;
			cout<<"\nEnter your roll Number = ";
	        cin>>roll;
		    cout<<endl;
		    cout<<endl;
		}			 
		
		void disp()
		
		{
			cout<<"Enter marks of OOP = ";
			cin>>oop;
			cout<<"\nEnter marks of D.L.D = ";
			cin>>digital;
			cout<<"\nEnter marks of Buisness communication = ";
			cin>>bc;
			cout<<"\nEnter marks of Math = ";
			cin>>math;
			cout<<"\nEnter marks of Discrete structure = ";
			cin>>discret;
			total=oop+digital+bc+math+discret;
			cout<<"\n\n"<<name<<" Your total marks is ";
			cout<<total;
			cout<<"\n\nAnd percentage is "<<total*100/500;
		    cout<<endl;
	        cout<<endl;	
		}
		
};

//Fee is also child class of identifier class........
class fee:public identifiers

{
	
	
	    public:

		void feee()

	    {
		
            cout<<"\nEnter your name = ";
            cin>>name;
            cout<<"\nEnter your roll No = ";
            cin>>roll;
            cout<<"\nYour total fee for this semester is 20000  ";
            cout<<endl;
        }
};



//installation class is also child class of identifiers class........
class instal:public identifiers

{
	private:

	int fee,remain;
    int total=20000;
  
	public:
	
		void install_info()
		{
			cout<<"\nEnter your name = ";
            cin>>name;
            cout<<"\nEnter your roll No = ";
            cin>>roll;
            cout<<endl;
		}
		void install_disp()
		{
			cout<<"your total fee is 20000  ";
			cout<<"\n\nEnter the installment = ";
		    cin>>fee;
			if(fee==5000)
			{
				cout<<"\nYou submit your first insalmeent of 5000 RS";
			}
			else if(fee==10000)
			{
					cout<<"\nYou submit your second insalmeent of 10000 RS";
			}
				else if(fee==15000)
			{
					cout<<"\nYou submit your Third insalmeent of 15000 RS";
			}
					else if(fee==20000)
			{
					cout<<"\nThanks You submit your complete fee of 20000 RS";
			}
		
			cout<<"\nand remaning fee is = ";
			remain=total-fee;
			cout<<remain;
			cout<<endl;
		
		}
		
};





int main()
{
	int password;
	char user[30];
    cout<<"Enter your password for login..  ";
    cout<<"\nEnter your password = ";
	cin>>password;
	cout<<endl;
	if( password == 7878)
	{
	
     
	int num;
	cout<<"Wellcome to student management system\n";
	cout<<"\n**********Menu*********";
	cout<<"\n1. Personal record of students ";
	cout<<"\n2. Result of students  ";
	cout<<"\n3. Fee structure  ";
	cout<<"\n4. Instalment of fee  ";
	cout<<"\n  Enter number from 1 to 4 = ";
	cin>>num;
	cout<<endl;
	if (num==1)
	
	{
	
	
	    int n;
		cout<<"\nEnter number of students = ";
		cin>>n;
		record obj1[n];
		cout<<"\n1. Personal record of student ";
		cout<<endl;
		for (int i=0;i<n;i++)
		{
			
			obj1[i].personal_info();
	    
		}   
	    for (int i=0;i<n;i++)
		{
		
		obj1[i].show_p_info();
        }
	
	}
	else if(num==2)
	{
	    int n;
	   	cout<<"\nEnter number of students = ";
		cin>>n;
		Result obj2[n];
		cout<<"\n2. Result of students ";
		cout<<endl;
		for (int i=0;i<n;i++)	
		{
		
		obj2[i].info();
	   }
	   	for (int i=0;i<n;i++)
		{
		
		obj2[i].disp();
	   
	   }
	}
	
	else if(num==3)
	{
		    int n;
		  cout<<"\nEnter number of students = ";
		  cin>>n;
		  fee obj3[n];
		  cout<<"\n3. Fee structure ";
		  cout<<endl;
		  for (int i=0;i<n;i++)
			{
			
			obj3[i].feee();
		}
	}
	else if(num==4)
	{
		int n;
		cout<<"\nEnter number of students = ";
		cin>>n;
		instal obj4[n];
		cout<<"\n4. Instalment of fee ";
		cout<<endl;
		for (int i=0;i<n;i++)
		{
		
		obj4[i].install_info();
	    }
		for(int i=0;i<n;i++)
		{
		
		obj4[i].install_disp();
        }
	}
	else {
		cout<<"Sorry Try Again\a\a\a\a";
	}


}
else {
	cout<<"Access is denied ....";
}
}
