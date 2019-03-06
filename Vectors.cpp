#include <vector> //must include header for vectors
#include <iostream>
#include <string>
using namespace std;

//push_back() adds value to the end of the vector
//pop_back()  removes the last value

int main(){

vector<int> v1 = {10, 11, 21, 31};
vector <char> v;
string msg1 = "Death";
string msg2 = msg1 + " To all";
msg2 += " Humans"; // += to add to the string


cout << " msg1 = " << msg1<<endl;
cout << " msg2 = " << msg2<<endl;
cout << " the first character is " << msg1[0]<<endl;
cout << " msg1 has a size of " << msg1.size()<<endl;

v.push_back('D'); // add D to the empty vector v
v.push_back('J');

for( int i =0; i < v.size(); i++){
cout << v[i];
}



 
for ( int i = 0; i < v1.size(); i++){
cout << v1[i]<<" ";
}


return 0;


}
