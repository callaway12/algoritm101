#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<int> cont;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int tmp_cont;
    for(int i = 0; i < moves.size(); i++){
        int tmp_inst = moves[i] - 1;

        // printf("tmp_inst :%d \n", tmp_inst+1);
        for(int j = 0; j < board.size(); j++){
            if(board[j][tmp_inst] == 0){
                tmp_cont = -1;
                continue;
            }else{
                tmp_cont = board[j][tmp_inst];
                // printf("tmp_cont : %d\n", tmp_cont);
                board[j][tmp_inst] = 0;
                break;
            }

        }

        if(!cont.empty()){
            int tmp_check = cont.back();


            // cout << tmp_check << endl;
            if(tmp_check == tmp_cont && tmp_cont != -1){
                cont.pop_back();
                // printf("tmp_check : %d     tmp_cont : %d \n", tmp_check, tmp_cont);
                answer++;
                // printf("answer: %d\n", answer);

                // for(int i = 0; i < board.size(); i++){
                //     for(int j = 0; j < board.size(); j++){
                //         printf("%d ", board[i][j]);
                //     }
                //     printf("\n");
                // }


            }else if(tmp_check != tmp_cont || cont.size() == 0){
                // printf("tmp_check : %d     tmp_cont : %d \n", tmp_check, tmp_cont);

                cont.push_back(tmp_cont);
                // cout << "cont 마지막 : " << cont.back() << endl;
                // for(int i = 0; i < board.size(); i++){
                //     for(int j = 0; j < board.size(); j++){
                //         // printf("%d ", board[i][j]);
                //     }
                //     // printf("\n");
                // }

                continue;
            }
        }else if(cont.empty()){
            // printf("처음이여야 \n");
            cont.push_back(tmp_cont);
            // for(int i = 0; i < board.size(); i++){
            //         for(int j = 0; j < board.size(); j++){
            //             printf("%d ", board[i][j]);
            //         }
            //         printf("\n");
            //     }
        }

    }

//     cout << cont.size();
//     for(int i = 0; i < cont.size(); i++){
//         printf("cont : %d\n", cont[i]);
//     }

    return answer*2;
}
