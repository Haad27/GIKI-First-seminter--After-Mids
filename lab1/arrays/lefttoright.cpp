#include <iostream>
#include <string>
#include <vector>

using namespace std;
//remove all but not the last 
void left_rotation(int arr[],int size){
   

}
//remove last element
void last(int x [] , int size ){
  x[size-1]={};
  cout << x;
}
int main()
{
 int array[]={1,2,3,4,5,6};

 int size = sizeof(array) / sizeof(array[0]);
    
  cout << "orginal array \n";
  for (int i = 0; i < size ; i++)
  {
   cout << array[i] <<endl;
  }
 firstrotation(array,size);

  
  
    return 0 ;
}