#include<iostream>
using namespace std;

class CMYclass{
    public:
    ~CMYclass(){cout<<"destructor"<< endl;}
};
CMYclass obj;
CMYclass fun(CMYclass sobj){
    return sobj;
}
int main(){
    obj = fun(obj);
    return 0;
}