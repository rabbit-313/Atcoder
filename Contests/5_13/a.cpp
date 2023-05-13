#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    string S;

    cin >> N >> S;

    int T=0, A=0;
    int T_flag=0, A_flag=0;
    for(int i=0; i<S.size(); i++){
        if(S[i] == 'T'){
            T++;
            T_flag=1;
            A_flag=0;
        }
        else{
            A++;
            T_flag=0;
            A_flag=1;
        }
    }
    if(T == A){
        if(T_flag == 1){
            cout << 'A' << endl;
        }
        else{
            cout << 'T' << endl;
            
        }
    }
    else if(T > A){
        cout << 'T' << endl;
    }
    else{
        cout << 'A' << endl;
    }
    
    
}