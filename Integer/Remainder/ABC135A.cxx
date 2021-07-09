#include<bits/stdc++.h>

int main()
{
    int A,B;
    std::cin>>A>>B;

    if(A%2==B%2)
    {
        std::cout<<(A+B)/2<<std::endl;
    }
    else
    {
        std::cout<<"IMPOSSIBLE"<<std::endl;
    }
}