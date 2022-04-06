#include<bits/stdc++.h>
using namespace std;

int kx, ky, dx, dy;
int matrix[200][200];
int ans_matrix[200][200];
vector<int> nums;

void InputMatrix(){ //输入原来的矩阵 √
    for(int i = 0; i < dx; i++){
        for(int j = 0; j < dy; j++){
            cin >> matrix[i][j];
        }
    }
}

void Function(){    //初始化池化窗口
    for(int row = 0; row < dx-kx+1; row++){
        for(int col = 0; col < dy-ky+1; col++){
            int max_num = 0;
            for(int i = row; i <= row+kx-1; i++){
                for(int j = col; j <= col+ky-1; j++){
                    if(matrix[i][j] >= max_num){
                        max_num = matrix[i][j];
                    }
                }
            }
            nums.push_back(max_num);
        }
    }
    // for(int i = 0; i < nums.size(); i++){
    //     cout << nums[i] << " ";
    // }
    int k = 0;
    for(int i = 0; i < dx-kx+1; i++){
        for(int j = 0; j < dy-ky+1; j++){
            ans_matrix[i][j] = nums[k];
            k++;
        }
    }
}

void OutputMatrix(){    //输出矩阵 √
    for(int i = 0; i < dx - 1; i++){
        for(int j = 0; j < dy -1; j++){
            cout << ans_matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> kx >> ky >> dx >> dy;
    InputMatrix();
    Function();
    OutputMatrix();
    return 0;
}