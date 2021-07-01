#include<bits/stdc++.h>

int main()
{
    int A,D;
    std::cin>>A>>D;
    std::cout<<std::max((A+1)*D,A*(D+1))<<std::endl;
}