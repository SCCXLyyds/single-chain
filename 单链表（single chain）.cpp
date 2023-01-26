#include <iostream>
using namespace std;
const int N=1e5+10;
int m,head,idx,e[N],en[N];
void add_head(int &x){
    e[idx]=x;
    en[idx]=head;
    head=idx;
    idx++;
}
void add(int k,int &x){
    e[idx]=x;
    en[idx]=en[k];
    en[k]=idx;
    idx++;
}
void remove(int k){
    en[k]=en[en[k]];
}
int main()
{
    head=-1,idx=0;
    cin>>m;
    while(m--)
    {
        int k,x;
        char v;
        cin>>v;
        if(v=='H'){
            cin>>x;
            add_head(x);
        }
        else if(v=='I'){
            cin>>k>>x;
            k-=1;
            add(k,x);
        }
        else{
            cin>>k;
            if(k==0) head=en[head];
            else k-=1,remove(k);
        }
    }
    for(int i=head;i!=-1;i=en[i]) cout<<e[i]<<" ";
    return 0;
}
