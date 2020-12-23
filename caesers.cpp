#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    cout<<"\n This assignment Of Caeser Cipher is Done By Enab Rasool Rollno 18045112010\n";
    char xyz[100],code[100];
    int index[100],key=15;
    cout<<"\n Enter String\n ";
    cin>>xyz;
    cout<<"\n The Key is :"<<key;
    char abc[52]={'a','b','c','d','e','f','g','h','i','j','k',
    'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cout<<"\n Encrypting the COde: ";
    for(int i=0;i<=strlen(xyz);i++)
    {
        for(int j=0;j<52;j++)
        {
            if(xyz[i]==abc[j])
            {
                index[i]=((j+key)%52);
                break;
            }
        }
    }
    cout<<"\n Cipher text : \n ";
    for(int i=0;i<strlen(xyz);i++)
    {
        code[i]=abc[index[i]];
        cout<<"\t"<<code[i];
    }
    cout<<"\n Decrypting the Code: ";
    for(int i=0;i<=strlen(xyz);i++)
    {
        for(int j=0;j<52;j++)
        {
            if(code[i]==abc[j])
            {
                index[i]=((j-key+52)%52);
                break;
            }
        }
    }
    cout<<"\n Decrypted Code: ";
     for(int i=0;i<strlen(xyz);i++)
    {

        cout<<abc[index[i]];
    }
    return 0;
}
