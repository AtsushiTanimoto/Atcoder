#include<bits/stdc++.h>

int main()
{
    int A,B;
    std::cin>>A>>B;

    if(std::max(A,B)<=8)
    {
        std::cout<<"Yay!"<<std::endl;
    }
    else
    {
        std::cout<<":("<<std::endl;
    }
}