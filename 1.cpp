#include<bits/stdc++.h>
using namespace std;

int parent[100];
void makeSet(int u)
{
    parent[u]=u;
}

void init()
{
    for(int i = 1; i <= 8; i++){
        makeSet(i);
    }
}

int Find(int u)
{
    if(u == parent[u])return u;
    Find(parent[u]);
}
void Union(int u,int v)
{
    int p = Find(u);
    int q = Find(v);
    cout << p << q <<endl;

    if(p!=q){
        parent[q] = p;
        cout << q <<" " <<p;
    }
    cout << endl;
}
int main()
{
    init();

   /* for(int i=1; i<=8; i++){
        cout << "Parent of " << i << " is " << parent[i] << endl;
    }*/
    Union(1,2);
    Union(2,3);

    //cout << Find(1) << " " << Find(1) << endl;

}
