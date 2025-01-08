/*
    https://usaco.training/usacoprob2?a=gRSaxUw3cD8&S=ride
    ID: thedeat1
    PROB: ride
    LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char alphabet[27] = { ' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                            'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
                             'P', 'Q', 'R', 'S', 'T', 'U', 'V', 
                              'W', 'X', 'Y', 'Z' };
    int name_product = 1;
    int group_product = 1;

    string name, group;
    fin >> name;
    fin >> group; 

    int i;
    for(i = 0; i < name.length(); ++i) {
        int j;
        for(j = 1; j < 27; ++j) {
            if(name[i] == alphabet[j])
                name_product *= j;
        }
    }

    int k;
    for(k = 0; k < group.length(); ++k) {
        int l;
        for(l = 1; l < 27; ++l) {
            if(group[k] == alphabet[l])
                group_product *= l;
        }
    }

    if((name_product % 47) == group_product % 47)
        fout << "GO" << endl;
    else
        fout << "STAY" << endl;

    return 0;
}