#include<bits/stdc++.h>


int main()
{
    int n;
    std::cin>>n;
    std::vector<int> a(n+1);

    a[1] = 0;
    a[2] = 0;
    a[3] = 1;

    for(int i=4;i<=n;i++)
    {
        a[i] = (a[i-1]+a[i-2]+a[i-3])%10007;
    }

    std::cout<<a[n]<<std::endl;
}