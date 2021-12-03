#include <iostream>
#include<string>
using namespace std;
void dia(string x){
    cout << x <<": ";
}
int main() {
   string name,stdid,movie,date,meme;
   int n1,n2;
   cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
   cout << "?????: ";
   getline(cin,name);
   cout << "Fahsai: Wow!!! " << name << " is a really cool name."<<endl;
   cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<<endl; 
   dia(name);
   cin >> stdid;
   n1 = stdid[0];
   n2 = stdid[1];
   cout << "Fahsai: I think you may be GEAR "<< ((n1-48)*10+(n2-48))-12 <<". I have a free movie ticket for you."<<endl;
   cout << "Fahsai: Let's go to the cinema together!!!"<<endl;
   cout << "Fahsai: What movie do you want to watch?"<<endl;
   dia(name);
   cin.ignore();
   getline(cin,movie);
   cout << "Fahsai: So....which day are you free to go with me?"<<endl;
   dia(name);
   getline(cin,date);
   cout << "Fahsai: "<<date<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you."<<endl;
   dia(name);
   getline(cin,meme);
   cout << "Fahsai: 555+ see you "<<date<<". Bye Bye \\(^ ^)/";
   return 0;
}
