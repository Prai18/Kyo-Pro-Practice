#include <vector> // vectorを使うためにインクルードする
#include <iostream>
using namespace std;

int a=1;

int main(){
    vector<int> vc;
    int N;
    int num=0,hoge;
    cin >> N;

    for(int i=0;i<N;i++){
        if(i==0){
            vc.push_back(1);
        }
        vc.push_back(3);
    }

    for (int i = 0; i < N; ++i)
    {
        a*=10;
    }

    for (int i = 0; i < N; ++i){
       hoge=a;
       hoge*=vc[i];
       num+=hoge;
       a=a/10;
   }
   num+=3;
   cout<<num%1000000007<<endl;
}


