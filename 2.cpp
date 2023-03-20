#include <iostream>
#include <unistd.h>

using namespace std;
int main() {
 int h,m,s,a,i=0;

 cout<<"enter hour:";
 cin>>h;
 cout<<"enter min:";
 cin>>m;
 cout<<"enter sec:";
 cin>>s;

  

      
 
while(i==0)
{
   
   
     system("clear"); 
     
    cout<<h<<":"<<m<<":"<<s<<"\n";

   usleep(1000);

    if(s>59)
    {
        s=0;
        m++;

    }
    else if(s<=59)
    {
        s++;

    }

     if(m>59)
    {
        m=0;
        h++;

    }
    
    if(h>23)
    {
        h=0;

    }
   
}

 
    return 0;
}

