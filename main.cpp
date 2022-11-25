#include <iostream>
using namespace std;

int main() {
   int n=0,a=1,b=1,c=0;
   cin>>n;
      if(n>=2){
         cout<<a<<endl<<b<<endl;
         for(int i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
            cout<<c<<endl;
         }
      }
      else{
       cout<<"error"<<endl;
   }
   return 0;
}
