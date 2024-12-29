//Active recall on using pointers to allocate memory for an array during run time. No problem question. 
#include <iostream> 

using namespace std; 


int main(){

  cout << "Hello! Please dictate how long of an array you would like to create: "; 
  int user_def_len = 0; 
  cin >> user_def_len;


  int* user_arr = new int[user_def_len];
  cout << "New array of length " << user_def_len << " allocated! \n"; 
  cout << "Please proceed to fill out your array \n"; 

  for(int i =0; i < user_def_len; ++i){
    cout << "Enter number " << i << ": "; 
    cin>> user_arr[i];
  }
  cout << "Thank you! The following is your array: "; 

  cout << "{";

  for(int i = 0; i < user_def_len; ++i){
      if(i != user_def_len-1) {
        cout << user_arr[i] << ",";
      }else{
        cout << user_arr[i]; 
      }
    }
  cout << "}";

  return 0; 
}
