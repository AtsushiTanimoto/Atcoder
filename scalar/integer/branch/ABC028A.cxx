#include<bits/stdc++.h>

int main()
{
    int N;
    std::cin>>N;

    if(N<=59)
    {
        std::cout<<"Bad"<<std::endl;
    }
    else if(N<=89)
    {
        std::cout<<"Good"<<std::endl;
    }
    else if(N<=99)
    {
        std::cout<<"Great"<<std::endl;
    }
    else
    {
        std::cout<<"Perfect"<<std::endl;
    }
}