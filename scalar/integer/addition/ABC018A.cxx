#include<bits/stdc++.h>

int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;
    std::cout<<1+(A<B)+(A<C)<<std::endl;
    std::cout<<1+(B<A)+(B<C)<<std::endl;
    std::cout<<1+(C<A)+(C<B)<<std::endl;
}