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
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cyclic_rearrange_arr_i_i(arr);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// -1 -1 6 1 9 3 2 -1 4 -1