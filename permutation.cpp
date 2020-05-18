#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string maxNum(string n,int m){
    sort(n.begin(),n.end());
    for(int i=0; i < n.size();i++){
        for (int j = i + 1; j < n.size(); j++) { 
            string t = n;  
            swap(t[j], t[i]);  
            sort(t.begin() + i + 1, t.end()); 
            if (stoll(t) > stoll(n) && stoll(t) <= m) 
                swap(n[i], n[j]); 
        }
    }
    return n; 
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string n;
    int m;
    cin>>n;
    cin>>m;
    cout<<maxNum(n,m);
    
    return 0;
}
