#include<bits/stdc++.h>


int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;

    if(A+B==2*C||B+C==2*A||C+A==2*B)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}