#include<bits/stdc++.h>

int main()
{
    int n,x;
    std::cin>>n>>x;
    std::cout<<std::min(n-x,x-1)<<std::endl;
}