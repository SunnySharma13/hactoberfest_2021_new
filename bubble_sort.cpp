#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>& arr)
{
    int size=arr.size();
    for(int i=0; i<size; i++)
    {
        for(int j=1; j<size-i; j++)
        {
            bool toggle=false;
            if(arr[j-1]>arr[j])
            {
                toggle=true;
                swap(arr[j],arr[j-1]);
            }
            if(toggle==false)
            {
                break;
            }

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
    bubble_sort(arr);
    for(auto value: arr)
    {
        cout<<value<<" ";
    }
}
