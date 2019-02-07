#include <random>
#include <iostream>
using namespace std;

int main()
{
random_device rd;
mt19937 eng1 (rd ());
mt19937 eng2 (1337);
int min =10, max = 100;

uniform_int_distribution<> unifrm(min, max);
normal_distribution<float> norm(mean, sd);


//generate 20 normally distributed floats
for (int n = 0; n < 20; n ++)
{
	cout<<norm(eng1)<<" ";
  }


//generate 20 uniformly distributed integers
for(int n = 0; n < 20 ; n+=)
{
	cout<<unifrm(eng2)<<" ";
  }
return 0;
}
