#include <iostream>
using namespace std;
 
int main (){
  
  float sum = 0;

  for( int i = 0; i < 10; i++ ){
    sum += 0.1;
  }
  
  cout << "10 个 0.1 相加 = " << sum << endl;

  return 0;
}