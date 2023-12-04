#include <fstream>
using namespace std;
int main()
{
	ifstream f("joc20.in");
	int n;
	f >> n;
	int v[n];
	for (int i = 0; i < n; i++) f >> v[i];
	int inc = 0, sf = n-1, s1 = 0, s2 = 0;
	while (n > 0)
	{
		int x;
		f >> x;
		if (x == 1)
			s1 += v[inc++];
		else
			s1 += v[sf--];
		f >> x;
		if (x == 1)
			s2 += v[inc++];
		else
			s2 += v[sf--];
		n -= 2;
	}
	f.close();
	int smax, c;
	if (s1 > s2)
		smax = s1, c = 1;
	else if (s2 > s1)
		smax = s2, c = 2;
	else
		smax = s1, c = 0;
	ofstream g("joc20.out");
	g << smax << ' ' << c;
	g.close();
	return 0;
}

