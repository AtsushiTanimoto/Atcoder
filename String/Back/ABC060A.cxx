#include<bits/stdc++.h>

int main()
{
    std::string A,B,C;
    std::cin>>A>>B>>C;

    if(A.back()==B[0] && B.back()==C[0])
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
}