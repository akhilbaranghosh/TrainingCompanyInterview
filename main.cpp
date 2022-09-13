#include "akhil.h"
using namespace std;

void cyclic_rearrange_arr_i_i(vector<int>& arr){
    for (int i = 0; i < arr.size();) {
        if(arr[i] != -1 && arr[i] != arr[arr[i]]){
            swap(arr[i],arr[arr[i]]);
        }else{
            i++;
        }
    }
}

void reverse_integer_array(vector<int>& arr, int start, int end){
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
//    cyclic_rearrange_arr_i_i(arr);
    reverse_integer_array(arr, 6, 7);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// -1 -1 6 1 9 3 2 -1 4 -1