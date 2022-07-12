#include<bits/stdc++.h>

int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;

    if(A+B+C<=21)
    {
        std::cout<<"win"<<std::endl;
    }
    else
    {
        std::cout<<"bust"<<std::endl;
    }
}