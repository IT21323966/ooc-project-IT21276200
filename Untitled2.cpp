#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class User
{
protected:
  string FirstName;
  string LastName;
  string Nic;
  int PhoneNo;
  char SpecializingField[20];
  char Position[30];

public:

User()
{
  FirstName="Viduni";
  LastName="Hereth";
  Nic="2000123456";
  PhoneNo=701855399;
  strcpy(SpecializingField,"Cancer");
  strcpy(Position,"Senior Scientist");
}

void displayDeatails()
{
  cout<<"First Name:"<<FirstName<<endl;
  cout<<"Last Name:"<<LastName<<endl;
  cout<<"Nic:"<<Nic<<endl;
  cout<<"PhoneNo:"<<PhoneNo<<endl;
  cout<<"Specializing Field:"<<SpecializingField<<endl;
  cout<<"Position:"<<Position<<endl;
}

};

class Administrator:public User
{
private:
  int adminid;

public:

Administrator()
{
  FirstName="Sandalu";
  LastName="Samarakoon";
  Nic="2000325010169";
  PhoneNo=768916609;
  strcpy(Position,"Administrator");
  adminid=1000;
}

void addUser(){};
void editUser(){};
void deleteUser(){};

void displayDeatails()
{
  cout<<"First Name:"<<FirstName<<endl;
  cout<<"Last Name:"<<LastName<<endl;
  cout<<"Nic:"<<Nic<<endl;
  cout<<"PhoneNo:"<<PhoneNo<<endl;
  cout<<"Position:"<<Position<<endl;
  cout<<"Admini Id:"<<adminid<<endl;
}

};

int main() 
{
  User u1;
  Administrator a1;

  u1.displayDeatails();
  cout<<"----------------------------------------"<<endl;
  a1.displayDeatails();
}
