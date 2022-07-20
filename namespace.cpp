#include <bits/stdc++.h>
using namespace std;

namespace one
{
    void fun()
    {
        cout << "I am namespace one" << endl;
    }
}

namespace two
{
    void fun2()
    {
        cout << "I am namespace two" << endl;
    }
}

using namespace one;
// using namespace two;
int main()
{
    fun();

    return 0;
}