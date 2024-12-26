#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int> getvectors(){
   vector<int> vec;
   int sum , value;
  cout << "neter the number of vectors \n";
  cin >> value ;
  for (int i = 0; i < value; i++)
  {
    cout << "enter the vales";
   cin >> sum ;
   vec.push_back(sum);
  }
  return vec;
}

void reslut( vector<int> vec){
  int sum;
  for (int vecs : vec)
  {
    sum = vecs+sum;
    
  }
  
  cout << sum;
}
int main()
{
   vector<int> result = getvectors();
  reslut(result);
    
    
    return 0 ;
}