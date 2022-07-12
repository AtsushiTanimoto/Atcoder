#include<bits/stdc++.h>


int main()
{
    int A,B,C;
    int i;
    std::cin>>A>>B>>C;

    for(i=A;i<=B;i++)
    {
        if(i%C==0)
        {
            std::cout<<i<<std::endl;
            break;
        }
    }

    if(B<i)
    {
        std::cout<<-1<<std::endl;
    }
}