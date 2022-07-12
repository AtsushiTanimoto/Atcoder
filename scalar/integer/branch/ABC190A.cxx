#include<bits/stdc++.h>

int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;

    if(B<A or (B==A and C==1))
    {
        std::cout<<"Takahashi"<<std::endl;
    }
    else
    {
        std::cout<<"Aoki"<<std::endl;
    }

}