#include<bits/stdc++.h>


int main()
{
    std::string ans;
    std::string S,T,U;
    std::cin>>S>>T;
    ans = "You can win";
    U = "atcoder";

    for(int i=0;i<S.size();i++)
    {
        if(S[i]==T[i])
        {
            continue;
        }
        else if(S[i]=='@'&&U.find(T[i])!=-1)
        {
            continue;
        }
        else if(T[i]=='@'&&U.find(S[i])!=-1)
        {
            continue;
        }
        else
        {
            ans = "You will lose";
        }
    }

    std::cout<<ans<<std::endl;
}