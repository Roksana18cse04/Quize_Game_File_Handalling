#include<bits/stdc++.h>
using namespace std;

long double fun(long double x);
void bisection_method(long double a,long double b);
int main(){
    long double a,b;
    cin>>a>>b;
    bisection_method(a,b);
    return 0;
}
long double fun(long double x){
    //f(x) = (x*x*x)+(2*X*X)-x+8  
    long double Fx ;
    Fx = (x*x*x) + (2*(x*x))- x + 6;
    return Fx;
}

void bisection_method(long double a,long double b){
    cout<<fun(a)<<" "<<fun(b)<<endl;
    long double c;

    if(fun(a)*fun(b)>=0){
        cout<<-1<<endl;
    }
    else{
        int T=0;
        cout<<"iteration"<<" "<<"a\t"<<"b\t" <<" c"<<endl;
        while((b - a) >= 0.01){
            cout<<T<<"\t  "<<a<<"\t  "<<b;
            c=(a+b)/2;
            if(fun(c)==0){
                break;
            }
            else if(fun(a)*fun(c)<=0){
                b=c;
            }
            else{
                a=c;
            }
            T++;
            cout<<"\t  "<<c<<endl;
        }
        
    }

}