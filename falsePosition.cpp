#include<bits/stdc++.h>


using namespace std;

#define MAX_ITER 100

long double fun(long double x);
void false_Position_method(long double l,long double r);
int main(){
    long double l,r;
    cin>>l>>r;
    false_Position_method(l,r);
    return 0;
}
long double fun(long double x){
    //f(x) = (x*x*x)+(2*X*X)-x+8  
    long double Fx ;
    Fx = (x*x*x) + (2*(x*x))- x + 6;
    return Fx;
}

void false_Position_method(long double l,long double u){
    cout<<fun(l)<<" "<<fun(u)<<endl;
    long double r;

    if(fun(l)*fun(u) >= 0){
        cout<<-1<<endl;
    }
    else{
        int T=0;
        cout<<"iteration"<<"\tl"<<"\tu" <<"\t r"<<endl;
        for(T=0;T<=MAX_ITER;T++){
            cout<<T<<"         \t"<<l<<"\t"<<u<<"\t ";
            r=(l*fun(u) - u*fun(l))/ (fun(u) - fun(l));
            if(fun(r)==0){
                break;
            }
            else if(fun(l)*fun(r)< 0){
                u=r;
            }
            else{
                l=r;
            }
            
            cout<<r<<endl;
        }
        
    }

}