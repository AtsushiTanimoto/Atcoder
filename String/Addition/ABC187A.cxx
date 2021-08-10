#include<bits/stdc++.h>

int main()
{
    std::string A,B;
    std::cin>>A>>B;
    std::cout<<std::max(A[0]-'0'+A[1]-'0'+A[2]-'0',B[0]-'0'+B[1]-'0'+B[2]-'0')<<std::endl;
}