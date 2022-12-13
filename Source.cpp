#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
void start();
void Bushra();
void Tooba();
void Minahil();
void Hafsa();
void Aleeha();
void intro();
void menu();
void addrecord();
void previousrecord();
void add_new_record();
void viewrecord();
void View_previous_records();
void View_new_records();
void deleterecord();
void Delete_Previous_records();
void Delete_New_records();
void editrecord();
void editpassword();

void main()
{
	intro();
	start();
	system("pause");

}
void intro()
{

	cout << endl;
	cout << "\t\t================================================================" << endl;
	cout << endl;
	cout << "\t\t\tCOMPUTER PROGRAMING FINAL PROJECT" << endl;
	cout << endl;
	cout << "\t\t\t\t1ST SEMESTER" << endl;
	cout << endl;
	cout << "\t\t\t  BACHELOUR OF COMPUTER SCIENCE" << endl;
	cout << endl;
	cout << "\t\t\tPERSONAL DIARY MANAGMENT SYSTEM" << endl;
	cout << endl;
	cout << "\t\t\t\t DESIGNED BY" << endl;
	cout << endl;
	cout << "\t\t\tBUSHRA MASOOD";
	cout << "\t\t03-134202-107" << endl;
	cout << endl;
	cout << "\t\t\tAMTUL MUSAWIR TOOBA";
	cout << "\t03-134202-009  " << endl;
	cout << endl;
	cout << "\t\t\tMINAHIL SAEED";
	cout << "\t\t03-134202-113  " << endl;
	cout << endl;
	cout << "\t\t\tHAFSA UMER";
	cout << "\t\t03-134202-018  " << endl;
	cout << endl;
	cout << "\t\t\t\tSUBMITTED TO" << endl;
	cout << endl;
	cout << "\t\t\t\tMAAM ZUPASH" << endl;
	cout << endl;
	cout << "\t\t\t\t23 - JAN - 2021" << endl;
	cout << endl;
	cout << "\t\t=================================================================" << endl;
	system("pause");
	system("cls");
}
void start()
{
	int ch;
	cout << "\t\t\t\t" << "*" << setw(35) << setfill('*') << "*" << endl;
	cout << "\t\t\t\t" << "*" << setw(35) << setfill(' ') << "*" << endl;
	cout << "\t\t\t\t" << "*" << setw(29) << setfill(' ') << "Personal diary managment" << setw(6) << setfill(' ') << "*" << endl;
	cout << "\t\t\t\t" << "*" << setw(35) << setfill(' ') << "*" << endl;
	cout << "\t\t\t\t" << "*" << setw(35) << setfill('*') << "*" << endl;
	cout << "\n\n\t\t\t\tTotal diaries:";
	cout << "\n\n\t\t\t\tBushra diary\t[1]";
	cout << "\n\t\t\t\tTooba diary\t[2]";
	cout << "\n\t\t\t\tMinahil diary\t[3]";
	cout << "\n\t\t\t\tHafsa diary\t[4]";
	cout << "\n\t\t\t\tAleeha diary\t[5]";
	cout << "\n\t\t\t\tEXIT\t\t[6]";
	cout << "\n\n\t\t\t\tEnter your choice:";
	cin >> ch;
	switch (ch)
	{
	case 1:
		system("CLS");
		Bushra();
		break;
	case 2:
		system("CLS");
		Tooba();
		break;
	case 3:
		system("CLS");
		Minahil();
		break;
	case 4:
		system("CLS");
		Hafsa();
		break;
	case 5:
		system("CLS");
		Aleeha();
		break;
	case 6:
		cout << "\n\n\t\t\t\tThank you for using the software " << endl;
		cout << endl;
		break;
	default:
		cout << "\n\n\t\t\t\tYou entered wrong choice" << endl;
		cout << "\n\t\t\t\tPress any key to try again" << endl;
		system("PAUSE");
		system("CLS");
		start();
		break;
	}
}
void Bushra()
{
	cout << "\t\t\t\t" << "-" << setw(25) << setfill('-') << "-" << endl;
	cout << "\t\t\t\t" << "|" << setw(18) << setfill(' ') << "Bushra diary" << setw(7) << setfill(' ') << "|" << endl;
	cout << "\t\t\t\t" << "-" << setw(25) << setfill('-') << "-" << endl;
	string passward = "";
	char ch;
	cout << "Enter passward:";
	ch = _getch();
	while (ch != 13)
	{
		passward.push_back(ch);
		cout << '*';
		ch = _getch();
	}

	if (passward == "bushra")
	{
		cout << "\nAccess granted\n";
		system("PAUSE");
		system("CLS");
		menu();
	}
	else
	{
		cout << "\nAccess aborted...\n";
		system("PAUSE");
		system("CLS");
		Bushra();
	}
}

void Tooba()
{
	cout << "\t\t\t\t" << "-" << setw(25) << setfill('-') << "-" << endl;
	cout << "\t\t\t\t" << "|" << setw(18) << setfill(' ') << "Tooba diary" << setw(7) << setfill(' ') << "|" << endl;
	cout << "\t\t\t\t" << "-" << setw(25) << setfill('-') << "-" << endl;
	string passward = "";
	char ch;
	cout << "Enter passward:";
	ch = _getch();
	while (ch != 13)
	{
		passward.push_back(ch);
		cout << '*';
		ch = _getch();
	}

	if (passward == "tooba")
	{
		cout << "\nAccess granted\n";
		system("PAUSE");
		system("CLS");
		menu2();
	}
	else
	{
		cout << "\nAccess aborted...\n";
		system("PAUSE");
		system("CLS");
		Tooba();
	}
}
void Minahil()
{
	cout << "\t\t\t\t" << "-" << setw(25) << setfill('-') << "-" << endl;
	cout << "\t\t\t\t" << "|" << setw(18) << setfill(' ') << "Minahil diary" << setw(7) << setfill(' ') << "|" << endl;
	cout << "\t\t\t\t" << "-" << setw(25) << setfill('-') << "-" << endl;
	string passward = "";
	char ch;
	cout << "Enter passward:";
	ch = _getch();
	while (ch != 13)
	{
		passward.push_back(ch);
		cout << '*';
		ch = _getch();
	}

	if (passward == "minahil")
	{
		cout << "\nAccess granted\n";
		system("PAUSE");
		system("CLS");
		menu3();
	}
	else
	{
		cout << "\nAccess aborted...\n";
		system("PAUSE");
		system("CLS");
		Minahil();
	}

}
void Hafsa()
{
	cout << "\t\t\t\t" << "-" << setw(25) << setfill('-') << "-" << endl;
	cout << "\t\t\t\t" << "|" << setw(18) << setfill(' ') << "Hafsa diary" << setw(7) << setfill(' ') << "|" << endl;
	cout << "\t\t\t\t" << "-" << setw(25) << setfill('-') << "-" << endl;
	string passward = "";
	char ch;
	cout << "Enter passward:";
	ch = _getch();
	while (ch != 13)
	{
		passward.push_back(ch);
		cout << '*';
		ch = _getch();
	}

	if (passward == "hafsa")
	{
		cout << "\nAccess granted\n";
		system("PAUSE");
		system("CLS");
		menu4();
	}
	else
	{
		cout << "\nAccess aborted...\n";
		system("PAUSE");
		system("CLS");
		Hafsa();
	}

}

void menu()
{
	int ch;
	cout << "\n\n\t\tMAIN MENU:";
	cout << "\n\n\tADD STORY\t[1]";
	cout << "\n\tVIEW STORY\t[2]";
	cout << "\n\tEDIT STORY\t[3]";
	cout << "\n\tDELETE STORY\t[4]";
	cout << "\n\tEDIT PASSWORD\t[5]";
	cout << "\n\tEXIT\t\t[6]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;

	switch (ch)
	{
	case 1:
		addrecord();
		break;
	case 2:
		viewrecord();
		break;
	case 3:
		editrecord();
		break;
	case 4:
		deleterecord();
		break;
	case 5:
		editpassword();
		break;
	case 6:
		cout << "\n\n\t\t\t\tThank you for using the software " << endl;
		cout << endl;
		break;
	default:
		cout << "\n\n\t\t\t\tYou entered wrong choice" << endl;
		cout << "\n\t\t\t\tPress any key to try again" << endl;
		system("PAUSE");
		system("CLS");
		menu();
		break;
	}
}
void addrecord()
{
	int option;
	cout << "\n\tPrevious records\t[1]" << endl;
	cout << "\n\tAdd new records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;
	switch (option)
	{

	case 1:
		previousrecord();
		break;
		system("cls");
	case 2:
		add_new_record();
		break;
		system("cls");

	default:
		cout << "invalid entry";
		break;
	}
}
struct addrecord
{
	char date[10];
	char time[10];
	char name[20];
	char note[400];
};
void previousrecord()
{
	struct addrecord e;
	ofstream file;
	file.open("diaryi.txt", ios::app | ios::out);
	system("cls");
	cout << "\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
	cin.ignore();
	cin.getline(e.date, 10);

	cout << "\n\tENTER TIME:[hh:mm]:";
	cin.ignore();
	cin.getline(e.time, 10);

	cout << "\tENTER NAME:";
	cin >> e.name;
	cout << "\n\tEXPLAIN THE INCIDENT :";
	cin.ignore();
	cin.getline(e.note, 400);
	file << "Date =" << e.date << endl << "Time=" << e.time << endl << "Name = " << e.name << endl << "Note" << e.note << endl;
	file.close();
	system("pause");
	system("cls");
	int ch;
	cout << "\n\tADD ANOTHER STORY\t[1]";
	cout << "\n\tExit\t[2]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;
	if (ch == 1)
	{
		addrecord();
	}
	else
		cout << "\n\n\t\t\t\tThank you";
	cout << endl;

}

void add_new_record()
{
	struct addrecord e;
	ofstream file;
	file.open("diaryii.txt", ios::app | ios::out);
	system("cls");
	cout << "\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
	cin.ignore();
	cin.getline(e.date, 10);

	cout << "\n\tENTER TIME:[hh:mm]:";
	cin.ignore();
	cin.getline(e.time, 10);

	cout << "\tENTER NAME:";
	cin >> e.name;
	cout << "\n\tEXPLAIN THE INCIDENT :";
	cin.ignore();
	cin.getline(e.note, 400);
	file << "Date =" << e.date << endl << "Time=" << e.time << endl << "Name = " << e.name << endl << "Note" << e.note << endl;
	file.close();
	system("pause");
	system("cls");
	int ch;
	cout << "\n\tADD ANOTHER STORY\t[1]";
	cout << "\n\tExit\t[2]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;
	if (ch == 1)
	{
		addrecord();
	}
	else
		cout << "\n\n\t\t\t\tThank you";
	cout << endl;

}
void viewrecord()
{
	int option;
	cout << "\n\tView previous records\t[1]" << endl;
	cout << "\n\tView new records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;
	switch (option)
	{

	case 1:
		View_previous_records();
		break;
		system("cls");
	case 2:
		View_new_records();
		break;
		system("cls");

	default:
		cout << "invalid entry";
		break;
	}
}


void deleterecord()
{
	int option;
	cout << "\n\tDelete Previous records\t[1]" << endl;
	cout << "\n\tDelete New records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;


	switch (option)
	{

	case 1:
		Delete_Previous_records();
		break;

	case 2:
		Delete_New_records();
		break;
		system("cls");
	default:
		cout << "invalid entry";
		break;
	}

}
void View_previous_records()
{
	string a;
	ifstream in;
	in.open("diaryi.txt");
	while (!in.eof())
	{
		getline(in, a);
		if (a == "")
			cout << "Empty Record" << endl;
		else
			cout << a << endl;
	}

	in.close();

	system("pause");

}

void View_new_records()
{
	string d;
	ifstream in;
	in.open("diaryii.txt");
	while (!in.eof())
	{
		getline(in, d);
		if (d == "")
			cout << "Empty records" << endl;
		else
			cout << d << endl;

	}

	in.close();
	system("pause");
}
void Delete_Previous_records()
{


	string a;
	ofstream in;
	in.open("diaryi.txt", ios::trunc);
	while (in)
	{
		in << "";
		break;
	}
	in.close();
}

void Delete_New_records()
{
	string a;
	ofstream in;
	in.open("diaryii.txt", ios::trunc);
	while (in)
	{
		in << "";
		break;
	}
	in.close();
}
void editrecord()
{
	cout << "" << endl;

}
  




void menu2()
{
	int ch;
	cout << "\n\n\t\tMAIN MENU:";
	cout << "\n\n\tADD STORY\t[1]";
	cout << "\n\tVIEW STORY\t[2]";
	cout << "\n\tEDIT STORY\t[3]";
	cout << "\n\tDELETE STORY\t[4]";
	cout << "\n\tEDIT PASSWORD\t[5]";
	cout << "\n\tEXIT\t\t[6]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;

	switch (ch)
	{
	case 1:
		addrecord2();
		break;
	case 2:
		viewrecord2();
		break;
	case 3:
		editrecord2();
		break;
	case 4:
		deleterecord2();
		break;
	case 5:
		cout << "\n\n\t\t\t\tThank you for using the software " << endl;
		cout << endl;
		break;
	default:
		cout << "\n\n\t\t\t\tYou entered wrong choice" << endl;
		cout << "\n\t\t\t\tPress any key to try again" << endl;
		system("PAUSE");
		system("CLS");
		menu2();
		break;
	}
}
void addrecord2()
{
	int option;
	cout << "\n\tPrevious records\t[1]" << endl;
	cout << "\n\tAdd new records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;
	switch (option)
	{

	case 1:
		previousrecord2();
		break;
		system("cls");
	case 2:
		add_new_record2();
		break;
		system("cls");

	default:
		cout << "invalid entry";
		break;
	}
}
struct addrecord
{
	char date[10];
	char time[10];
	char name[20];
	char note[400];
};
void previousrecord2()
{
	struct addrecord e;
	ofstream file;
	file.open("diaryiii.txt", ios::app | ios::out);
	system("cls");
	cout << "\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
	cin.ignore();
	cin.getline(e.date, 10);

	cout << "\n\tENTER TIME:[hh:mm]:";
	cin.ignore();
	cin.getline(e.time, 10);

	cout << "\tENTER NAME:";
	cin >> e.name;
	cout << "\n\tEXPLAIN THE INCIDENT :";
	cin.ignore();
	cin.getline(e.note, 400);
	file << "Date =" << e.date << endl << "Time=" << e.time << endl << "Name = " << e.name << endl << "Note" << e.note << endl;
	file.close();
	system("pause");
	system("cls");
	int ch;
	cout << "\n\tADD ANOTHER STORY\t[1]";
	cout << "\n\tExit\t[2]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;
	if (ch == 1)
	{
		addrecord2();
	}
	else
		cout << "\n\n\t\t\t\tThank you";
	cout << endl;

}

void add_new_record2()
{
	struct addrecord e;
	ofstream file;
	file.open("diaryiv.txt", ios::app | ios::out);
	system("cls");
	cout << "\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
	cin.ignore();
	cin.getline(e.date, 10);

	cout << "\n\tENTER TIME:[hh:mm]:";
	cin.ignore();
	cin.getline(e.time, 10);

	cout << "\tENTER NAME:";
	cin >> e.name;
	cout << "\n\tEXPLAIN THE INCIDENT :";
	cin.ignore();
	cin.getline(e.note, 400);
	file << "Date =" << e.date << endl << "Time=" << e.time << endl << "Name = " << e.name << endl << "Note" << e.note << endl;
	file.close();
	system("pause");
	system("cls");
	int ch;
	cout << "\n\tADD ANOTHER STORY\t[1]";
	cout << "\n\tExit\t[2]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;
	if (ch == 1)
	{
		addrecord2();
	}
	else
		cout << "\n\n\t\t\t\tThank you";
	cout << endl;

}
void viewrecord2()
{
	int option;
	cout << "\n\tView previous records\t[1]" << endl;
	cout << "\n\tView new records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;
	switch (option)
	{

	case 1:
		View_previous_records2();
		break;
		system("cls");
	case 2:
		View_new_records2();
		break;
		system("cls");

	default:
		cout << "invalid entry";
		break;
	}
}


void deleterecord2()
{
	int option;
	cout << "\n\tDelete Previous records\t[1]" << endl;
	cout << "\n\tDelete New records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;


	switch (option)
	{

	case 1:
		Delete_Previous_records2();
		break;

	case 2:
		Delete_New_records2();
		break;
		system("cls");
	default:
		cout << "invalid entry";
		break;
	}

}
void View_previous_records2()
{
	string a;
	ifstream in;
	in.open("diaryiii.txt");
	while (!in.eof())
	{
		getline(in, a);
		if (a == "")
			cout << "Empty Record" << endl;
		else
			cout << a << endl;
	}

	in.close();

	system("pause");

}

void View_new_records2()
{
	string d;
	ifstream in;
	in.open("diaryiv.txt");
	while (!in.eof())
	{
		getline(in, d);
		if (d == "")
			cout << "Empty records" << endl;
		else
			cout << d << endl;

	}

	in.close();
	system("pause");
}
void Delete_Previous_records2()
{


	string a;
	ofstream in;
	in.open("diaryiii.txt", ios::trunc);
	while (in)
	{
		in << "";
		break;
	}
	in.close();
}

void Delete_New_records2()
{
	string a;
	ofstream in;
	in.open("diaryiv.txt", ios::trunc);
	while (in)
	{
		in << "";
		break;
	}
	in.close();
}
void editrecord2()
{
	cout << "" << endl;

}






void menu3()
{
	int ch;
	cout << "\n\n\t\tMAIN MENU:";
	cout << "\n\n\tADD STORY\t[1]";
	cout << "\n\tVIEW STORY\t[2]";
	cout << "\n\tEDIT STORY\t[3]";
	cout << "\n\tDELETE STORY\t[4]";
	cout << "\n\tEDIT PASSWORD\t[5]";
	cout << "\n\tEXIT\t\t[6]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;

	switch (ch)
	{
	case 1:
		addrecord3();
		break;
	case 2:
		viewrecord3();
		break;
	case 3:
		editrecord3();
		break;
	case 4:
		deleterecord3();
		break;
	case 5:
		cout << "\n\n\t\t\t\tThank you for using the software " << endl;
		cout << endl;
		break;
	default:
		cout << "\n\n\t\t\t\tYou entered wrong choice" << endl;
		cout << "\n\t\t\t\tPress any key to try again" << endl;
		system("PAUSE");
		system("CLS");
		menu3();
		break;
	}
}
void addrecord3()
{
	int option;
	cout << "\n\tPrevious records\t[1]" << endl;
	cout << "\n\tAdd new records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;
	switch (option)
	{

	case 1:
		previousrecord3();
		break;
		system("cls");
	case 2:
		add_new_record3();
		break;
		system("cls");

	default:
		cout << "invalid entry";
		break;
	}
}
struct addrecord
{
	char date[10];
	char time[10];
	char name[20];
	char note[400];
};
void previousrecord3()
{
	struct addrecord e;
	ofstream file;
	file.open("diaryv.txt", ios::app | ios::out);
	system("cls");
	cout << "\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
	cin.ignore();
	cin.getline(e.date, 10);

	cout << "\n\tENTER TIME:[hh:mm]:";
	cin.ignore();
	cin.getline(e.time, 10);

	cout << "\tENTER NAME:";
	cin >> e.name;
	cout << "\n\tEXPLAIN THE INCIDENT :";
	cin.ignore();
	cin.getline(e.note, 400);
	file << "Date =" << e.date << endl << "Time=" << e.time << endl << "Name = " << e.name << endl << "Note" << e.note << endl;
	file.close();
	system("pause");
	system("cls");
	int ch;
	cout << "\n\tADD ANOTHER STORY\t[1]";
	cout << "\n\tExit\t[2]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;
	if (ch == 1)
	{
		addrecord3();
	}
	else
		cout << "\n\n\t\t\t\tThank you";
	cout << endl;

}

void add_new_record3()
{
	struct addrecord e;
	ofstream file;
	file.open("diaryvi.txt", ios::app | ios::out);
	system("cls");
	cout << "\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
	cin.ignore();
	cin.getline(e.date, 10);

	cout << "\n\tENTER TIME:[hh:mm]:";
	cin.ignore();
	cin.getline(e.time, 10);

	cout << "\tENTER NAME:";
	cin >> e.name;
	cout << "\n\tEXPLAIN THE INCIDENT :";
	cin.ignore();
	cin.getline(e.note, 400);
	file << "Date =" << e.date << endl << "Time=" << e.time << endl << "Name = " << e.name << endl << "Note" << e.note << endl;
	file.close();
	system("pause");
	system("cls");
	int ch;
	cout << "\n\tADD ANOTHER STORY\t[1]";
	cout << "\n\tExit\t[2]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;
	if (ch == 1)
	{
		addrecord3();
	}
	else
		cout << "\n\n\t\t\t\tThank you";
	cout << endl;

}
void viewrecord3()
{
	int option;
	cout << "\n\tView previous records\t[1]" << endl;
	cout << "\n\tView new records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;
	switch (option)
	{

	case 1:
		View_previous_records3();
		break;
		system("cls");
	case 2:
		View_new_records3();
		break;
		system("cls");

	default:
		cout << "invalid entry";
		break;
	}
}


void deleterecord3()
{
	int option;
	cout << "\n\tDelete Previous records\t[1]" << endl;
	cout << "\n\tDelete New records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;


	switch (option)
	{

	case 1:
		Delete_Previous_records3();
		break;

	case 2:
		Delete_New_records3();
		break;
		system("cls");
	default:
		cout << "invalid entry";
		break;
	}

}
void View_previous_records3()
{
	string a;
	ifstream in;
	in.open("diaryv.txt");
	while (!in.eof())
	{
		getline(in, a);
		if (a == "")
			cout << "Empty Record" << endl;
		else
			cout << a << endl;
	}

	in.close();

	system("pause");

}

void View_new_records3()
{
	string d;
	ifstream in;
	in.open("diaryvi.txt");
	while (!in.eof())
	{
		getline(in, d);
		if (d == "")
			cout << "Empty records" << endl;
		else
			cout << d << endl;

	}

	in.close();
	system("pause");
}
void Delete_Previous_records3()
{


	string a;
	ofstream in;
	in.open("diaryv.txt", ios::trunc);
	while (in)
	{
		in << "";
		break;
	}
	in.close();
}

void Delete_New_records3()
{
	string a;
	ofstream in;
	in.open("diaryvi.txt", ios::trunc);
	while (in)
	{
		in << "";
		break;
	}
	in.close();
}
void editrecord3()
{
	cout << "" << endl;

}


void menu4()
{
	int ch;
	cout << "\n\n\t\tMAIN MENU:";
	cout << "\n\n\tADD STORY\t[1]";
	cout << "\n\tVIEW STORY\t[2]";
	cout << "\n\tEDIT STORY\t[3]";
	cout << "\n\tDELETE STORY\t[4]";
	cout << "\n\tEDIT PASSWORD\t[5]";
	cout << "\n\tEXIT\t\t[6]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;

	switch (ch)
	{
	case 1:
		addrecord4();
		break;
	case 2:
		viewrecord4();
		break;
	case 3:
		editrecord4();
		break;
	case 4:
		deleterecord4();
		break;
	case 5:
		cout << "\n\n\t\t\t\tThank you for using the software " << endl;
		cout << endl;
		break;
	default:
		cout << "\n\n\t\t\t\tYou entered wrong choice" << endl;
		cout << "\n\t\t\t\tPress any key to try again" << endl;
		system("PAUSE");
		system("CLS");
		menu();
		break;
	}
}
void addrecord4()
{
	int option;
	cout << "\n\tPrevious records\t[1]" << endl;
	cout << "\n\tAdd new records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;
	switch (option)
	{

	case 1:
		previousrecord4();
		break;
		system("cls");
	case 2:
		add_new_record4();
		break;
		system("cls");

	default:
		cout << "invalid entry";
		break;
	}
}
struct addrecord
{
	char date[10];
	char time[10];
	char name[20];
	char note[400];
};
void previousrecord4()
{
	struct addrecord e;
	ofstream file;
	file.open("diaryvii.txt", ios::app | ios::out);
	system("cls");
	cout << "\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
	cin.ignore();
	cin.getline(e.date, 10);

	cout << "\n\tENTER TIME:[hh:mm]:";
	cin.ignore();
	cin.getline(e.time, 10);

	cout << "\tENTER NAME:";
	cin >> e.name;
	cout << "\n\tEXPLAIN THE INCIDENT :";
	cin.ignore();
	cin.getline(e.note, 400);
	file << "Date =" << e.date << endl << "Time=" << e.time << endl << "Name = " << e.name << endl << "Note" << e.note << endl;
	file.close();
	system("pause");
	system("cls");
	int ch;
	cout << "\n\tADD ANOTHER STORY\t[1]";
	cout << "\n\tExit\t[2]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;
	if (ch == 1)
	{
		addrecord4();
	}
	else
		cout << "\n\n\t\t\t\tThank you";
	cout << endl;

}

void add_new_record4()
{
	struct addrecord e;
	ofstream file;
	file.open("diaryviii.txt", ios::app | ios::out);
	system("cls");
	cout << "\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
	cin.ignore();
	cin.getline(e.date, 10);

	cout << "\n\tENTER TIME:[hh:mm]:";
	cin.ignore();
	cin.getline(e.time, 10);

	cout << "\tENTER NAME:";
	cin >> e.name;
	cout << "\n\tEXPLAIN THE INCIDENT :";
	cin.ignore();
	cin.getline(e.note, 400);
	file << "Date =" << e.date << endl << "Time=" << e.time << endl << "Name = " << e.name << endl << "Note" << e.note << endl;
	file.close();
	system("pause");
	system("cls");
	int ch;
	cout << "\n\tADD ANOTHER STORY\t[1]";
	cout << "\n\tExit\t[2]";
	cout << "\n\n\tENTER YOUR CHOICE:";
	cin >> ch;
	if (ch == 1)
	{
		addrecord4();
	}
	else
		cout << "\n\n\t\t\t\tThank you";
	cout << endl;

}
void viewrecord4()
{
	int option;
	cout << "\n\tView previous records\t[1]" << endl;
	cout << "\n\tView new records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;
	switch (option)
	{

	case 1:
		View_previous_records4();
		break;
		system("cls");
	case 2:
		View_new_records4();
		break;
		system("cls");

	default:
		cout << "invalid entry";
		break;
	}
}





void deleterecord4()
{
	int option;
	cout << "\n\tDelete Previous records\t[1]" << endl;
	cout << "\n\tDelete New records\t[2] " << endl;
	cout << "Enter your option" << endl;
	cin >> option;


	switch (option)
	{

	case 1:
		Delete_Previous_records4();
		break;

	case 2:
		Delete_New_records4();
		break;
		system("cls");
	default:
		cout << "invalid entry";
		break;
	}

}
void View_previous_records4()
{
	string a;
	ifstream in;
	in.open("diaryvii.txt");
	while (!in.eof())
	{
		getline(in, a);
		if (a == "")
			cout << "Empty Record" << endl;
		else
			cout << a << endl;
	}

	in.close();

	system("pause");

}

void View_new_records4()
{
	string d;
	ifstream in;
	in.open("diaryviii.txt");
	while (!in.eof())
	{
		getline(in, d);
		if (d == "")
			cout << "Empty records" << endl;
		else
			cout << d << endl;

	}

	in.close();
	system("pause");
}
void Delete_Previous_records4()
{


	string a;
	ofstream in;
	in.open("diaryvii.txt", ios::trunc);
	while (in)
	{
		in << "";
		break;
	}
	in.close();
}

void Delete_New_records4()
{
	string a;
	ofstream in;
	in.open("diaryviii.txt", ios::trunc);
	while (in)
	{
		in << "";
		break;
	}
	in.close();
}
void editrecord4()
{
	cout << "" << endl;

}

	