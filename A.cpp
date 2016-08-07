//BABE
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;
//FUCKING LOT OF COMMENT
int main()
{
    int h1,h2,m2,m1,hmin=0,mmin=0;
    scanf("%d",&h1);
    scanf("%d",&m1);
    scanf("%d",&h2);
    scanf("%d",&m2);
    // DEBUGGER
    /*
    cout<<"h1"<<" "<<h1<<endl;
    cout<<"h2"<<" "<<h2<<endl;
    cout<<"m1"<<" "<<m1<<endl;
    cout<<"m2"<<" "<<m2<<endl;
    */
    //if(h1!=0 && h2!=0 && m2!=0 && m2!=0)
    //  {
    //หมุนไป
    hmin=abs(h2-h1);
//    printf("h0 = %d\n",abs(h2-h1));
    if(abs(h1-h2) < hmin)
    {
        hmin=abs(h1-h2);
//        printf("h1 = %d\n",abs(h1-h2));
    }
    mmin=abs(m2-m1);
//    printf("m0 = %d\n",abs(m2-m1));
    if(abs(m1-m2)<mmin)
    {
        mmin=abs(m1-m2);
//        printf("m1 = %d\n",abs(m1-m2));
    }
    //}
    /*
    if(h1==0)
    {
        h1=24;
        if(abs(h2-h1) < hmin)
        {
            hmin=abs(h2-h1);
        }
        if(abs(h1-h2) < hmin)
        {
            hmin=abs(h1-h2);
        }
    }
    if(m1==0)
    {
        m1=60;
        if(abs(m2-m1) < mmin)
        {
            mmin=abs(m2-m1);
        }
        if(abs(m1-m2) < mmin)
        {
            mmin=abs(m1-m2);
        }
    }
    */
    //หมุนกลับ
    if(abs(h1+24-h2)<hmin)
    {
        hmin = abs(h1+24-h2);
//        hmin--;
//        printf("h2 = %d\n",abs(h1+24-h2));
    }


    if(abs(24-h1+h2)<hmin)
    {
        hmin = abs(24-h1+h2);
//        hmin--;
//        printf("h3 = %d\n",abs(24-h1+h2));
    }



    if(abs(m1+60-m2)<mmin)
    {
        mmin = abs(m1+60-m2);
//        mmin--;
//        printf("m2 = %d\n", abs(m1+60-m2));
    }

    if(abs(60-m1+m2)<mmin)
    {
        mmin = abs(60-m1+m2);
//        mmin--;
//        printf("m3 = %d\n", abs(60-m1+m2));
    }
    cout<<hmin+mmin;
}
