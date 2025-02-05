#include<stdio.h>

int matrix[3][3] = { {0,0,0}, {0,0,0}, {0,0,0} };

void print_matrix(){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (matrix[i][j] == 0){
                printf(" - ");
            }else if (matrix[i][j] == 1){
                printf(" X ");
            }else if (matrix[i][j] == 2){
                printf(" O ");
            }
            if (j<2){
                printf("|");
            }
        }
        if (i<2){
            printf("\n-----------\n");
        }
    }
}

int mark_position(int position,char mark){
    int x,y;
        position--;
        x=position/3;
        y=position%3;
        if (matrix[x][y]==0){
            matrix[x][y] = mark;
            return 1;
        }else{
            return 0;
        }

};

int check_win(){
    if (matrix[0][0]==matrix[0][1] && matrix[0][1] == matrix[0][2]){
        return matrix[0][0];
    }else if (matrix[1][0]==matrix[1][1] && matrix[1][1] == matrix[1][2]){
        return matrix[1][0];
    }else if (matrix[2][0]==matrix[2][1] && matrix[2][1] == matrix[2][2]){
        return matrix[2][0];
    }else if (matrix[0][0]==matrix[1][0] && matrix[1][0] == matrix[2][0]){
        return matrix[0][0];
    }else if (matrix[0][1]==matrix[1][1] && matrix[1][1] == matrix[2][1]){
        return matrix[0][1];
    }else if (matrix[0][2]==matrix[1][2] && matrix[1][2] == matrix[2][2]){
        return matrix[0][2];
    }else if (matrix[0][0]==matrix[1][1] && matrix[1][1] == matrix[2][2]){
        return matrix[0][0];
    }else if (matrix[0][2]==matrix[1][1] && matrix[1][1] == matrix[0][2]){
        return matrix[0][2];
    }else{
        return 0;
    }
};

void play(){
    int position;
    int player_turn = 0;
    int total_turns = 0;
    int sign;
    int outcome; 
    while (total_turns<9){
        printf("\nPlayer %d turn",player_turn+1);
        printf("\nEnter the Position you want to mark : ");
        scanf("%d",&position);

        int marked = mark_position(position,player_turn+1);
        if (marked){
            total_turns++;
            outcome = check_win();
            if (outcome){
                printf("\n");
                printf("*************************\n");
                printf("**                     **\n");
                printf("**       VICTORY!      **\n");
                printf("**   Player %d WINS!    **\n", outcome);
                printf("**                     **\n");
                printf("*************************\n");
                printf("\n");
                break;
            }
            player_turn = (!player_turn);
        }

        print_matrix();
    }
};

void main(){
    // print_matrix();
    play();
    print_matrix();
}

// void main(){
//     printf("%d",12%7);
// }