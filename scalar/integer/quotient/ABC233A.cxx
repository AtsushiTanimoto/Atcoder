#include<bits/stdc++.h>


int main()
{
    int X,Y;
    std::cin>>X>>Y;

    if(Y<=X)
    {
        std::cout<<0<<std::endl;
    }
    else
    {
        std::cout<<(Y-X+10-1)/10<<std::endl;
    }
}