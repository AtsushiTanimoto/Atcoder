#include<bits/stdc++.h>

int main()
{
    int P,Q,R;
    std::cin>>P>>Q>>R;
    std::cout<<std::min({P+Q,Q+R,R+P})<<std::endl;
}