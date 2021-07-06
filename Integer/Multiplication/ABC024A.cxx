#include<bits/stdc++.h>

int main()
{
    int A,B,C,K,S,T;
    std::cin>>A>>B>>C>>K>>S>>T;

    if(S+T<K)
    {
        std::cout<<A*S+B*T<<std::endl;
    }
    else
    {
        std::cout<<A*S+B*T-C*(S+T)<<std::endl;
    }
}