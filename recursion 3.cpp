#include<iostream>
#include<string>
using namespace std;
void print_rev(char*str)
{
    if(*str!='\0')
    {
        print_rev(str*1);
        cout<<*str;

    }
}
int main()
{
    char str[20];
    cout<<"Enter a string:";
    cin>>str;
    print_rev(str);
    
}
