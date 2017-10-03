include<bits/stdc++.h>
#define MAXN 200005
int pa[MAXN];
int find(int x,int y){
	if(pa[x]!=x)
		x=find(pa[x]);
	return x;
}
void Union(int x,int y){
	int xset=find(x);
	int yset=find(y);
	if(xset == yset ) return;
	pa[xset] = yset;
}
int main(){
	int X[MAXN];
	for (int i=0; i<n;i++){
		Union(X[0],X[i]);
	}
}
