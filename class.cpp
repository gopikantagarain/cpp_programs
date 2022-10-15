#include<iostream>
using namespace std;
class calculator {
    public:
    int a,b;
    void add()
    {
        cout<<"enter two numbers:";
        cin>>a>>b;
        int c=a+b;
        cout<<"the sum is:"<<c;

    }
};
int main() {
    calculator c1,c2;
    c1.add();
    return 0;
}