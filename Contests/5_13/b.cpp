#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    int flag=1;
    int a=A.size();
    while(flag==1){
        flag=0;
        for(int i=0; i<a-1; i++){
            if(abs(A.at(i) - A.at(i+1)) != 1){
                flag = 1;
                if(A.at(i) < A.at(i+1)){
                    for(int j=1; j<A.at(i+1) - A.at(i); j++){
                        A.insert(A.begin()+i + j, A.at(i)+j);
                    }
                }
                else{
                    for(int j=1; j<A.at(i) - A.at(i+1); j++){
                        A.insert(A.begin()+i + j, A.at(i)-j);
                    }
                }
                break;
            }
        }
        if(flag==0){
            break;
        }
        a=A.size();
    }

//     while(i<A.size()){
//         if(abs(A.at(i) - A.at(i+1)) != 1){
//             if(A.at(i) < A.at(i+1)){
//                 for(int j=1; j<A.at(i+1) - A.at(i); j++){
//                     A.insert(A.begin()+i + j, A.at(i)+j);
//                     i += 
//                 }
//             }
//             else{
//                 for(int j=1; j<A.at(i+1) - A.at(i); j++){
//                     A.insert(A.begin()+i + j, A.at(i)-j);
//                 }
//             }
//         }
// }

    for(int k=0; k<A.size(); k++){
        cout << A.at(k) << " ";
    }
}