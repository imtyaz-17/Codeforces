#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; scanf("%d\n", &n);
    
    string line("");
    string shipCaptain("");
    vector<string> rats;
    vector<string> womenAndChildren;
    vector<string> men;

    while(n--){
        getline(cin, line);
        int split = line.find(' ');
        string name  = line.substr(0,split);
        string title = line.substr(split + 1);

        if(title == "captain"){shipCaptain = name;}
        else if(title == "rat"){rats.push_back(name);}
        else if(title == "woman" || title == "child"){womenAndChildren.push_back(name);}
        else{men.push_back(name);}
    }

    for(int k = 0; k < rats.size(); k++){cout << rats[k] << endl;}
    for(int k = 0; k < womenAndChildren.size(); k++){cout << womenAndChildren[k] << endl;}
    for(int k = 0; k < men.size(); k++){cout << men[k] << endl;}
    cout << shipCaptain << endl;

    return 0;
}