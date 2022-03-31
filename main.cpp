#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int fact(int n)
{
    int ans=1;
    if (n==0 || n==1)
    return 1;
    else for(int k=1; k<=n; k++)
        ans = ans*k ;
    return ans;
}
double EXP (int x)
{
    double ans = 1;
    for(int i=1; i<=15; i++)
    {ans = ans + (pow(x,i)/fact(i));
    }
    return ans;
}
int main()
{
    int x;
    cin>>x;
    cout<<setprecision(20)<<EXP(x) <<endl;
    return 0;
}
