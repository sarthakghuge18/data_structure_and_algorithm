#include<iostream>
using namespace std;

void spiral_display(int arr[][4],int r , int c){

    //intilize 
    int row = r;
    int col = c;

    int count = 0;
    int total = row * col;

    //initilize index 
    int startRow = 0;
    int endingRow = row-1;
    int startCol = 0;
    int endingCol = col-1;

    while(count < total){

        //display the starting row 
        for(int i = startCol; i<=endingCol && count<total; i++){
            cout<<arr[startRow][i]<<" ";
            count++;
        }
        startRow++;

        //display the ending column
        for(int i = startRow; i<=endingRow && count<total; i++ ){
            cout<<arr[i][endingCol]<<" ";
            count++;
        }
        endingCol--;

        //display the ending row 
        for(int i = endingCol ; i>=startCol && count<total;i-- ){
            cout<<arr[endingRow][i]<<" ";
            count++;
        }
        endingRow--;

        //display the starting column 
        for(int i = endingRow;i>=startRow && count<total;i--){
            cout<<arr[i][startCol]<<" ";
            count++;
        }
        startCol++;
    }
}

int main(){

    //declare 2D array
    int arr[4][4];

    //taking input 
    for(int i = 0 ; i < 4 ; i++ ){
        for(int j = 0; j < 4; j++){
            cin>>arr[i][j];
        }
    }


    //displaying array 
    for(int i = 0;i<4;i++){
        for(int j = 0; j< 4;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }


    //calling the function
    spiral_display(arr,4,4);
}