#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name , movie , day ,WTF;
	int ID;
	
	cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl<<"?????: ";
	getline(cin,name);
	cout<<"Fahsai: Wow!!! "<<name<< " that is a really cool name. \n"<<"Fahsai: I think you are Engineering student. What is your student ID?\n"<<name<<": ";
	cin>>ID;
	cin.ignore();
	cout<<"Fahsai: I think you may be GEAR "<<ID/10000000 -12<<". I have a free movie tickets for you.\n"<<"Fahsai: Let's go to cinema together!!!\n"<<"Fahsai: What movie do you want to watch?";
	cout<<endl<<name<<": ";
	getline(cin,movie);
	cout<<"Fahsai: So....which day are you free to go with me?\n";
	cout<<name<<": ";
	getline(cin,day);
	cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watch "<<movie<<" with you.\n";
	cout<<name<<": ";
	getline(cin,WTF);
	cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \(^ ^)/";

return 0;
	
}
