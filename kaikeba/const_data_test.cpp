#include <iostream>
#include <string>
using namespace std;

int a=1;
int &p=a;

int main(){
    printf("%d %d",&a,a);
    printf("%d %d",&p,p);
    // cout<<&p<<" "<<p<<endl;
}