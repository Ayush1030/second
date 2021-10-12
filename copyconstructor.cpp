#include<iostream>
using namespace std;
class qwe{
int a;
int b;
public:
qwe(int x , int y){
a=x;
b=y;
}
qwe(qwe&ref){//copy krne ke lie ref variable use hua iska syntax yaad krna must hai//
    a=ref.a;
    b=ref.b;
}
void show(){
    cout<<a<<endl;
    cout<<b;
}
};
int main(){
    qwe obj(10,20);
    obj.show();
    qwe obj2=obj;//yah contents copy hue
    cout<<endl;
    obj2.show();
}