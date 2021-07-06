#include<bits/stdc++.h>

int main()
{
    char X,Y;
    std::cin>>X>>Y;

    if(X<Y)
    {
        std::cout<<"<"<<std::endl;
    }
    else if(X==Y)
    {
        std::cout<<"="<<std::endl;
    }
    else
    {
        std::cout<<">"<<std::endl;
    }
}