#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User{
  private:
    string userName, password;
  public:
    User(string name, string pass){
      userName = name;
      password = pass;
      }
    string getUsername(){
      return userName;
    };
    string getPassword(){
      return password;
    }
};

class UserManager{
  private:
    vector<User>users;//create object of vectors
  public:
    void registerUser(){
      string userName,password;
      cout<<"Enter Username: ";
      cin>>userName;
      cout<<"Enter Password: ";
      cin>>password;

      User newUser(userName, password);
      users.push_back(newUser);
      cout<<"Registered Successfully..."<<endl;
    }

    //LogIn
    bool loginUser(string name,string password){
      for(int i = 0; i<users.size();i++){
        if(users[i].getUsername()==name && users[i].getPassword()==password){
          cout<<"Login Successfully";
          return true;
        }
      }
      cout<<"Invalid";
      return false;
    }
};

main(){
  UserManager manage;

  int op;
  do{
    cout<<"\t\t Welcome"<<endl;
    cout<<"\t\t 1. Register"<<endl;
    cout<<"\t\t 2. Login"<<endl;
    cout<<"\t\t 3. Show list"<<endl;
    cout<<"\t\t 4. Search User"<<endl;
    cout<<"\t\t 5. Delete User"<<endl;
    cout<<"\t\t 6. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>op;
  
  
  switch(op){
    case 1:
      manage.registerUser();
      break;
    case 2:
      string username, password;
      cout<<"Enter Username: ";
      cin>>username;
      cout<<"Enter Password: ";
      cin>>password;
      manage.loginUser(username, password);
  }}while(true);
  cin>>op;
}