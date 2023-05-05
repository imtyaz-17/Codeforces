#include <bits/stdc++.h>
using namespace std;
int main()
{

    string door, rail;
    ifstream inputFile;
    inputFile.open("input.txt");
    inputFile >> door >> rail;
    inputFile.close();

    FILE *outputFile = fopen("output.txt", "w");
    if (door == "front" && rail == "1")
    {
        fputs("L", outputFile);
    }
    else if (door == "front" && rail == "2")
    {
        fputs("R", outputFile);
    }
    else if (door == "back" && rail == "1")
    {
        fputs("R", outputFile);
    }
    else if (door == "back" && rail == "2")
    {
        fputs("L", outputFile);
    }
    fclose(outputFile);

    return 0;
}