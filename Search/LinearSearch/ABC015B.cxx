#include<bits/stdc++.h>


int main()
{
    int ans = 0;
    int num = 0;
    int N,A;
    std::cin>>N;

    for(int i=0;i<N;i++)
    {
        std::cin>>A;
        if(A!=0)
        {
            ans+=A;
            num+=1;
        }
    }

    std::cout<<(ans+num-1)/num<<std::endl;
}