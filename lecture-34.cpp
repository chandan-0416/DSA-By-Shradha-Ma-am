//2D Arrays in C++ 
#include<iostream>
#include <climits>
#include<vector>
using namespace std;

//1. How to access the element from martrix? => track the Cell
// int main(){

//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int row =4;
//     int col=3;

//     cout<< matrix[2][2]<<endl;
//     return 0;
// }

//2. How to print all elements of matrix(as 2D)?
// int main(){

//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows =4;
//     int cols=3;

// for(int i=0; i<rows; i++){
//     for(int j=0; j<cols; j++){
//       cout<< matrix[i][j]<< " ";
//     }
//     cout<<endl;
// }
// cout<<endl;
//     return 0;
// }

//3. How to take input of 2D Array elements?
// int main(){
//     int matrix[4][3];
//     int rows =4;
//     int cols=3;

// //input
// for(int i=0; i<rows; i++){
//     for(int j=0; j<cols; j++){
//      cin>>matrix[i][j];
//     }
// }

// // output
// for(int i=0; i<rows; i++){
//     for(int j=0; j<cols; j++){
//       cout<< matrix[i][j]<< " ";
//     }
//     cout<<endl;
// }
//     return 0;
// }

//4. Linear Search in 2D Array - Find key=8 in 2D array (boolean)

// bool linearSearch(int mat[][3], int rows, int cols, int key){
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(mat[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows =4;
//     int cols=3;
//     cout<< linearSearch(matrix, rows, cols, 13)<<endl;
//     return 0;
// }

//5. Maximum Row Sum
// int getMaxSum(int mat[][3], int rows, int cols){
//      int maxRowSum = INT_MIN;
//      for(int i=0; i<rows; i++){
//         int rowSumI =0;
//         for(int j=0; j<cols;j++){
//             rowSumI +=mat[i][j];
//         }
//         maxRowSum =max(maxRowSum, rowSumI);
//      }
//      return maxRowSum;
// }

// int main(){
//     int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int rows =3;
//     int cols=3;
//     cout<< getMaxSum(matrix, rows, cols)<<endl;
//     return 0;
// }

//6. Diagonal Sum

// int diagonalSum(int mat[][4], int n){
//     int sum =0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i==j){
//                 sum+=mat[i][j];
//             } else if (j ==n-1-i){
//                 sum+=mat[i][j];
//             }
//         }
//     }
//     return sum;
// }

// int main(){
//     int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n=4;
//     cout<< diagonalSum(matrix,n)<<endl;
//     return 0;
// }

// more optimize
// int diagonalSum(int mat[][4], int n){ //o(n)
//     int sum =0;

//     //pd : j =  i
//     //sd : j = n-1-i
    
//     for(int i=0; i<n; i++){
//        sum += mat[i][i];
//        if(i != n-1-i){
//         sum +=mat[i][n-1-i];
//        }
//     }
//     return sum;
// }

// int main(){
//     int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n=4;
//     cout<< diagonalSum(matrix,n)<<endl;
//     return 0;
// }

//7. 2D Vector

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6,10,11},{7,8,9}}; // 3*3

    // rows => mat.size();
    // cols => mat[i].size();
    // we can dynamically add rows element

    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}
