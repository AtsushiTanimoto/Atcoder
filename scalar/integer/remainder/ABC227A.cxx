#include<bits/stdc++.h>


int main()
{
    int N,K,A;
    std::cin>>N>>K>>A;
    std::cout<<1+(K%N+A-2)%N<<std::endl;
}