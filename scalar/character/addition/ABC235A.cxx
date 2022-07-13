#include<bits/stdc++.h>


int main()
{
    char a,b,c;
    std::cin>>a>>b>>c;
    std::string abc = std::string({a,b,c});
    std::string bca = std::string({b,c,a});
    std::string cab = std::string({c,a,b});
    int ans = stoi(abc)+stoi(bca)+stoi(cab);
    std::cout<<ans<<std::endl;
}