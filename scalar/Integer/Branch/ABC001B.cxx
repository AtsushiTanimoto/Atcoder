#include<bits/stdc++.h>


int main()
{
    int ans;
    int m;
    std::cin>>m;

    if(m<100)
    {
        ans = 0;
    }
    else if(m<=5000)
    {
        ans = m/100;
    }
    else if(m<=30000)
    {
        ans = 50+m/1000;
    }
    else if(m<=70000)
    {
        ans = 80+(m/1000-30)/5;
    }
    else
    {
        ans = 89;
    }

    std::cout<<std::setfill('0')<<std::setw(2)<<ans<<std::endl;
}