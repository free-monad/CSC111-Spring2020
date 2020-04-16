#include <iostream>
using namespace std;

void selection_sort(int[], int);
void swap(int&, int&);

int main(){
  
  int arr[] = {4, 200, 2, 24, 8, 6, 12};
  //2, 200, 4, 24, 8, 6, 12

  selection_sort(arr, 7);  
	
  for(int i = 0; i < 7; i++){
    cout << arr[i] << " ";
  }

  return 0;
}

void swap(int &a, int &b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}

void selection_sort(int arr[], int size){

  int index_of_smallest_so_far;
  int value_of_smallest_so_far;

  for(int current_index = 0; current_index < size - 1; current_index++){
    
    for(int i = current_index; i < size; i++){
      if(i == current_index){
        index_of_smallest_so_far = current_index;
        value_of_smallest_so_far = arr[current_index];
      }else{
        if(arr[i] < value_of_smallest_so_far){
          index_of_smallest_so_far = i;
          value_of_smallest_so_far = arr[i];
        }
      }
    }

    swap(arr[current_index], arr[index_of_smallest_so_far]);
  }

}



