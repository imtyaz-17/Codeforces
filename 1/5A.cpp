#include <bits/stdc++.h>
using namespace std;
int main(){

    string line;
    int users(0), total(0);
    while(getline(cin, line)){
        if(line[0] == '+'){++users;}
        else if(line[0] == '-'){--users;}
        else{total += users * (line.size() - line.find(':') - 1);}
    }

 cout <<  total << endl;
    return 0;
}