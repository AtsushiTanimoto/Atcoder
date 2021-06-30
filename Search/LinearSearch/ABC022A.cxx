#include<bits/stdc++.h>

int main()
{
    int N,S,T,W,A;
    int C = 0;
    std::cin>>N>>S>>T>>W;

    if(S<=W&&W<=T)
    {
        C+=1;
    }

    for(int n=1;n<N;n++)
    {
        std::cin>>A;
        W+=A;

        if(S<=W&&W<=T)
        {
            C+=1;
        }
    }

    std::cout<<C<<std::endl;
}