#include <iostream>

using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     //  for (int i = n - 1; i > 0; i--) {
// //    for (int j = 0; j < i; j++) {
// //      if (arr[j] > arr[j + 1]) {
// //        int temp = arr[j];
// //        arr[j] = arr[j + 1];
// //        arr[j + 1] = temp;
//     for (int i = 0; i <n ; i++)
//     {
//         for(int j = 0; j<n-1-i ; j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 int temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] =temp;            }

//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    


//     return 0;
    
//! }buble sort

int main(){
    int n ;
    cin>>n;
    int j;
    int a[100];
    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int ai = a[i];

        while (j >= 0 && a[j] > ai)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = ai;
        // cout<<ai<<" ";
        
    }
    
    
    
    
    

    
}