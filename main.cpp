#include <iostream>
#include <vector>
using namespace std;

bool isToeplitz(std::vector<std::vector<int>> input) {
  if(input.size() <2){
    return true;
  }

  int first = input[0][0];
  for(int i = 0; i < input.size(); ++i){
    if( i <= input[i].size()){
      if(input[i][i] != first){
	return false;
      }
    }  
  }
  return true;
}


int main(){
  cout<<"Hello world"<<endl;

  vector<vector<int>> matrix{{1,2,3,4,8},
			     {5,1,2,3,4},
			     {4,5,3,2,3},
			     {7,4,5,1,2}};

 
  cout<<"is toeplitz:"<<isToeplitz(matrix)<<endl;

  return 0;

}
