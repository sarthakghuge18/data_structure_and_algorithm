#include<iostream>
using namespace std;

class graph{

    public:
    //intilize the matrix and visited
    int matrix[10][10];
    int visited[10];

    //constructor for initilizing the value
    graph(){
        for(int i = 0 ; i < 10 ; i++){
            visited[i] = 0;
        }
    }

    //take input from user
    void input(int ver){
        int row = ver;
        int col = ver;

        cout<<"enter 1 or 0"<<endl;
        cout<<"1.edge is present \n2.no edge present";

        for(int i = 0; i < row;i++){
            for(int j = 0 ; j < col; j++){
                cout<<"at "<<i<<" , "<<j<<" : ";
                cin>>matrix[i][j];
            }
        }

    }


    int dfs(int s,int v){
        cout<<s<<" ";
        visited[s] = 1;
        for(int i = 0 ; i < v ; i++){
            if(matrix[s][i]==1 && visited[i]==0){
                dfs(i,v);
            }
        }


    }

};

int main(){
    graph g;
    int v;
    cout<<"enter the no. of vertices : ";
    cin>>v;

    g.input(v);

    int start;
    cout<<"enter the starting edge : ";
    cin>>start;

    g.dfs(start,v);

    return 0;
}