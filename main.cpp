#include <iostream>
#define count 256

using namespace std;

int main()
{
    string s;
    cin>>s;

    int hash[count]={0};

    int index=0,currIndex=0;
    char temp;
    while(s[currIndex])
    {
        temp=s[currIndex];
        if(hash[temp]==0)
        {
            hash[temp]=1;
            s[index++]=s[currIndex];
        }
        currIndex++;
    }

    s[index]='\0';
    cout<<s;
    return 0;
}
