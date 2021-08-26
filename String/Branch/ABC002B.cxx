#include<bits/stdc++.h>


int main()
{
    std::string W;
    std::cin>>W;
    std::cout<<std::regex_replace(W,std::regex("[aeiou]"),"")<<std::endl;
}