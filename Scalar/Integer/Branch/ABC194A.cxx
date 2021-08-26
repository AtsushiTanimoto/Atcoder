#include<bits/stdc++.h>

int main()
{
    int A,B;
    std::cin>>A>>B;

    if(15<=A+B&&8<=B)
    {
        std::cout<<1<<std::endl;
    }
    else if(10<=A+B&&3<=B)
    {
        std::cout<<2<<std::endl;
    }
    else if(3<=A+B)
    {
        std::cout<<3<<std::endl;
    }
    else
    {
        std::cout<<4<<std::endl;
    }
}