/*#include<iostream>
 using namespace std;
 int main ()
{
   int trinum =0;

    for(int i=1; i<=200; i++){
       trinum = trinum+i;
    }
     cout<<"the trinum is:"<<trinum<<endl;
     return 0;

}
*/
/*#include<iostream>
 using namespace std;
 int main ()
 {
     int i=1;
    int trinum =0;
    trinum=trinum+i;
     do{
        cout<<"the trinum is:"<<trinum<<endl;
        i++;
     } while(i<200);


}*/
/*
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number :";
    cin>>num;

    for(int i=0; i<=200; i++)
    {
        cout<<i<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main()
{

    int i=0;
    while(i<=200)
    {
        cout<<i<<endl;
        i++;
    }

    return 0;
}*/


//reverse of an integers.
/*#include <iostream>
using namespace std;
int main ()
{
    int num,right_digit;
    cout<<"enter the number :";
    cin>>num;

    while(num !=0){
        right_digit=num%10;
        cout<<right_digit;
        num=num/10;
    }


    return 0;
}*/
/*#include<iostream>
using namespace std;

int main()
{
    int i=0;

    do
    {
        cout<<i<<endl;
        ++i;
    }
    while(i<=10);

    return 0;
}*/
/*#include <stdio.h>
 int main ()
 {
 char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
 int i;
 for ( i = 0; i < 6; ++i )
 cout<<word[i]);
 return 0;
 }*/

 /*#include<iostream>
 using namespace std;

 int main()
 {
     int num;
     cout<<"enter the number for test :";
     cin>> num;

     if(num%2==0)
     {
         cout<<"even"<<endl;
     }
     else
        cout<<"odd";

     return 0;
 }*/


 #include<iostream>
 using namespace std;
 int main()
 {
     int year;
     cout<<"enter any year :";
     cin>>year; //vondho re vondho

     if((year%4==0 && year%100!=0) || year%400==0){
        cout<<"is a leap year";
     }
     else
        cout<<"is not a leap year";

     return 0;
 }





