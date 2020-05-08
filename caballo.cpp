#include <iostream>
#include <vector>
#define tam 4
using namespace std;


int tab[tam][tam]={0};
vector<int> h={2,1,-1,-2,-2,-1,1,2};
vector<int> v={1,2,2,1,-1,-2,-2,-1};
//////////////////////////////////////////////////////////
void print_tab(){
    for (int  i = 0; i < tam; i++){
        for (int  j = 0; j < tam; j++)
            cout<<tab[i][j]<<"\t";
        cout<<"\n";
    }
}
//////////////////////////////////////////////////////////
bool caballo(int x, int y,int i){
    //cout<<i<<endl;
    if(i==tam*tam)
        return true ;
    for (int m=0; m < 8; m++){
        int tx=h[m]+x;
        int ty=v[m]+y;
        if(tx>0 && tx<tam && ty>0 && ty<tam && tab[tx][ty]==0){
           cout<<tx<<" "<<ty<<"- "<<i<<endl;
            tab[tx][ty]=i;
            if(caballo(tx,ty,i+1))
                print_tab();
            tab[tx][ty]=0;
        }
    }
    return false;
}
//////////////////////////////////////////////////////////
int main(){
    tab[1][0]=1;
    cout<<caballo(1,0,2)<<endl; 
    //print_tab();
    return 0;
}
