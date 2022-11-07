#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s1("value"); //direct initialization
    string s2 = string("value"); //cpoy initialization (with a temp object)
    cout << s1.empty();
    cout << s1.size();
    cout << s1+s2;    

    /*
    string line;
    while (getline(cin,line))
    {
        cout << line;
    }
    */

    string s("Hello World!!!");
    //s.size()返回类型为string::size_type
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s){
            //range for
            if (ispunct(c)){
                ++punct_cnt;
            }
    }
    
    cout << punct_cnt << "in" << s <<endl;
    
    return 0;
}