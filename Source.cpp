#include <Windows.h>
#include <tchar.h>
#include <iostream> 
#include <string>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include <dirent.h>
#include <iterator>

using namespace std;
void deleteClient()
{
	string name, email, temp, line,blr;
	int id, age, money;
	cout << "Enter ID number: ";
	char y;
	while (true)
	{
		cin >> id;
		string id2 = to_string(id);
		if (id2.size() != 6)
			cout << "Please enter a valid number" << endl;
		else
			break;
			}
	string id2 = to_string(id);
	id2.append(".txt");
	ifstream takedata(id2);
     takedata >> blr >> id >> email >> age >> name >> money;
		ofstream savedata(id2);
		savedata << "De" << endl << "" << endl << "" <<endl << "" << endl << "" << endl << "" << endl;
		savedata.close();
	while (true)
	{
		cout << "Press x to return to menu" << endl;
		cin >> y;
		if (y == 'x')break;
	}
}
void transfer()
{
	long long id, age, money;
	char y;
	string blr, email, name,h;
	cout << "Enter Account that Take money from : ";
	cin >> id;
	h = to_string(id);
	h.append(".txt");
	ifstream takedata(h);
	takedata >> blr >> id >> email >> age >> name >> money;
	
		
		int num;
		cout << "Your account has " << money << " Pound" << endl << endl;
		while (true)
		{
			cout << "Enter the money you want"<<endl;
			cin >> num;
			
			if (num > money){
				cout << "mainf3sh ts7b ya fandam" << endl;

				cout << "Your account has " << money << " Pound" << endl << endl;
			}
			else
			{
				 num;
				ofstream savedata(h);
				savedata << blr << endl << id << endl << email << endl << age << endl << name << endl << money - num << endl;
				cout << "This Account has " << money -num << " Pound " << endl;
				savedata.close();
				break;
			}
		
		takedata.close();
	}
	cout << "Enter your Account to Put money in : "<<endl;
	
	cin >> id;
	 h = to_string(id);
	h.append(".txt");
	ifstream take(h);
	take >> blr >> id >> email >> age >> name >> money;
	
		ofstream save(h);
		save<< blr << endl << id << endl << email << endl << age << endl << name << endl << money + num << endl;
		cout << "This Account has " << money + num << " Pound " << endl;
		save.close();
	
	take.close();
	while (true)
	{
		cout << "Press x to return to menu" << endl;
		cin >> y;
		if (y == 'x')break;
	}

}
void modify(string id2,int id)
{
	string name, email,blr,so,line;
	long long age, money;
	char num,y;
	ifstream takedata(id2);
	takedata >> blr >> id >> email >> age >> name >> money;
	system("cls");
	cout << "                What do you want to modify" << endl<<endl;
	cout << " Name          press 1" << endl<<endl;
	cout << " Email         press 2" << endl<<endl;
	cout << " Age           press 3" << endl<<endl;
	string x;
	cin >> num;
	system("cls");
	switch (num)
	{
	case '1':
	{
				cout << "please enter your new name " << endl;
				cin >> x;//7mada

					ofstream save(id2);
					save << blr << endl << id << endl << email << endl << age << endl << x << endl << money << endl;
					save.close();
								break;
	}
	case '2':
	{
				string email2;
				cout << "please enter your new Email " << endl;
				cin >> email2;

				{
					ofstream save(id2);
					save << blr << endl << id << endl << email2 << endl << age << endl << name << endl << money << endl;
					save.close();
				}
				break;
	}
	case '3':
	{
				int age2;
				cout << "please enter your Age " << endl;
				cin >> age2;
						
					ofstream save(id2);
					save << blr << endl << id << endl << email << endl << age2 << endl << name << endl << money << endl;
					save.close();
				
	}

	}
	while (true)
	{
		cout << "Press x to return to menu" << endl;
		cin >> y;
		if (y == 'x')break;
	}

	}
void withdraw(string id2, int id)
{
	string name, email, blr;
	char f;
	long long age, money,y;
	ifstream takedata(id2);
	takedata >> blr >> id >> email >> age >> name >> money;
		cout << "Your money = " << money << " Pound" << endl<<endl;
		cout << "enter number to withdrew" << endl;
		ofstream savedata(id2);
		while (true)
		{
			cin >> y;
			if (y > money){
				cout << "mainf3sh ts7b ya fandam" << endl;

				cout << "your account = " << money << endl;
			}
			else
			{
				savedata << blr << endl << id << endl << email << endl << age << endl << name << endl << money - y << endl;
				cout << "your Account = " << money - y << endl;
				break;
			}
		}
		while (true)
		{
			cout << "Press x to return to menu" << endl;
			cin >> f;
			if (f == 'x')break;
		}
	}
void secure(string h,int *p)
{
	string name;
	h.append(".txt");
	ifstream takedata(h);
	while (takedata >>name)
	{
		if (name.size()>2)
		{
			*p = 1; // lw el *p zad yeb2a el x hayzeed w kda ykoon el esm mtta5ed
		}
	}
}
void deposite(string id2,int id)
{
	long long age, money;
		string name, email,blr;	
		char y;
	long long a;
	cout << "enter number to deposite" << endl;
	cin >> a;
	ifstream takedata(id2);
	takedata >> blr >> id >> email >> age >> name >> money;
	
		ofstream savedata(id2);
		savedata <<blr<<endl<< id << endl << email<< endl << age << endl << name << endl << money + a << endl;
		savedata.close();
	
	cout << "Total Money is " << money + a << endl;
	takedata.close();
	while (true)
	{
		cout << "Press x to exit" << endl;
		cin >> y;
		if (y == 'x')break;
	}
}
void listAll()
{
	int s = 0, m = 0;
	DIR *dp;
	struct dirent *ep;
	string j, line,y;
	ifstream inn;
	const char *dirname = "E:\\UnderStand\\Lot Of Functions\\Lot Of Functions";
	dp = opendir(dirname);
	if (dp != NULL)
	{
		while (ep = readdir(dp))
		{
			j = ep->d_name;
			ifstream take(j);
			while (getline(take, line))
			{
				if ((line == "--------------"))
				{
					s++;

				}
				if (s > 0)
				{
					line += "\n";
					cout << line;
				}
						}
			s = 0;
		}
			}
	while (true)// dy lazmtha enno yestanna w myerga3sh 3al main 3atool 
	{
		cout << "Press x to return to menu" << endl;
		cin >> y;
		if (y == "x")break;
	}
}
void input()
{
	string name, email, blr = "--------------";
	int age;
	int id, money = 0;
	cout << "enter a name : ";
	cin >> name;
	cout << "enter a mail : ";
	cin >> email;
	cout << "enter age : ";
	cin >> age;
	cout << "enter ID : ";
	int x = 0, m = 0, n = 0;
	while (true)// el ID hayod5ol f loop 3shan yshoof lw meta5ed aw mda5al ay arkam walla la2
		//lw kol 7aga tmam hayo5rog 3ady
	{
		int x = 0, m = 0, n = 0;
		int z = 0, s = 0;
		cin >> id;
		string h = to_string(id);
		if ((h.size() != 6))
		{
			cout << " Please enter only 6 nunber  " << endl;
			s++;
		}
		secure(h, &x);// lw el x zaad yeb2a el esm mtta5ed
		if ((h.size() == 6))
		{
			z++;
		}
		 if ((x == 1) && (s == 0))//lw el x zad y2ny ba2a 1 yeb2a hi2ollo mayenfa3sh
			 //kman lazm el "s" b "0" 3shan maykonsh da5al fel rsala elly awalania w yetla3lo rsalteen
		{
			cout << "This number is taken" << endl;
		}
		 else
		 {
			 z++;
		 }
		if (z == 2)break;
	}
	string id2 = to_string(id);//7awlna el rakam l string
	id2.append(".txt");//ednalo extension esmaha".txt" 3shan yeb2a malaf nktb feeh
	ofstream savedata(id2);
	savedata << blr<< endl<< id << endl << email << endl << age << endl << name << endl << money << endl;
	savedata.close();
}
void search(string id2,int id)
{
	string name, email,blr;
	long long age, money;
	char f;
	ifstream takedata(id2);
	takedata >> blr >> id >> email >> age >> name >> money;

		cout << name << endl << email << endl << age << endl << money << endl << endl << endl;
		
	takedata.close();
	cout << "y for deposite " << endl;
	cout << "w for withdraw" << endl;
	cout << "x to return to menu" << endl;
	cin >> f;
	system("cls");
	switch (f)
	{
		case'y':
		{
				   deposite(id2, id);
		}
	case 'x':
	{
				break;
	}
	case 'w':
	{
				withdraw(id2, id);
	}
  }
}
int main()
{
	int id,z=0;
	char x;
	string id2;
	while (true)// el loop dy 3shan awel may5allas ay function mn dool yerga3 3al "main()" tany mayo5rogsh
	{
			system("cls");//dy 3shan ynaddaf el shasha el sooda :D 
			cout << "To input press 1" << endl << endl;
			cout << "to list all press 3 " << endl;
			cout << "to delet Account press 4 " << endl;
			cout << "To search press 2" << endl;
			cout << "to modify press 5 " << endl;
			cout << "to Deosit press 6" << endl;
			cout << "to Transfer press 7" << endl;
			cout << "to Withdraw press 8" << endl << endl;
			cout << "to Exitepress x" << endl << endl << endl;
		cin >> x;
		system("cls");// dy bardo zyaha
	
		if ((x == '2') || (x == '5') || (x == '8') || (x == '6'))
		{

			cout << " Enter Your ID :" << endl;
			cin >> id; // hayda5al rakam
			id2 = to_string(id); // n7awlo l string
			id2.append(".txt"); // n2ollo en da malaf ktaba
		}
			switch (x)
			{
			case '1':
			{
						input();
						break;
			}
			case '3':
			{
						listAll();break;
			}
			case '4':
			{
						deleteClient();break;
		    }
			case '7':
			{
						transfer();break;
			}

			case '2':
			{
						search(id2, id);break;
			}
			case'5':
			{
					   modify(id2, id); break;
			}
			case '6':
			{
						deposite(id2, id);break;
			}
			case '8':
			{
						withdraw(id2, id);break;
			}
			}	
		if (x == 'x')break;// dy el 7ala el wa7eeda elly hayetla3 barra el brnameg feeha
	}
}
