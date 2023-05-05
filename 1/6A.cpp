#include <bits/stdc++.h>
using namespace std;
int main(){

    int length[4] = {0};
    for(int k = 0; k <= 4; k++){scanf("%d", length + k);}
    sort(length, length + 4);

    int firstDiff  = length[1] + length[2] - length[3];
    int secondDiff = length[0] + length[1] - length[2];

    std::string output;
    if(firstDiff > 0 || secondDiff > 0){output = "TRIANGLE";}
    else if(firstDiff == 0 || secondDiff == 0){output = "SEGMENT";}
    else {output = "IMPOSSIBLE";}

    cout << output << endl;
    return 0;
}