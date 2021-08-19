#include<iostream>
#include<time.h>
#include<fstream>

using namespace std;

int myRandomN(){
    int a;
    long long int s=0;
    for(int i = 0; i<7 ;i++){
        a = rand();
        s+=a;
        s*= RAND_MAX;
        if(s>1e10){
            break;
        }
    }
    return s%(int)1e9;
}

int main(){
    ofstream f;
    f.open("randomInput.txt");
    srand(time(0));
    int t,n,k;
    t = myRandomN() % 100;
    
    f<<t<<endl;

    for(int i=0;i<t;i++){
        n = myRandomN() % (int)1e5;
        k = myRandomN() % n;

        f<<n<<" "<<k<<endl;
        for(int j = 0;j<n;j++){
            f<<myRandomN()<<endl;
        }
    }
    f.close();
    return 0;
}