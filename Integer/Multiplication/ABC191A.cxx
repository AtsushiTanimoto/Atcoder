#include<bits/stdc++.h>

int main()
{
    int V,T,S,D;
    std::cin>>V>>T>>S>>D;

    if(D<V*T||V*S<D)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}