#include<bits/stdc++.h>

int main()
{
    int S,W;
    std::cin>>S>>W;

    if(W<S)
    {
        std::cout<<"safe"<<std::endl;
    }
    else
    {
        std::cout<<"unsafe"<<std::endl;
    }
}