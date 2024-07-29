#include<iostream>
#include<string>
using namespace std;
string getfullname(string,string);
int main()
{
    string firstname= "rahul";
    string lastname= " kamal";
    string fullname=getfullname(firstname,lastname);
    char latter=firstname[1];
    string nickname;
    cout<<" enter nick name:";
    getline(cin,nickname);
    int length = firstname.length();
    int result=firstname.compare(lastname);
    firstname.append(lastname);
    firstname="rahul";
    string names[]={"rahul","ravi","peter"};
    return 0;
}
string getfullname(string firstname,string lastname)
{
    return 0;
}
