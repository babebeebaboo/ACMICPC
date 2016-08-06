//BABE
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100];
    char adown[100];
    char aup[100];
    int numban;
    char ban[9];

    cin>>a;
    strcpy(aup,a);
    strcpy(adown,a);
    cin>>numban;
    int lena=strlen(a);
    for (int i=0; i<numban; i++)cin>>ban[i];

    for (int i=0; i<lena; i++)
    {
        for (int j=0; j<numban; j++)
        {
            if(adown[i] == ban[j])
            {
                adown[i]-=1;
                if(i+1<lena)adown[i+1]='9';
            }
        }
    }
    for (int i=0; i<lena; i++)
    {
        for (int j=0; j<numban; j++)
        {
            if(aup[i] == ban[j])
            {
                aup[i]+=1;
                if(i+1<lena)aup[i+1]='0';
            }
        }
    }
    if(adown[0]=='0')cout<<"impossible"<<endl;
    else cout<<adown<<endl;
    cout<<aup;
}
