// rabin carp for both int and char


# include <iostream>
# include <string>
# include <math.h>
using namespace std;

int RabinCarpMatcher(string T,string P,int d,int q)
{
	long int n = T.length();
	long int m = P.length();

	int p=0,s,i,j;
	int t=0;
	int h = pow(d,m-1);
	h=h%q;
	int count=0;

	for(i=0;i<m;i++)
	{
		p = (p*d + P[i]) % q;
		t = (t*d + T[i]) % q;
	}

	for(s=0;s<=n-m;s++)
	{
		if(p==t)
		{
			for(j=0;j<m;j++)
			{
				if(T[s+j] != P[j]) break;
			}
			if(j==m)
			{
				cout << "Match at index = " << s << endl;
				count++;
			}

		}
		if(s<n-m)
		{
			t = ( d*(t - (T[s])*h ) + T[s + m] )%q ;
			if(t<0) t=t+q;
		}
	}
	return count;
}

int main()
{
	string T;
	string P;
	cout<< "Enter the text     : ";
	getline(cin,T);
	cout<< "Enter the pattern  : ";
	getline(cin,P);
	cout << "T= " << T <<endl;
    cout << "P= " << P <<endl;

	int d,q;
	d=256;
	q = 101 ;
	int count = RabinCarpMatcher(T,P,d,q);
	cout << "Total matches = " << count << endl ; 

	return 0;
}