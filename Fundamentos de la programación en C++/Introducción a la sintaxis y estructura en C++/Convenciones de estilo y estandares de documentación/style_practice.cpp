#include<iostream>
using namespace std;
class calc{
public:
int x,y;
void domath(){
x=10;y=20;
int res=x+y;
cout<<"result is "<<res<<endl;
if(res>25){
cout<<"big number"<<endl;}
else{cout<<"small number"<<endl;
}
}
};
int main(){
calc c;
c.domath();
return 0;
}
