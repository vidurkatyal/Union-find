ll inv[maxn],fact[maxn];
ll mod_expo(ll b,ll p)
{
	ll j;
	ll result=1;
	while(p>0)
	{
		j=p&1;
		if(j!=0)
		result=(result*b)%mod;
		b=(b*b)%mod;
		p>>=1;
	}
	return result;
}
void preprocess()
{
	int i,j;
	fact[0]=1,fact[1]=1;
	inv [0]=1;inv[1]=1;
	rep(i,2,maxn)
	{
		fact[i]=(i*fact[i-1])%mod;
		inv[i]=mod_expo(fact[i],mod-2);
	}
}
ll ncr(ll n,ll r)
{
	if(n<=0||r<=0) return 1;
	return (((fact[n]*inv[r])%(ll)mod)*inv[n-r])%(ll)mod;
}

