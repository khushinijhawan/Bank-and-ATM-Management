#include<iostream>
 #include<conio.h>
 #include<stdio.h>
 #include<fstream>
 #include<windows.h>
 using namespace std;
 class Bank
 {
 	private:
 		float balance;
 		string id,pass,name,fname,address,phone,pin;
 		
    public:
    	void menu();
    	void bank_management();
    	void atm_management();
 		void new_user();
 		void already_user();
 		void deposit();
 		void withdraw();
 		void transfer();
 		void payment();
 		void search_record();
 		void edit_record();
 		void delete_record();
 		void show_records();
 		void show_payments();
 		void check_balance();
 		void withdraw_atm();
 		void check_details();
 };
void introduction()
{
	cout<<"\n\n\n\n\n\n\n\t\t\t\t";
	for(int i=0;i<100;i++)
	{
		cout<<"*";
	}
	cout<<"\n\n\t\t\t\t  ";
	for(int i=0;i<96;i++)
	{
		cout<<"*";
	}
	cout<<"\n\n\t\t\t\t    ";
	for(int i=0;i<92;i++)
	{
		cout<<"*";
	}
	cout<<"\n\n\n\n\t\t\t\t";
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t Bank & ATM Management \n\n\t\t\t\t\t\t\t\t\t     Project In C++\n\n\n\n\n\n\t\t\t\t     ";
    for(int i=0;i<92;i++)
	{
		cout<<"*";
	}
	cout<<"\n\n\t\t\t\t  ";
	for(int i=0;i<96;i++)
	{
		cout<<"*";
	}
	cout<<"\n\n\t\t\t\t";
	for(int i=0;i<100;i++)
	{
		cout<<"*";
	}
	getch();
	system("cls");
}
void Bank:: menu()
{ 
    p:
	system("cls");
	int choice;
	char ch;
	string pin,pass,email;
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t Control Panel";
	cout<<"\n\n\n\n 1. Bank Management";
	cout<<"\n\n 2. ATM Management";
	cout<<"\n\n 3. Exit";
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			system("cls");
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Login Account";
			cout<<"\n\n\n\t\t\t\t\t\t\t Email : ";
			cin>>email;
			cout<<"\n\n\t\t\t\t\t\t\t Pin Code : ";
			for(int i=0;i<6;i++)
			{
				ch=getch();
				pin+=ch;
				cout<<"*";
			}
			cout<<"\n\n\n\t\t\t\t\t\t\t Password: ";
			for(int i=0;i<6;i++)
			{
				ch=getch();
				pass+=ch;
				cout<<"*";
			}
			if(email== "khushi@gmail.com" && pin=="121220" && pass=="999555")
			{
				bank_management();
			}
			else{
				cout<<"\n\n Your Email or Pin or Password is wrong...";
			}
			break;
		case 2:
			atm_management();
			break;
		case 3:
			exit(0);
		default:
			cout<<"\n\n Invalid Value....Please Try Again";
	}
	getch();
	goto p;
}
void Bank::bank_management()
{
	p:
	system("cls");
	int choice;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Bank Managaement System";
	cout<<"\n\n 1. New User";
	cout<<"\n\n 2. Already User";
	cout<<"\n\n 3. Deposit Option";
	cout<<"\n\n 4. Withdraw Option";
	cout<<"\n\n 5. Tranfer Option";
	cout<<"\n\n 6. Payment Option";
	cout<<"\n\n 7. Search User Record";
	cout<<"\n\n 8. Edit User Record";
	cout<<"\n\n 9. Delete User Record";
	cout<<"\n\n 10. Show All Records";
	cout<<"\n\n 11. Payment All Records";
	cout<<"\n\n 12. Go Back";
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			new_user();
			break;
		case 2:
			already_user();
		    break;
		case 3:
			deposit();
		    break;
		case 4:
			withdraw();
		    break;
		case 5:
			transfer();
		    break;
		case 6:
			payment();
		    break;
		case 7:
			search_record();
		    break;
		case 8:
			edit_record();
		    break;
		case 9:
			delete_record();
		    break;
		case 10:
			show_records();
		    break;
		case 11:
			show_payments();
		    break;
		case 12:
			menu();
		    break;	
		default:
		    cout<<"\n\n Invalid Value....Please Try Again";	
	}
	getch();
	goto p;	
}
void Bank::atm_management()
{
	p:
	system("cls");
	int choice;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t ATM Managaement System";
	cout<<"\n\n 1. User Login and Check Balance";
	cout<<"\n\n 2. Withdraw Amount";
	cout<<"\n\n 3. Account Details";
	cout<<"\n\n 4. Go Back";
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			check_balance();
			break;
		case 2:
			withdraw_atm();
		    break;
		case 3:   
		    check_details(); 
		    break;
		case 4:
			menu();
		    break;	
		default:
		    cout<<"\n\n Invalid Value....Please Try Again";	
	}
	getch();
	goto p;
}
void Bank::new_user()
{
	p:
	system("cls");
	fstream file;
	int p;
	float b;
	string n,f,pa,a,ph,i;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Add New User";
	cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
	cin>>id;
	cout<<"\n\n\n\t\t\t\t\t\t\t Name : ";
	cin>>name;
	cout<<"\n\n\n\t\t\t\t\t\t\t Father's Name : ";
	cin>>fname;
	cout<<"\n\n\n\t\t\t\t\t\t\t Address : ";
	cin>>address;
	cout<<"\n\n\n\t\t\t\t\t\t\t Pin Code (6 digit) : ";
	cin>>pin;
	cout<<"\n\n\n\t\t\t\t\t\t\t Phone No : ";
	cin>>phone;
	cout<<"\n\n\n\t\t\t\t\t\t\t Password (6 digit) : ";
	cin>>pass;
	cout<<"\n\n\t\t\t\t\t\t\t Current Balance : ";
	cin>>balance;
	file.open("bank.txt",ios::in);
	if(!file)
	{
		file.open("bank.txt",ios::app|ios::out);
		file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
	    file.close();
	}
	else{
		file>>i>>n>>f>>a>>p>>ph>>pa>>b;
		while(!file.eof())
		{
			if(i==id)
			{
				cout<<"\n\n User Id Already exists...";
				getch();
				goto p;
			}
			file>>i>>n>>f>>a>>p>>ph>>pa>>b;
		}
		file.close();
		file.open("bank.txt",ios::app|ios::out);
		file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
	    file.close();
	}
	cout<<"\n\n New User Account Created Successfully...";
}
void Bank::already_user()
{
	system("cls");
	fstream file;
	string t_id;
	int found=0;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Already User Account";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>t_id;
		file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		while(!file.eof())
		{
			if(t_id==id)
			{
				system("cls");
				cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Already User Account";
				cout<<"\n\n\n\t\t\t\t\t\t\t User ID : "<<id<<"    Pin code : "<<pin<<"    Password : "<<pass;
			    found++;
			}
			file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		}
		file.close();
		if(found==0)
		{
			cout<<"\n\n\t\t\t\t\t\t\t\t\t ***User Id Not Found***";
		}
	}
}
void Bank::deposit()
{
	fstream file,file1;
	string t_id;
	float dep;
	int found=0;
	system("cls");
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Deposit Amount Option";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"n\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>t_id;
		file1.open("bank1.txt",ios::app|ios::out);
		file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		while(!file.eof())
		{
			if(t_id==id)
			{
				cout<<"\n\n\t\t\t\t\t\t\t Amount For Deposit : ";
				cin>>dep;
				balance=balance+dep;
				file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
				found++;
				cout<<"\n\n\t\t\t\t\t\t\t Your Amount of "<<dep<<" Successfully Deposited...";
			}
			else{
				file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
			}
			file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		}
		file.close();
		file1.close();
		remove("bank.txt");
		rename("bank1.txt","bank.txt");
		if(found==0)
		{
			cout<<"n\n\n\t\t\t\t\t\t\t\t\t ***User Id Not Found***";
		}
	}
}
void Bank::withdraw()
{
	fstream file,file1;
	string t_id;
	float with;
	int found=0;
	system("cls");
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Withdraw Amount Option";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"n\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>t_id;
		file1.open("bank1.txt",ios::app|ios::out);
		file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		while(!file.eof())
		{
			if(t_id==id)
			{
				cout<<"\n\n\t\t\t\t\t\t\t Amount For Withdraw : ";
				cin>>with;
				if(with <= balance)
				{
					balance=balance-with;
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
				    found++;
				    cout<<"\n\n\t\t\t\t\t\t\t Your Amount of "<<with<<" Successfully Withdrawn...";
				}
				else{
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
					cout<<"\n\n\t\t\t\t\t\t\t Your Current Balance "<<balance<<" is less than the Withdrawn Amount";
				}
				found++;
			}
			else{
				file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
			}
			file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		}
		file.close();
		file1.close();
		remove("bank.txt");
		rename("bank1.txt","bank.txt");
		if(found==0)
		{
			cout<<"n\n\n\t\t\t\t\t\t\t\t\t ***User Id Not Found***";
		}
	}
}
void Bank::transfer()
{
    fstream file, file1;
    system("cls");
    string s_id, r_id;
    float amount;
    int found = 0;
    cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t Payment Transfer Option";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
    }
    else
    {
        cout << "\n\n\n\t\t\t\t\t\t\t Sender User ID for Transaction : ";
        cin >> s_id;
        cout << "\n\n\n\t\t\t\t\t\t\t Receiver User ID for Transaction : ";
        cin >> r_id;
        cout << "\n\n\n\t\t\t\t\t\t\t Amount for Transaction : ";
        cin >> amount;
        file.seekg(0, ios::beg);
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> phone >> pass >> balance;
        while (!file.eof())
        {
            if (s_id == id)
            {
                if (amount <= balance)
                {
                    balance -= amount;
                    found++;
                }
                else
                {
                    cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t Insufficient balance for the transaction." << endl;
                    break; 
                }
            }
            if (r_id == id)
            {
                balance += amount;
                found++;
            }
            file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << phone << " " << pass << " " << balance << "\n";
            file >> id >> name >> fname >> address >> pin >> phone >> pass >> balance;
        }
        file.close();
        file1.close();

        if (found == 2)
        {
            remove("bank.txt");
            rename("bank1.txt", "bank.txt");
            cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t Transaction done successfully...";
        }
        else
        {
            cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t Transaction User Id's are Invalid";
        }
    }
}
void Bank::payment()
{
	system("cls");
	fstream file,file1;
	string b_id,bname;
	int found=0;
	float bamount=0;
	SYSTEMTIME x;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Bills Payment Option";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>b_id;
		cout<<"\n\n\n\t\t\t\t\t\t\t Bill Name : ";
		cin>>bname;
		cout<<"\n\n\n\t\t\t\t\t\t\t Bill Amount : ";
		cin>>bamount;
		file1.open("bank1.txt",ios::app|ios::out);
		file >> id >> name >> fname >> address >> pin >> phone >> pass >> balance;
		while(!file.eof())
		{
			if(b_id==id && bamount<=balance)
			{
				balance-=bamount;
				file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << phone << " " << pass << " " << balance << "\n";
				found++;
			}
			else
			{
				file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << phone << " " << pass << " " << balance << "\n";
			}
			file >> id >> name >> fname >> address >> pin >> phone >> pass >> balance;
		}
		file.close();
		file1.close();
		remove("bank.txt");
		rename("bank1.txt","bank.txt");
		if(found==1)
		{
			GetSystemTime(&x);
			file.open("bill.txt",ios::app|ios::out);
			file<<b_id<<" "<<bname<<" "<<bamount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear<<"\n";
		    file.close();
		    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t "<<bname<<" Bill Payment is Successfull...";
		}
		else
		{
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t User ID or Amount Invalid...";
		}
	}
}
void Bank::search_record()
{
	system("cls");
	fstream file;
	int found=0;
	string t_id;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Search User Record";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>t_id;
		file >> id >> name >> fname >> address >> pin >> phone >> pass >> balance;
		while(!file.eof())
		{
			if(t_id==id)
			{
				system("cls");
				cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Search User Record";
				cout<<"\n\n\n User Id: "<<id<<"   Name:  "<<name<<"   Father's Name: "<<fname<<"   Address: "<<address<<"   Pin:  "<<pin<<"   Phone: "<<phone<<"   Password: "<<pass<<"   Balance:  "<<balance;
				found++;
			}
			file >> id >> name >> fname >> address >> pin >> phone >> pass >> balance;
		}
		file.close();
		if(found==0)
		{
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t User ID not found...";
		}
	}
}
void Bank::edit_record()
{
	system("cls");
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Edit User Record";
	fstream file,file1;
	string t_id,n,f,a,p,ph;
    int found=0,pi; 
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>t_id;
		file1.open("bank1.txt",ios::app|ios::out);
		file >> id >> name >> fname >> address >> pin >> phone >> pass >> balance;
		while(!file.eof())
		{
			if(t_id==id)
			{
				cout<<"\n\n\n\t\t\t\t\t\t\t Name : ";
				cin>>n;
				cout<<"\n\n\n\t\t\t\t\t\t\t Father's Name : ";
				cin>>f;
				cout<<"\n\n\n\t\t\t\t\t\t\t Address : ";
				cin>>a;
				cout<<"\n\n\n\t\t\t\t\t\t\t Pin Code (6 digit) : ";
				cin>>pi;
				cout<<"\n\n\n\t\t\t\t\t\t\t Phone No : ";
				cin>>ph;
				cout<<"\n\n\n\t\t\t\t\t\t\t Password : ";
				cin>>p;
				file1<<" "<<id<<" "<<n<<" "<<f<<" "<<a<<" "<< pi<<" "<< ph<<" "<<p<<" "<< balance<<"\n";
			    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Your record successfully updated...";
			    found++;
			}
			else
			{
				file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
			}
			file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		}
		file.close();
		file1.close();
		remove("bank.txt");
		rename("bank1.txt","bank.txt");
		if(found==0)
		{
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t User ID not found...";
		}	
	}
}
void Bank::delete_record()
{
	system("cls");
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Edit User Record";
	fstream file,file1;
	string t_id;
    int found=0; 
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>t_id;
		file1.open("bank1.txt",ios::app|ios::out);
		file >> id >> name >> fname >> address >> pin >> phone >> pass >> balance;
		while(!file.eof())
		{
			if(t_id==id)
			{
			    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Your record successfully deleted...";
			    found++;
			}
			else
			{
				file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
			}
			file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		}
		file.close();
		file1.close();
		remove("bank.txt");
		rename("bank1.txt","bank.txt");
		if(found==0)
		{
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t User ID not found...";
		}	
	}
}
void Bank::show_records()
{
	system("cls");
	fstream file;
	int found=0;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Show All Users' Records";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else
	{
		file >> id >> name >> fname >> address >> pin >> phone >> pass >> balance;
		while(!file.eof())
		{
			cout<<"\n\n\n User ID : "<<id;
			cout<<"\n Name : "<<name;
			cout<<"\n Father's Name : "<<fname;
			cout<<"\n Address : "<<address;
			cout<<"\n Pin : "<<pin;
			cout<<"\n Phone No : "<<phone;
			cout<<"\n Password : "<<pass;
			cout<<"\n Current Balance : "<<balance;
			cout<<"\n\n\n===================================================================================================================";
			found++;
			file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		}
		file.close();
		if(found==0)
		{
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t DataBase is Empty...";
		}
	}	
}
void Bank::show_payments()
{
	system("cls");
	fstream file;
	int found=0;
	float bamount;
	string c_date;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Show All Bill Records";
	file.open("bill.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else
	{
		file>>id>>name>>bamount>>c_date;
		while(!file.eof())
		{
			cout<<"\n\n\n User ID : "<<id;
			cout<<"\n Bill Name : "<<name;
			cout<<"\n Bill Amount : "<<bamount;
			cout<<"\n Date : "<<c_date;
			cout<<"\n\n\n====================================================================================================================";
			found++;
			file>>id>>name>>bamount>>c_date;
		}
		file.close();
		if(found==0)
		{
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t DataBase is Empty...";
		}
	}	
}
void Bank::check_balance()
{
	system("cls");
	fstream file;
	string t_id,t_pin,t_pass;
	int found=0;
	char ch;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t User Login & Check Balance";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else
	{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>t_id;
		cout<<"\n\n\t\t\t\t\t\t\t Pin : ";
		for(int i=0;i<6;i++)
		{
			ch=getch();
			t_pin += ch;
			cout<<"*";
		}
		cout<<"\n\n\t\t\t\t\t\t\t Password : ";
		for(int i=0;i<6;i++)
		{
			ch=getch();
			t_pass += ch;
			cout<<"*";
		}
		file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		while(!file.eof())
		{
			if(t_id==id && t_pin==pin && t_pass==pass)
			{
				cout<<"\n\n\t\t\t\t\t\t\t\t\t Your Current Balance is: "<<balance;
				found++;
			}
			file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		}
		file.close();
		if(found==0)
		{
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t User ID or Pin or Password Invalid...";
		}
	}
}
void Bank::withdraw_atm()
{
    fstream file,file1;
	string t_id,t_pin,t_pass;
	float with;
	char ch;
	int found=0;
	system("cls");
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Withdraw Amount Option";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"n\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>t_id;
		cout<<"\n\n\t\t\t\t\t\t\t Pin : ";
		for(int i=0;i<6;i++)
		{
			ch=getch();
			t_pin += ch;
			cout<<"*";
		}
		cout<<"\n\n\t\t\t\t\t\t\t Password : ";
		for(int i=0;i<6;i++)
		{
			ch=getch();
			t_pass += ch;
			cout<<"*";
		}
		file1.open("bank1.txt",ios::app|ios::out);
		file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		while(!file.eof())
		{
			if(t_id==id && t_pin==pin && t_pass==pass) 
			{
				cout<<"\n\n\t\t\t\t\t\t\t Amount For Withdraw : ";
				cin>>with;
				if(with <= balance)
				{
					balance=balance-with;
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
				    found++;
				    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Your Amount of "<<with<<" Successfully Withdrawn...";
				    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Your Current Balance is "<<balance;
				}
				else{
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
					cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Your Current Balance "<<balance<<" is less than the the withdrawn amount";
				}
				found++;
			}
			else{
				file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<phone<<" "<<pass<<" "<<balance<<"\n";
			}
			file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		}
		file.close();
		file1.close();
		remove("bank.txt");
		rename("bank1.txt","bank.txt");
		if(found==0)
		{
			cout<<"n\n\n\t\t\t\t\t\t\t\t\t ***User Id Not Found***";
		}
	}
}
void Bank::check_details()
{
	system("cls");
	fstream file;
	string t_id,t_pin,t_pass;
	char ch;
	int found=0;
	system("cls");
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Check Details Option";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"n\n\n\t\t\t\t\t\t\t\t\t File Opening Error...";
	}
	else{
		cout<<"\n\n\n\t\t\t\t\t\t\t User ID : ";
		cin>>t_id;
		cout<<"\n\n\t\t\t\t\t\t\t Pin : ";
		for(int i=0;i<6;i++)
		{
			ch=getch();
			t_pin += ch;
			cout<<"*";
		}
		cout<<"\n\n\n\t\t\t\t\t\t\t Password : ";
		for(int i=0;i<6;i++)
		{
			ch=getch();
			t_pass += ch;
			cout<<"*";
		}
		file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		while(!file.eof())
		{
			if(t_id==id && t_pin==pin && t_pass==pass) 
			{
				system("cls");
				cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t Check Details Option";
				cout<<"\n\n\n\n User ID : "<<id;
				cout<<"\n\n Name : "<<name;
				cout<<"\n\n Father's Name : "<<fname;
				cout<<"\n\n Address : "<<address;
				cout<<"\n\n Pin : "<<pin;
				cout<<"\n\n Phone No : "<<phone;
				cout<<"\n\n Password : "<<pass;
				cout<<"\n\n Current Balance : "<<balance;
				found++;
			}
			file>>id>>name>>fname>>address>>pin>>phone>>pass>>balance;
		}
		file.close();
		if(found==0)
		{
			cout<<"n\n\n\t\t\t\t\t\t\t\t\t ***User Id Not Found***";
		}
	}
}
 int main()
 {
    Bank b;
    introduction();
    b.menu();
 }