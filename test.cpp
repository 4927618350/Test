#include<iostream>
using namespace std;
class Lib
{
public:
    void _system(const char str[]);
};
void Lib::_system(const char str[])
{
    system(str);
}
extern "C" 
{
    Lib obj;
    void _system(const char str[]) 
    {
        obj._system(str);
    }
}
// int main()
// {
//     Lib obj;
//     obj._system("pause");
//     system("pause");
//     return 0;
// }