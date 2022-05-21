#include <iostream>
#include <iomanip>
#include <vector>
#include <string>


using namespace std;



int main(){
    int N = 8;
    string str;
    
    if(N % 2 != 0){
        for(int i = 0; i < N; i++){
            str.append("a");
        }
    }
    else{
        for(int i = 0; i < N-1; i++){
            str.append("a");
        }
        str.append("b");
    }

    cout << str << endl;
    return 0;
}