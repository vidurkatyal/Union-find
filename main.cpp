#include<vector>

class UnionFind {
public:
	UnionFind(int n)
	{
		par.reserve(n + 1);
		num = n + 1;
		for (size_t i = 0; i <= n; ++i) {
			par[i] = i;
		}
	}

	~UnionFind()
	{
	}

	void Union(int a, int b)
	{
		a = root(a);
		b = root(b);
		if(a == b) {
			return;
		}
		if(b < a) {	// Policy: Make larger value node parent
			swap(a, b);
		}
		par[a] = b;
		--num;
	}
	bool Find(int a, int b)
	{
		return ( root(a)==root(b) );
	}

	/**
	 * NumSets counts from 0 to n ie (n+1)
	 */
	int NumSets() {
		return num;
	}
private:
	int root(int a)
	{
		while(par[a] != a) {
			par[a] = par[par[a]];	// Policy: Path Compression
			a = par[a];
		}
		return a;
	}

	std::vector<int> par;
	int num;
};

int main()
{
	const size_t n = 20005;
	std::vector<int> X(n);
	UnionFind uf(n);
	for (size_t i = 0; i < n; ++i) {
		uf.Union(X[0] ,X[i]);
	}
	return 0;
}
