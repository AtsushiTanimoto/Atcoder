#include<bits/stdc++.h>

int main()
{
    int C=0;
    std::string S,T;
    std::cin>>S>>T;

    for(int i=0;i<3;i++)
    {
        if(S[i]==T[i])
        {
            C+=1;
        }
    }

    std::cout<<C<<std::endl;
}