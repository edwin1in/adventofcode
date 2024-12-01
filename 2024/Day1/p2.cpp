#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>

int main(){

    std::map<int,int> m;
    std::vector<int> l;

    std::string text;
    std::ifstream file("input.txt");
    while(std::getline(file,text)){
        std::istringstream is(text);
        std::string left, right;
        is >> left;
        is >> right;
        l.push_back(std::stoi(left));
        m[std::stoi(right)]++;
    }
    int ans = 0;
    for(auto i : l){
        ans += m[i] * i;
    }
    std::cout<<ans<<"\n";
    return 0;
}