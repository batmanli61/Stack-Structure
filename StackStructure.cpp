#include<iostream>
#include<stack>
#include<conio.h>
using namespace std;
int main()
{

    int sayi,kalan,i;
    cout<<"\n On tabaninda sayi giriniz:";
    cin>>sayi;
    i=sayi;
    stack <int> s;
    while(i>0)
 {
    
    s.push(i%2);
    i=i/2;
 }
    cout<<sayi<<" sayisinin iki tabanindaki karsiligi : \t";
    while(!s.empty()) 
	{
       int t=s.top();
       cout<< t;
       s.pop();
    }  
cout<<"\n devam icin bir tusa basiniz...";  
getch(); 
}
