#include<bits/stdc++.h>


int main()
{
    int X;
    std::cin>>X;

    if(X<40)
    {
        std::cout<<40-X<<std::endl;
    }
    else if(X<70)
    {
        std::cout<<70-X<<std::endl;
    }
    else if(X<90)
    {
        std::cout<<90-X<<std::endl;
    }
    else
    {
        std::cout<<"expert"<<std::endl;
    }
}