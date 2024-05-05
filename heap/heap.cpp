#include<iostream>
using namespace std;

class heap{
    public:

        int arr[100];
        int size = 0;


        void create(){
            int n,x;
            cout<<"enter the number you want to insert : ";
            cin>>n;
            cout<<"enter the number : "<<endl;
            for(int i = 0 ; i < n ; i ++){
                cin>>x;
                insert(x);
            }
        }

        void insert(int val){
            size  = size + 1;
            int index = size;
            arr[index] = val;

            while(index > 1){
                int parent = index/2;

                if(arr[parent] < arr[parent]){
                    swap(arr[parent] , arr[index]);
                    index = parent;
                }else{
                    return ;
                }
            }
        }


        void display(){
            for(int i = 1 ; i <= size ; i++){
                cout<<arr[i]<<" ";
            }
        }
};

int main(){

    heap h;
    h.create();
    h.display();
    return 0;
}