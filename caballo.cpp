//Posible solucion alternativa
//Codigo loureiro
#include <iostream>
#include <vector>
using namespace std;

#define tam 5
int tab[tam][tam];
//////////////////////////////////////////////////////////
void print_tab(){
    for (int  i = 0; i < tam; i++){
        for (int  j = 0; j < tam; j++){
            cout<<tab[i][j];
        }
        cout<<"\n";
    }
}
//////////////////////////////////////////////////////////
void caballo(int i, int x, int y, bool q=false){
    int xn,yn,rn;
    bool q1=true;
    int m=-1;
    vector<int> h={2,1,-1,-2,-2,-1,1,2};
    vector<int> v={1,2,2,1,-1,-2,-2,-1};
    while(q1 || m<8){
        m++;
        q1=false;
        xn=x+h[m];
        yn=x+v[m];
        if(xn>0 && xn<tam){
            if(tab[xn][yn]==0){
                //cout<<"wa a pintar "<<xn<<yn<<endl;
                tab[xn][yn]=i;
                if(i<tam*tam){
                    caballo(i+1,xn,yn,q1);
                    if (!q1){
                        tab[xn][yn]=0;
                    }
                }
                else
                    q1=true;
            }
        }
    }
    q=q1;
}
//////////////////////////////////////////////////////////
int main(){
    caballo(1,0,0);
    print_tab();
    return 0;
}
