#include <iostream>
using namespace std;
class A
{
private:
int num;
public:
void setnum(int n)
{
num=n;
}
int getnum()
{
return num;
}
};
int main()
A obj.setnum(10);
cout<<obj.getnum();
return 0;
}



