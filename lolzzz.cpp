#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main(){
   while(true){
   system("CLS");
   int ch,i,n,num,fact,fac,sum,rem;
   char choice;
   cout<<" __________________________________________________"<<endl;
   cout<<"|____________________MENU DRIVEN___________________|"<<endl;
   cout<<"|   1.prime check                                  |"<<endl;
   cout<<"|   2.armstrong check                              |"<<endl;
   cout<<"|   3.factorial                                    |"<<endl;
   cout<<"|__________________________________________________|"<<endl;
   cout<<"enter any choice : ";
   cin>>ch;
   cout<<"enter any number : ";
   cin>>n;
 
   switch(ch){
        case 1: fact=0;
               for(i=1;i<=n;i++){
                    if(n%i==0){
                         fact++;
                    }
               }
               if(fact==2){
                    cout<<n<< "is a prime number ";
               }
               else{
                    cout<<n<< "is not a prime number ";
               }
               break;
          case 2: num=n;
           sum=0,rem;
          while(num>0){
               rem=num%10;
               num=num/10;
               sum=sum+pow(rem,3);
          }
          if(sum==n){
               cout<<n<< "is a armstrong number  ";
          }
          else{
                 cout<<n<< "is not a armstrong number ";
          }
          break;
          case 3: fac=1;
          for(i=1;i<=n;i++){
               fac=fac*i;
          }
          cout<<"the factorial of "<<n<<"is "<<fac;
          break;
   }
   cout<<endl;
   cout<<"do you wish to continue?(y/n)";
   cin>>choice;
   if(choice=='n' || choice=='N'){
        exit(0);
   }
   }
}
 