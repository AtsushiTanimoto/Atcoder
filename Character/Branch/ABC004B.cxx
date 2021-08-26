#include<bits/stdc++.h>


int main()
{
    std::vector<char> C(16);

    for(int i=0;i<=15;i++)
    {
        std::cin>>C[i];
    }

    for(int i=0;i<=15;i++)
    {
        std::cout<<C[15-i];

        if(i%4==3)
        {
            std::cout<<std::endl;
        }
        else
        {
            std::cout<<" ";
        }
    }
}