#include<iostream>
const int row = 3;
const int col = 3;
bool win = false;

void input(char array[row][col], int &r, int &c);
void user1(char array[row][col]);
void user2(char array[row][col]);
void check(char array[row][col]);
void display(char array[row][col]);

int main(){
    char arr[row][col]={{' ',' ',' '},
                        {' ',' ',' '},
                        {' ',' ',' '}};
    while(!win){
        user1(arr);
        if(!win){
            user2(arr);
        }
    }
}

void input(char array[row][col], int &r, int &c){
    while(true){
        std::cout<<"Enter the row: ";
        std::cin>>r;
        std::cout<<"Enter the colomn: ";
        std::cin>>c;
        if(r<4 && r>0 && c<4 && c>0){
            if(array[r-1][c-1]!=' '){
                std::cout<<"You can not overwrite a move\n";
                continue;
            }
            break;
        }
        std::cout<<"The row and colomn should be between 1 and 3\n";
    }
}
void user1(char array[row][col]){
    int r, c;
    std::cout<<"********** USER 1 ************\n";
    input(array, r, c);
    array[r-1][c-1] = 'X';
    display(array);
    check(array);
}
void user2(char array[row][col]){
    int r, c;
    std::cout<<"********** USER 2 ************\n";
    input(array, r, c);
    array[r-1][c-1] = 'O';
    display(array);
    check(array);
}
void check(char array[row][col]){
    //Straight Lines
    for(int i=0; i<row; i++){
        if(array[i][col-3]=='X'&&array[i][col-2]=='X'&&array[i][col-1]=='X'){
            std::cout<<"User 1 has won\n";
            win = true;
            break;
        }
        if(array[i][col-3]=='O'&&array[i][col-2]=='O'&&array[i][col-1]=='O'){
            std::cout<<"User 2 has won\n";
            win = true;
            break;
        }
    }
    for(int i=0; i<col; i++){
        if(array[row-3][i]=='X'&&array[row-2][i]=='X'&&array[row-1][i]=='X'){
            std::cout<<"User 1 has won\n";
            win = true;
            break;
            
        }
        if(array[row-3][i]=='O'&&array[row-2][i]=='O'&&array[row-1][i]=='O'){
            std::cout<<"User 2 has won\n";
            win = true;
            break;
        }
    }

    //Diagonal Lines
    if(array[row-3][col-3]=='X'&& array[row-2][col-2]=='X'&& array[row-1][col-1]=='X'){
        std::cout<<"User 1 has won\n";
        win = true;
    }
    if(array[row-3][col-3]=='O'&& array[row-2][col-2]=='O'&& array[row-1][col-1]=='O'){
        std::cout<<"User 2 has won\n";
        win = true;
    }
}
void display(char array[row][col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            std::cout<<" | "<<array[i][j];
        }
        std::cout<<" |\n -------------\n";
    }
}