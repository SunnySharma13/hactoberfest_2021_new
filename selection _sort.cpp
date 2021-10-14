#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>& arr)
{
    int size=arr.size();
    for(int i=0; i<size-1; i++)
    {
        bool toggle=false;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[i])
            {
                toggle=true;
                swap(arr[i],arr[j]);
            }
        }
        if(toggle==false)
        {
            break;
        }
    }


}
int main()
{
    int size,value;
    cout<<"please enter array size:-";
    cin>>size;
    vector<int> arr;
    cout<<"please enter the values"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    selection_sort(arr);
    for(auto value: arr)
    {
        cout<<value<<" ";
    }
}
