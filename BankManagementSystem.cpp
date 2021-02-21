#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<windows.h>
using namespace std;
COORD coord={0,0};
void gotoxy(int x,int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	
}

void intro()
{
system("cls");


	cout<<"\n\n\n\t\t\t\t\t    WELCOME TO MY 2ND SEMESTER PROJECT! "<<endl;

cout<<"\n\t\t\t\t\t PROJECT   :             BANK MANAGEMENT SYSTEM ";

cout<<"\n\n\t\t\t\t\t TEACHER   :             SIR UZAIR MALIK";
cout<<"\n\n\t\t\t\t\t LANGUAGE  :             C++ \n\n\t\t\t\t\t COMPILOR  :             DEV-C++";
cout<<"\n\n\t\t\t\t\t PROGRAM   :             BS-IT ";
cout<<"\n\n\t\t\t\t\t SEMESTER  :             2ND";
cout<<"\n\n\t\t\t\t\t INSTITUTE :             GOVERNMENT POSTGRADUATE COLLEGE JHELUM.";
cout<<"\n\n\t\t\t\t\t\t\n\n\t\t\t\t\t\tA MUHAMMAD KAMRAN\'S PRODUCTION    ";
cout<<"\n\n\t\t\t\t\t\t Press \"ENTER\" to main menu. ";
	getch();
            
              
          }
class bank
{

public:
char name[50];
char f_name[50];
int balance;
char adress[50];
 int accountnumber;
 int  accountpincode;
 char cnic[15];
 int kindofaccount;
 char date[15];
 public:
 		bank()
 	{
 		accountnumber=100;
 		accountpincode=100;
 		
	 }
 	
  public:
  	

	void create_account_data()
{
fstream deposit("depositdetails.txt",ios::out);
deposit.close();
fstream sent("sentdetails.txt",ios::out);
int sentnumber=00;
sent<<sentnumber;
sent.close();
fstream withdraw("withdrawdetails.txt",ios::out);
int withdrawnumber=00;
withdraw<<withdrawnumber;
withdraw.close();
ofstream file("bankdata.txt");
file.close();
	
		
int yesorno;
system("cls");

	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\tACCOUNT-REGISTERATION";
	cout<<"\n\t\t\t\t_________________________________________";
	
	
	
	cout<<"\n\n\t\t\t\t Enter your name :  ";
   cin>>name;
	
	cout<<"\n\t\t\t\t Enter your CNIC :   ";
	
	
		cin>>cnic;
	
	cout<<"\n\t\t\t\t Enter your Father Name  :    ";
	
	cin>>f_name;
	cout<<"\n\t\t\t\t Enter your Address :    ";	
	cin>>adress;
	again:
	cout<<"\n\t\t\t\t What kind of account, you want to open\? \n";
	cout<<"\n\t\t\t\t 1-Current account   ";
	cout<<"\n\t\t\t\t 2-PLS saving account  \n\t\t\t\t";
	cout<<" 3-Fixed deposit account \n  ";
	cout<<"\n\t\t\t\t Account Type : ";
	cin>>kindofaccount;
	if(cin.fail())
  {
  cout<<"\n\n\n\n\t\t\t\t Wrong data type enterd! ";
  cout<<"\n\n\n\n\t\t\t\t Registeration Stopped! Please Register account again.";
  
				remove("bankdata.txt");	
			      remove("balance.txt");
				remove("depositdetails.txt");
				remove("sentdetails.txt");
				remove("withdrawdetails.txt");
				getch();
  exit(0);
}
else
{

	if(kindofaccount==1)
	{
	}
	else if(kindofaccount==2)
	{
	}
	else if(kindofaccount==3)
	{
		
	}
	else
	{
		cout<<"\t\t\t\t Wrong choice.please select 1 ,2 or 3. \n\t\t\t\t  ";
		goto again;
	}
	
		cout<<"\n\t\t\t\t Enter today date  :    ";
		cin>>date;
		balance:
		cout<<"\n\t\t\t\t Deposit At least Rs.500 for account opening : ";
		cin>>balance;
		if(balance<500)
		{
			cout<<"\n\n\t\t\t We are sorry! ";
			cout<<"\n\n\t\t\t Balance You deposited is Less than Rs.500 ";
			cout<<"\n\n\t\t\t Enter again : ";
			goto balance;
		}
		else
		{
			fstream file("balance.txt",ios::out);
			file<<balance;
			file.close();
			fstream file2("depositdetails.txt",ios::out);
			file2<<balance;
			file2.close();
		}
	
	cout<<"\n\n\t\t\t\t Your account has been sucessfully registerd. \n \t\t\t\t \n";
	cout<<"\t\t\t\t Thank you so much! for registration. \n \t\t\t\t \n";
	
}
}

void show_account_data()
	{
		
		system("cls");
		cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\tREGISTERED-ACCOUNT-DETAILS";
	cout<<"\n\t\t\t\t_________________________________________";

		cout<<"\n\n\t\t\t\t Customer's name             : "<<name<<"\n\n ";
		cout<<"\t\t\t\t Customer's Father name      : "<<f_name<<"\n\n ";
		
		cout<<"\t\t\t\t Customer's Account number   : "<<accountnumber<<" \n\n";
		cout<<"\t\t\t\t Customer's  account pincode : "<<accountpincode<<" \n\n";
	
		cout<<"\t\t\t\t Initial Balance             : "<<balance<<" \n\n";
		cout<<"\t\t\t\t Customer's CNIC             : "<<cnic;
		
		if(kindofaccount==1)
		{
		
		cout<<"\n\n\t\t\t\t Account                     : Current Account  ";
	}
	else if(kindofaccount==2)
	{
	cout<<"\n\n\t\t\t\t Account                         : PLS Account ";	
	}
  else if(kindofaccount==3)	
  {
  	cout<<"\n\n\t\t\t\t Account                         : Fixed Deposit Account";
  }
  else
  {

  }
		cout<<"\n\n\t\t\t\t Account opening Date        : "<<date;
		
		
		cout<<"\n\n\n\n\n\t\t\t\t Press \"Any key\" to main menu.";
               	getch();
               		
				   
	}
	 public:

			
		void write()
		{
			ofstream file("bankdata.txt",ios::out);
			
			file<<endl<<name;
				file<<endl<<f_name;
							file<<endl<<accountnumber;
						file<<endl<<accountpincode;
						file<<endl<<balance;
								file<<endl<<adress;	
										file<<endl<<cnic;
										file<<endl<<date;
										if(kindofaccount==1)
		{
			char type1[20]="Current-Account";
		file<<endl<<type1;
		
	}
	else if(kindofaccount==2)
	{
		char type2[20]="PLS-Saving-Account";
	file<<endl<<type2;	
	}
  else if(kindofaccount==3)	
  {
  	char type3[25]="Fixed-Deposit-Account";
 file<<endl<<type3;;
  }	
										
							
		
		                         				
			
			file.close();
								}
					void read()
					{
						system("cls");
						cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tFILE-DATA";
	cout<<"\n\t\t\t\t_________________________________________";
						ifstream file("bankdata.txt",ios::in);
						if(file)
						{
					file>>name;
					file>>f_name;	
					file>>accountnumber;
					file>>accountpincode;
					file>>balance;
					file>>adress;					
				file>>cnic;
				file>>date;
				
					char accountt[25];
					file>>accountt;
					
					
		cout<<"\n\n\t\t\t\t Customer's name               : "<<name<<"\n\n";
		cout<<"\t\t\t\t Customer's Father name        : "<<f_name<<"\n\n";
		
		cout<<"\t\t\t\t Customer's Account number     : "<<accountnumber<<"\n\n";
		cout<<"\t\t\t\t Customer's  account pincode   : "<<accountpincode<<"\n\n";
		cout<<"\t\t\t\t Customer's  Initial Balance   : "<<balance<<"\n\n";
		
		cout<<"\t\t\t\t Customer's  Address           : "<<adress<<"\n\n";
		cout<<"\t\t\t\t Customer's CNIC               : "<<cnic<<"\n\t\t\t\t \n ";
		cout<<"\t\t\t\t Account Opening Date          : "<<date<<"\n\n";
			
		cout<<"\t\t\t\t Account                       : "<<accountt<<"\n\n";		
						file.close();
					
							
					
						}
							
						
					else {
								
							cout<<" \n\n\n\t\t\t\t No data Available! ";
							cout<<"\n\n\t\t\t\t Press any key to main menu.";
			getch();
	
					}
						
											}
											
		void balanceinformation()
		{
			system("cls");
	 				cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\t BALANCE-ENQUIRY";
	cout<<"\n\t\t\t\t_________________________________________";

			fstream file("balance.txt",ios::in);
			if(!file)
						{
							
						cout<<" \n\n\n\t\t\t\t\t No data Available! ";
						cout<<" Press any key to main menu.";
			getch();
		
						}
		else {
	
			file>>balance;
			
			cout<<"\n\n\n\n\t\t\t\t Account Balance : "<<balance<<"\n\n\t\t\t\t\t";
			file.close();
			cout<<" Press any key to main menu.";
			getch();
	
			
			
			
			
							}	
						}
						void depositoption()
	 			{
	 				system("cls");
	 			cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tDEPOSIT-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
	
				int loginaccountnumber;
 int loginaccountpincode;
 
			cout<<"\n\n\n\t\t\t\t Please enter your account number :   ";
			cin>>loginaccountnumber;
				cout<<"\n\t\t\t\t Please enter your account pin code :   ";
				cin>>loginaccountpincode;
			
			ifstream file2("depositdetails.txt");
		if(file2)
			{
			file2.close();
			
		
				if(loginaccountnumber==accountnumber && loginaccountpincode==accountpincode)
			{
	 				int money;
	 					
	 					
	 					fstream file("balance.txt",ios::in);
	 				 if(!file)
					 {
					 	system("cls");
				cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\t DEPOSIT-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
					 	cout<<"\n\n\n\t\t\t\t\t No data Avialable! ";
						 }
						 else
						 {
						 system("cls");
				cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\t DEPOSIT-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
						 file>>balance;
						 file.close();
			        cout<<"\n\n\t\t\t\t Current Balance : "<<balance;
	 				cout<<"\n\n\n \t\t\t\t Enter Amount in Rs. to deposit : ";
	 				cin>>money;
	 		
	 		
	 			
	 			fstream file2("balance.txt",ios::out);
			int newbalance;	 	
				newbalance=balance+money;
				file2<<newbalance;
				
					cout<<"\n\n \t\t\t\t Your new account Balance :  "<<newbalance;
			cout<<"\n\t\t\t\t Succesfully ! Deposited  Money Rs. : "<<money;
			file2.close();
			fstream deposit("depositdetails.txt",ios::in);
	 		int balance2;
	 		deposit>>balance2;
	 		int newmoney;
	 		newmoney=balance2+money;
	 		deposit.close();
	 		fstream deposit1("depositdetails.txt",ios::out);
	 		deposit1<<newmoney;
	 		deposit1.close();
	 	
		cout<<"\n\n\n\t\t\t\t Press any key to main menu.";
			 getch();
				 
			}
				
			 
			}
			else 
			{
				
				cout<<"\n\n\t\t\t\t Error! Account Number Or Account Pin Code Incorrect.";
				cout<<"\n\n\n\t\t\t\t Press \"any key\" to main menu.";
			 getch();
			 
			
			}
		}
		else
		{
			system("cls");
				cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\t DEPOSIT-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\n\t\t\t\t\t Error! No Deposit Details Available.";
	cout<<"\n\n\n\t\t\t\t\t No Account Exists.";
	cout<<"\n\n\n\t\t\t\t\t Press any key to main menu.";
	getch();

		}

}
void withdrawoption()
	 			{
	 				system("cls");
	 			cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tWITHDRAW-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
	
				int loginaccountnumber;
 int loginaccountpincode;
 
			cout<<"\n\n\n\t\t\t\t Please enter your account number   :   ";
			cin>>loginaccountnumber;
				cout<<"\n\t\t\t\t Please enter your account pin code :   ";
			cin>>loginaccountpincode;
			ifstream file2("depositdetails.txt");
			if (file2)
			{
				file2.close();
			
				if(loginaccountnumber==accountnumber && loginaccountpincode==accountpincode)
			{
			
                     fstream file("balance.txt",ios::in);
                     if(!file)
					 {
					 	system("cls");
					 	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tWITHDRAW-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
					 	cout<<"\n\n\n\t\t\t\t\t No Withdraw option Avialable! ";
						 }	
						 else {
						 system("cls");
					 	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tWITHDRAW-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
                     file>>balance;
	 			cout<<"\n\n\n\t\t\t\t Current balance : "<<balance;
				 int money;
				 cout<<"\n\n\n\t\t\t\t Enter Amount in Rs. to Withdraw : ";
				 cin>>money;
				 if(money>bank::balance)
				{
					cout<<"\n\t\t\t\t Error!  Your account balance is low.  ";
				}
				else if(bank::balance<=500)
				{
				cout<<"\n\t\t\t\t Error! You can not Withdraw money Because You have 500 or less than 500 account balance. ";	
				}
				else
				{
					file.close();
					
					cout<<"\n\t\t\t\t Succesfully! WithDrawn Money Rs."<<money;
					fstream file2("balance.txt",ios::out);
					 if(!file2)
					 {
					 	cout<<"\n\n\n\t\t\t\t No data Avialable! ";
						 }
					int newbalance;
				newbalance=balance-money;
					file2<<newbalance;
				cout<<"\n\n \t\t\t\t Your new account Balance : "<<newbalance;
				file2.close();
				fstream file3("withdrawdetails.txt",ios::in);
				 if(!file3)
					 {
					 	cout<<"\n\n\n\t\t\t\t\t No data Avialable! ";
						 }
				int newsent;
				int withdraw;
				file3>>newsent;
				withdraw=newsent+money;
				file3.close();
				fstream file4("withdrawdetails.txt",ios::out);
				 if(!file4)
					 {
					 	cout<<"\n\n\n\t\t\t\t No data Avialable! ";
						 }
				file4<<endl<<withdraw;
				file4.close();	
				file2.close();
				cout<<"\n\n\n\t\t\t\t Press \"any key\" to main menu.";
			 getch();
			}
				}
					
			 	
			}
			else
			{
				cout<<"\n\n\t\t\t\t Error! Account Number Or Account Pin Code Incorrect.";
				cout<<"\n\n\n\t\t\t\t Press \"any key\" to main menu.";
			 getch();
			 
			
			}
			
		}
		else
		{
		
			system("cls");
				cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\t WITHDRAW-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\n\t\t\t\t\t Error! No Withdraw Details Available.";
	cout<<"\n\n\n\t\t\t\t\t No Account Exists.";
	cout<<"\n\n\n\t\t\t\t\t Press any key to main menu.";
	getch();

}
	 				
				 }
				 		void sendoption()
	 			{
	 				system("cls");
cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tSEND-MENU";
	cout<<"\n\t\t\t\t_________________________________________";

		int loginaccountnumber;
 int loginaccountpincode;
 fstream filec("balance.txt",ios::in);
					 
				
					
					
					filec>>balance;
			cout<<"\n\n\n\t\t\t\t Please enter your account number :   ";
			cin>>loginaccountnumber;
				cout<<"\n\t\t\t\t Please enter your account pin code :   ";
			cin>>loginaccountpincode;
			ifstream file("sentdetails.txt");
			if(file)
			{
			
				if(loginaccountnumber==accountnumber && loginaccountpincode==accountpincode)
			{
				if(!filec)
					 {
						system("cls");
cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tSEND-MENU";
	cout<<"\n\t\t\t\t_________________________________________";

					 	cout<<"\n\n\n\t\t\t\t  No data Avialable! ";
						 
						 }
						 else
						 {
	         system("cls");
cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tSEND-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
	 
	 				int reciever_money;
	 				int money;
	 				cout<<"\n\n\t\t\t\t Current Balance : "<<balance;
	 			cout<<"\n\n\n\t\t\t\t Enter account number to which you send money :  ";
				cin>>reciever_money;
				cout<<"\n\t\t\t\t Enter Amount you want to send  :  ";
				cin>>money;
				if(money>bank::balance)
				{
					cout<<"\n\t\t\t\t Error! We can not send money Because Your account balance is low.  ";
				}
				else if(bank::balance<=500)
				{
				cout<<"\n\t\t\t\t Error! Bank Balance is less than Rs.500.  ";	
				}
				else
				{
					filec.close();
					fstream files("balance.txt",ios::out);
					cout<<"\n\t\t\t\t Succesfully! Sent Money Rs."<<money;
					int newbalance;
					newbalance=balance-money;
						files<<newbalance;
				cout<<"\n\n \t\t\t\t Your new account Balance : "<<newbalance;
				files.close();
			fstream	filew("sentdetails.txt",ios::in);
				int newsent;
				filew>>newsent;
				filew.close();
				fstream filex("sentdetails.txt",ios::out);
				int totalsent;
				totalsent=newsent+money;
				filex<<endl<<totalsent;
				filex.close();
			}
			cout<<"\n\n\n\n\t\t\t\t Press Any Key to main menu.";
			getch();
		
		}
				
			 
				}	
			
			else
			{
				cout<<"\n\n\t\t\t\t Error! Account Number Or Account Pin Code Incorrect.";
				cout<<"\n\n\n\t\t\t\t Press \"any key\" to main menu.";
			 getch();
			 
				
			
			}
		}
		else {
		
			system("cls");
				cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\t SEND-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\n\t\t\t\t\t Error! No Send Details Avilable.";
	cout<<"\n\n\n\t\t\t\t\t No Account Exists.";
	cout<<"\n\n\n\t\t\t\t\t Press any key to main menu.";
	getch();
}
		}
	};
	class closeaccount:  public bank
{
	
	public:
	
		void simplecloseaccount()
		{
				int closeaccountnumber;
 int closeaccountpincode;
 char closingaccountdate[15];
			system("cls");
			cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tCLOSE-ACCOUNT";
	cout<<"\n\t\t\t\t_________________________________________";

			again:
				leble:
			cout<<"\n\n\t\t\t\t Enter Account  Number     : ";
			cin>>closeaccountnumber;
			cout<<"\n\n\t\t\t\t Enter Account  Pin-Code   : ";
			cin>>closeaccountpincode;
			ifstream file2("bankdata.txt");
			if(file2)
			{
			file2.close();
			if(closeaccountnumber==accountnumber&&closeaccountpincode==accountpincode)
			{
				remove("bankdata.txt");
				
				
			remove("balance.txt");
				
				
				remove("depositdetails.txt");
				
				
				
				remove("sentdetails.txt");
				
			
				remove("withdrawdetails.txt");
				system("cls");
			cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tCLOSE-ACCOUNT";
	cout<<"\n\t\t\t\t_________________________________________";

				cout<<"\n\n\t\t\t\t Your Account has been Closed.";
				cout<<"\n\n\t\t\t\t Thank you so much for using this program.";
				
			cout<<"\n\n\t\t\t\t Press \"ANY KEY\" to main menu.";
               	getch();
    
				
			}
			else
			{
				cout<<"\n\n \t\t\t\t Error! Account-Number OR Account-pincode not matched.\n";
				cout<<"\n \n\t\t\t\t Please! Enter again account number and Account pin code. \n\t\t\t\t";
				
				goto leble;
				
				
		}
		
				   
		
		}
	else
	{
		system("cls");
			cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tCLOSE-ACCOUNT";
	cout<<"\n\t\t\t\t_________________________________________";
    cout<<"\n\n\n\n\t\t Error! No Account is closed Beacause No Account Exsits in bank record.";
	cout<<"\n\n\n\t\t\t\t\t Press any key to main menu.";
	getch();
	
	file2.close();
	}
}
	void login()
		{
			
		system("cls");
				cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tLOG-IN";
	cout<<"\n\t\t\t\t_________________________________________";

	again:
				int loginaccountnumber;
 int loginaccountpincode;
 int totalsent;
 int totaldeposit;
 int totalwithdraw;
			cout<<"\n\n\n\t\t\t\t Please Enter your account Number      :   ";
			cin>>loginaccountnumber;
				cout<<"\n\t\t\t\t Please Enter your account Pin-Code    :   ";
			cin>>loginaccountpincode;
			ifstream file("bankdata.txt");
			if (file)
			{
			file.close();
				if(loginaccountnumber==accountnumber && loginaccountpincode==accountpincode)
			{
				
			system("cls");
		cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tTOTAL-TRANSCATIONS";
	cout<<"\n\t\t\t\t_________________________________________";

	
	
	cout<<"\n\n\t\t\t\tTOTAL-TRANSACTIONS OF ACCOUNT UPTO TODAY DATE. ";
	ifstream withdraw("withdrawdetails.txt",ios::in);
	
	if(!withdraw)
	{
		cout<<"\n\n\n\n\t\t\t\t\t No Data Available! ";
	}
	else
	{
	
	
	withdraw>>totalwithdraw;
	
	cout<<"\n\n\t\t\t\t Total WithDrawn Money Rs.    : "<<totalwithdraw;
	withdraw.close();
}
	ifstream deposit("depositdetails.txt",ios::in);
	if(!deposit)
	{
		cout<<"\n\n\n\n\t\t\t\t\t No Data Available! ";
	}
	else
	{
	
	
	deposit>>totaldeposit;
	cout<<"\n\n\t\t\t\t Total Deposited Money Rs.    : "<<totaldeposit;
	deposit.close();

	ifstream sent("sentdetails.txt",ios::in);
	if(!sent)
	{
		cout<<"\n\n\n\n\t\t\t\t\t No Data Available! ";
	}
	else
	{
	
	sent>>totalsent;
	cout<<"\n\n\t\t\t\t Total Sent Money Rs.         : "<<totalsent;
	sent.close();
}
	ifstream file("balance.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\n\n\t\t\t\t\t No Data Available! ";
	}
	else
	{
	
	file>>bank::balance;
		cout<<"\n\n\t\t\t\t Total Account Balance Rs.    : "<<bank::balance;
		file.close();
		int total_t;
		total_t=totalsent+totaldeposit+totalwithdraw;
		cout<<"\n\n\t\t\t\t Total Transactions           : "<<total_t;
	}
}
	 		cout<<"\n\n\n\n\t\t\t\t Press \"ANY KEY\" to main menu. ";
	 		getch();
	 		
	
		
	}
			else 
			{
				cout<<"\n\n\t\t\t\t Error! Account Number Or Account Pin Code Incorrect.";
				cout<<"\n\n\t\t\t\t Enter again! ";
			
			}
		}
		else
		{
			system("cls");
		cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tTOTAL-TRANSCATIONS";
	cout<<"\n\t\t\t\t_________________________________________";

			cout<<"\n\n\n\t\t\t\t\t Error! No Account Exsits.";
			cout<<"\n\n\n\t\t\t\t\t Press any key to main menu.";
			getch();
		
		}
			
			
		}
				
			
};

class deposit:public closeaccount
{
	public:
	
		void depositaccount()
		{
			system("cls") ;
				cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tDEPOSIT";
	cout<<"\n\t\t\t\t_________________________________________";

			int depositchoice;
			cout<<"\n\n\n\t\t\t\t Choose an option below :  ";
			cout<<"\n\t\t\t\t 1-Send \n\t\t\t\t 2-Deposit \n\t\t\t\t 3-Withdraw \n\t\t\t\t 4-Main Menu \n\n\t\t\t\t Select : ";
			cin>>depositchoice;
			if(cin.fail())
			{
				cout<<"\n\n\n\n\t\t\t\t Wrong Data Entered.";
				exit(0);
				
			}
			else
			{
			
			switch (depositchoice)
			{
				case 1:
					{
						cout<<"\n\t\t\t\t Please Log in to your account first! ";
						getch();
			               closeaccount::sendoption();
				break;
			}
			
			
		case 2:
		{
			cout<<"\n\t\t\t\t Please Log in to your account first!  ";
			getch();
			closeaccount::depositoption();
			break;	
			
    	}	
    	case 3:
    		{
    				cout<<"\n\t\t\t\t Please Log in to your account first! ";
    				getch();
			closeaccount::withdrawoption();
			break;	
			}
			case 4:
				{
					break;
				}
    	default:
    	{
    	  cout<<"\n\t\t\t\t Wrong input!  ";
    	  cout<<"\n\n\n\t\t\t\t Press any key to main menu.";
               	getch();
    	  
    	  	break;
    	  }
    	  	
				   
		
		}
			
               	
	}
}
};

class transactions:public deposit
{
public:
	void totals()
	{
		
		system("cls");
		cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tTRANSACTION";
	cout<<"\n\t\t\t\t_________________________________________";

	int choice;
	cout<<"\n\n\n\t\t\t\t Please! Log in to your Account first! ";	
	cout<<"\n\t\t\t\t 1-Yes \n\t\t\t\t 2-No \n\n\n\t\t\t\t Select :  ";
	cin>>choice;
	if(cin.fail())
	{
		cout<<"\n\n\n\n\t\t\t\t Wrong Data Type Entered! ";
		exit(0);
	}
	else
	{
	
	if(choice==1)
	{
		login();
	}
	else if(choice==2)
	{
	cout<<"\n\n\n\n\t\t\t\t  Press any key to main menu.";
	 
	getch();

}
	else
	{
		cout<<" WRONG INPUT! ";
		
			
				   
				   }
			}
		}
		
		
	};

class goodlogin:public transactions
{
	public:
		
			void createchange()
		{
			system("cls");
			
			int choice;
			cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\t LOG-IN";
	cout<<"\n\t\t\t\t_________________________________________";

			again:
				cout<<"\n\n\n\t\t\t\t Do you want to modify your account\?  ";
				cout<<"\n\n\t\t\t\t 1-Yes \t\t    2-No ";
				cout<<"\n\n\n\t\t\t\t Select : ";
				
				cin>>choice;
				if(cin.fail())
				{
					cout<<"\n\n\n\n\t\t\t\t Wrong Data type Entered";
					exit(0);
				}
				else
				{
				
				if(choice==1)
				{
						again1:
					system("cls");
	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\t LOG-IN";
	cout<<"\n\t\t\t\t_________________________________________";

					int choice1;
					cout<<"\n\n\t\t\t\t What do you want to Modify\? \n";
					cout<<"\n\t\t\t\t 1-Balance Enquiry ";
					cout<<"\n\t\t\t\t 2-Deposit money ";
					cout<<"\n\t\t\t\t 3-Close Account ";
					cout<<"\n\t\t\t\t 4-Withdraw money ";
					cout<<"\n\t\t\t\t 5-Bank Account Details ";
					cout<<"\n\t\t\t\t 6-Recover Pin code";
					cout<<"\n\t\t\t\t 7-Sign out";
					cout<<"\n\t\t\t\t 8-Main Menu";
				
					cout<<"\n\n\t\t\t\t Select : ";
					cin>>choice1;
					if(cin.fail())
                     {
                     	cout<<"\n\n\n\n\t\t\t\t Wrong Data type! ";
                     	exit(0);
					 }
					 else
					 {
					 
					switch(choice1)
					{
					case 1:
					{
					balanceinformation();
						break;
						}	
					case 2:
					{
						bank::depositoption();
						
						break;
						}	
						case 3:
							{
							closeaccount::simplecloseaccount();
								break;
							}
						case 4:
							{
						closeaccount::withdrawoption();
								break;
							}
						case 5:
							{
							bank::read();
			cout<<"\n\n\n\t\t\t\t Press \"any key\" to main menu.";
			 getch();
			 
		
								break;
							}
						case 6:
							{
							
								system("cls");
								cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tRECOVER-PINCODE";
	cout<<"\n\t\t\t\t_________________________________________";

	cout<<"\n\n\n\t\t\t\t If you have forgotton Account PIN code.\n\n\n\n\t\t\t\t Please Mail us OR visit our Office.\n\n\t\t\t\t\t\t THANK YOU!";
	cout<<"\n\n\t\t\t\t\t info@examplebank.com";
		cout<<"\n\n\n\t\t\t\t Press \"Backspace\" to main menu. ";
	                          getch();
	                          
	                           
								break;
								
							}
						case 7:
							{
								system("cls");
									cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tSIGN-OUT";
	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\n\t\t\t\t You have signed out. ";
	cout<<"\n\n\n\t\t\t\t Press \"Backspace\" to main menu. ";
	                          getch();
	                          
	                          
	                    
							break;	
							}
							case 8:
								{
									break;
								}
							default:
								{
									cout<<"\n\n\n\t\t\t\t Wrong input!";
										
										goto again1;
										break;
										
								}
				}
					}
			
	}
					else if(choice==2)
               {
               	system("cls");
               	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tLOG-IN";
	cout<<"\n\t\t\t\t_________________________________________";
               	cout<<"\n\n\n\t\t\t\t Press \"Escape\" to main menu. ";
               	getch();
               		
	}

			
            else
				   {
				   	cout<<"\n\t\t\t\t Erorr! Wrong input.\n\n\t\t\t\t Enter again : ";
				   	cin>>choice;
				   	goto again;
				   }
    
}
}

	

		void verysimplelogin()
		{
			again:
			system("cls");
			
				int loginaccountnumber;
 int loginaccountpincode;
	
			cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tLOG-IN";
	cout<<"\n\t\t\t\t_________________________________________";

			
			cout<<"\n\n\n\t\t\t\t Please enter your account number   :   ";
			cin>>loginaccountnumber;
				cout<<"\n\t\t\t\t Please enter your account pin code :   ";
			cin>>loginaccountpincode;
				if(loginaccountnumber==bank::accountnumber && loginaccountpincode==bank::accountpincode)
			{
				ifstream file("bankdata.txt");
				if(file)
				{
					createchange();
				}
				else
				{
					system("cls");
					cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tLOG-IN";
	cout<<"\n\t\t\t\t_________________________________________";
	
			cout<<"\n\n\n\n\t\t\t\t\t Error! Can't Login.\n\n\t\t\t\t\t No Account Exsits.";
			cout<<"\n\n\n\t\t\t\t\t Press any key to main menu.";
					getch();
			
				
			
				}
			}
			else
			{
		
			cout<<"\n \t\t\t\t Error! Account number OR Account pincode not matched.\n";
				cout<<"\n \t\t\t\t Please! Enter correct Account number and Account pin code. \n\t\t\t\t";
				cout<<"\n\n\t\t\t\t Enter again : ";
				goto again;
				
			
	}
		}
		
		};






int main()
{
		bank *p=new bank;
bank b;
p=&b;
closeaccount *p1=new closeaccount;
closeaccount ca;
p1=&ca;
goodlogin *p3=new goodlogin;

goodlogin gl;
p3=&gl;
deposit *p4=new deposit;
deposit d;
p4=&d;
transactions *p5=new transactions;
transactions tr;
p5=&tr;
	int choice;
system("COLOR 1F");

	intro();
	
do{


	again:
		system("cls");
		gotoxy(40,3);
		cout<<"Developed By Muhammad Kamran.";
		
		cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tMAIN-MENU";
	cout<<"\n\t\t\t\t_________________________________________";
	
	cout<<"\n\n\t\t\t\t\t 1-Create Account \n";
	cout<<"\t\t\t\t\t 2-Close Account \n";
	cout<<"\t\t\t\t\t 3-Deposit Money \n";
	cout<<"\t\t\t\t\t 4-WithDraw Money\n";
	cout<<"\t\t\t\t\t 5-Transactions Details\n";
	cout<<"\t\t\t\t\t 6-Login Account\n";
	cout<<"\t\t\t\t\t 7-FeedBack\n";
	cout<<"\t\t\t\t\t 8-Exit Program";
	
	
cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tUSER-INPUT";
	cout<<"\n\t\t\t\t_________________________________________";

	
	cout<<"\n\n\t\t\t\t Select an option from menu :  ";
	
		cin>>choice;
		
		if(cin.fail())
{
	cout<<"\n\n\n\n\t\t\t\t\t Wrong Data type Entered.";
	
	exit(0);
	
	}	
	else{
	
	switch (choice)
	{
	case 1:
	{
		system("cls");
		ifstream file("bankdata.txt");
		if(!file)
		{
		
		
		p->create_account_data();
		
		cout<<"\n\n\t\t\t\t press a key to write data to file...";
		
		getch();
		p->write();
	system("cls");
		cout<<"\n\n\t\t\t\t Press a key to check saved data ...";
		getch();
			p->read();
			cout<<"\n\n\t\t\t\t Press a key to check Registered Account Details...";
		getch();
		p->show_account_data();
		break;
	}
			else
			{
				system("cls");
			cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\tACCOUNT-REGISTERATION";
	cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\n\n\t\t\t\t Sorry! Can't Register For Account. \n\n\n\n\t\t\t\t Already One Account Exsits. ";
	cout<<"\n\n\n\n\t\t\t\t Fisrt Delete Existed Account Data By Selcting \"Close-Account\" in Menu.";	
	cout<<"\n\n\n\n\t\t\t\t Press Any Key To main menu.";
	getch();
			
			}
			break;
		}	
		case 2:
			{
	p1->simplecloseaccount();
					break;
			}
			case 3:
				{
					
						p4->depositaccount();
						break;
				}
					case 4:
			{
			
						p4->depositaccount();
					break;
			}
		case 5:
			{
					p5->login();
					
					break;
			}
			case 6:
				{
					p3->verysimplelogin();
					break;
				}
		case 7:
			{
				system("cls");
				string str;
				ofstream file("feedback.txt",ios::out);
				cout<<"\n\n\t You are free here about our program and write about program.Your Suggestions and advices will be houner for Us.";
				cout<<"\n\n\n\t Write your Views and Expert advices about program here untill full stop: ";
				for(int a=0;a!='.';a++)
				{
					cin>>str[a];
					if(str[a]=='.')
					{
						break;
					}
					else
					{
						if(str[a]==' ')
						{
						file<<' '<<str[a];
					}
					else
					{
						file<<str[a];
					}
					}
				}
                   					
				file.close();
				remove("feedback.txt");
				cout<<"\n\n\n\n\t\t\t\t Enter a key to go to main menu.";
				getch();
				break;
			}
		case 8:
				{
					
					system("cls");
					cout<<"\n\t\t\t\t_________________________________________";
	cout<<"\n\n\t\t\t\t\t\tEXIT-PROGRAM";
	cout<<"\n\t\t\t\t_________________________________________";
        int choice;
        cout<<"\n\n\n\n\t\t\t\t Are you sure you want to Exit program\?";
        cout<<"\n\n\t\t\t\t   1-Yes \t\t2-No ";
             again5: 
	    cout<<"\n\n\n\t\t\t\t\t Select : ";
        cin>>choice;
        if(cin.fail())
           {
           	cout<<"\n\n\n\t\t\t\t\t Wrong Data Type! ";
           	exit(0);
		   }
		   else
		   {
		   
        switch(choice)
        {
        case 1:
		{
			system("cls");
			exit(1);
		break;
			}	
			case 2:
			{
				goto again;
				break;
					   
					   }
					   default:
					   {
					   	cout<<"\n\n\n\n\t\t\t\t\t Wrong Input! ";
					   	goto again5;
					
								 
							
							 }
							       	
		}
		break;			
				}
				default:
				{
					
						cout<<"\n\t\t\t\t Error! No option found from menu.\n ";
					break;
							
				}
	
}
}
}
}while(choice!=8);
delete p,p1,p3,p4,p5;
return 0;
}
