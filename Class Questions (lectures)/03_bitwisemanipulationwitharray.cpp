#include <iostream>
#include <climits>

using namespace std;

// int getCurrentAns(int arr[],int element ,int i,int size){
//     int xorExceptI=0;
//     for (int j = 0; j < size; j++)
//     {
//         if (i!=j)
//         {
//             xorExceptI^=arr[j];
//         }
//     }
//     if (element==xorExceptI)
//     {
//         return 0;
//     }else if(element<xorExceptI){
//         return -1;
//     }else{
//         return element-xorExceptI;
//     }
    
    
//     return 0;
// }


int getCurrentAns(int arr[],int element ,int i,int wholeXor, int size){
    int xorExceptI=wholeXor^element;
    if (element==xorExceptI)
    {
        return 0;
    }else if(element<xorExceptI){
        return -1;
    }
    return element-xorExceptI;

}
int main() {
    int arr[]={3,2,7,15,8};
    int size=5;
    int ans= INT_MAX;

    int wholeXor=0;
    for (int i = 0; i < size; i++)
    {
        wholeXor^=arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        int element = arr[i];
        int CurrentAns= getCurrentAns(arr,element,i,wholeXor,size);
        if (CurrentAns<ans && CurrentAns!=-1 ){
            ans=CurrentAns;
        }  
    }
    if(ans==INT_MAX){
        cout<<0;
    }else{
        cout<<ans;
    }
    return 0;
}


