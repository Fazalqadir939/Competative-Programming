//
// Created by fazalqadir on 06/10/26.
//
#include <iostream>
#include <bit>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n;
    cin >> n;
    cout << std::popcount(n) << "
";
    return 0;
}