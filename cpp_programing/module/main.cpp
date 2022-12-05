#include "p_r_s.h"

int main(){
    outcome result;
    p_r_s player_choice,machine_choice;

    srand(time(NULL));

    while((player_choice = selection_by_player())!=quit)
    switch(player_choice){
        case p_r_s::paper:
        case p_r_s::rock:
        case p_r_s::scissor:
            machine_choice = selection_by_machine();
            result = compare(player_choice,machine_choice);
            report(result);
            break;
        case p_r_s::game:
            prn_game_status; 
    }
}