#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    char p, q;
    cin >> p >> q;

    int dis[7] = { 0, 3, 4, 8, 9, 14, 23};


    char Al[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

    int start, end;
    for(int i=0; i<7; i++){
        if(p == Al[i]){
            start = dis[i];
        }
        if (q == Al[i]){
            end = dis[i];
        }
    }
    int ans = abs(start - end);

    cout << ans << endl;
}