include<bits/stdc++.h>
#define MAXN 200005
int pa[MAXN];
int find(int x,int y){
	if(pa[x]!=x)
		x=find(pa[x]);
	return x;
}
int main(){
// add functionality here
}
