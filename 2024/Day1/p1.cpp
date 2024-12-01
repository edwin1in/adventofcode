#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

int main(){
    std::string text;
    std::ifstream file("input.txt");
    std::vector<int> l,r;

    while(std::getline(file,text)){
        std::string left,right;
        std::istringstream is(text);
        is >> left;
        is >> right;

        l.push_back(std::stoi(left));
        r.push_back(std::stoi(right));
    }


    sort(l.begin(),l.end());
    sort(r.begin(),r.end());

    int ans = 0;
    for(int i = 0; i < l.size(); i++){
        ans+= std::abs(l[i]-r[i]);
    }
    std::cout<<ans<<"\n";

    return 0;
}