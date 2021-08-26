#include<bits/stdc++.h>

int main()
{
    int K,A,B;
    std::cin>>K>>A>>B;
    
    K = (B/K)*K;

    if(A<=K)
    {
        std::cout<<"OK"<<std::endl;
    }
    else
    {
        std::cout<<"NG"<<std::endl;
    }
}