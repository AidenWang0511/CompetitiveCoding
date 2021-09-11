#include <bits/stdc++.h>
using namespace std;


struct Name{
    string name;
    int score;
    Name ( string a, int b){
        name = a;
        score = b;
    }
};

bool compare(Name a, Name b){
    return (a.score > b.score);
}

int main(){
    int i, j, k;
    int score; 
    string name;
    string line;
    vector <Name>::iterator it;
    
    
    for (i = 0; i < 5; ++i){
        vector <Name> names;
        for (j = 0; j < 5; ++j){
            char cname[9999], cline[9999];
            cin >> score;     
            cin.getline(cline, 9999, '\n');
            name = cline;
            names.push_back(Name(name, score));
        }
        stable_sort(names.begin(), names.end(), compare);
        for (it = names.begin(); it != names.end(); ++it){
            it -> name.erase(it->name.begin());
            cout << it -> name << "\n";
        }
    }
    

    return 0;
}
