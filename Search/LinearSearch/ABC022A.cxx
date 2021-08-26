#include<bits/stdc++.h>


int main()
{
    int ans = 0;
    int N,S,T,W,A;
    std::cin>>N>>S>>T>>W;

    if(S<=W&&W<=T)
    {
        ans+=1;
    }

    for(int n=1;n<N;n++)
    {
        std::cin>>A;
        W+=A;

        if(S<=W&&W<=T)
        {
            ans+=1;
        }
    }

    std::cout<<ans<<std::endl;
}