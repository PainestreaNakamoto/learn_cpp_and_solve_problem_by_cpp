#include <iostream>

using namespace std;

int max(int _array[], int size){
    int max = _array[0];
    for(int index = 1; index < size; index++){
        if(max < _array[index]){
            max = _array[index];
        }
    }
    return max;
}

int min(int _array[], int size){
    int min = _array[0];
    for(int index = 1; index < size; index++){
        if(min > _array[index]){
            min = _array[index];
        }
    }
    return min;
}

int main(){

    int arrays[5] = {2,5,1,3,4};
    int size = sizeof(arrays) / sizeof(arrays[0]); // a numeric data has 4 bytes in the example array there are 5 indexes = 4*5 = 20 byte so we'll 20/size of 1 number is 4 bytes = 20/4 = 5

    cout << min(arrays,size) << endl;
    cout << max(arrays,size);

    return 0;
}