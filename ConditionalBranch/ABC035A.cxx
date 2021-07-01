#include<bits/stdc++.h>

int main()
{
    int W,H;
    std::cin>>W>>H;

    if(3*W==4*H)
    {
        std::cout<<"4:3"<<std::endl;
    }
    else
    {
        std::cout<<"16:9"<<std::endl;
    }
}