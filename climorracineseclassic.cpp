#include <iostream>
#include <fstream>
using namespace std;
int main (){
    cout << "\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t\n\t\t\t\t\t\t\t\tBenvenuti Alla MORRA CINESEEE\t\t\t\t\t\t\t\t\n\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t---\t\n Vi presentiamo i due sfidanti di oggi, giocatore 1 e giocatore 2!\n Applaudite, applaudite, si sfideranno alla MORRA CINESEEE!!\n\n\n\n\n";
    int pl1, pl2, vincitore, pu1, pu2, more_game, a, b, c;
    bool loop_pl, loop_gioco, loop_quest, d, e, f;
    pu1 = 0;
    pu2 = 0;
    loop_gioco = true;
    while (loop_gioco){
        a = 0;
        b = 0;
        c = 0;
        loop_pl = true;
        while (loop_pl){
            cout << "le mosse valide sono : \n 1:sasso \n 2:carta \n 3:forbici \n";
            cout << "quale mossa tira il giocatore 1?  :  ";
            cin >> pl1;
            if ((pl1>=1)&&(pl1<=3)){
                loop_pl = false;
            }
            else {
                cout << "hai eseguito un tiro non valido!\n\n\n\n";

            }

        }
        loop_pl = true;
        while (loop_pl){
            cout << "le mosse valide sono : \n 1:sasso \n 2:carta \n 3:forbici";
            cout << "quale mossa tira il giocatore 2?  :  ";
            cin >> pl2;
            if ((pl1>=1)&&(pl1<=3)){
                loop_pl = false;
            }
            else {
                cout << "hai eseguito un tiro non valido!\n\n\n\n";

            }

        }
        if (pl1==pl2) {
            cout << "entrambi i giocatori hanno fatto pareggio!\n\n\n\n";
        }
        else {
            pl1 += 1;
            if (pl1>2){
                pl1 -= 3;
            }
            if (pl2>2){
                pl2 -= 3;
            }

            if (pl1==pl2){
                vincitore = 2;
                pu2 += 1;
            }
            else {
                vincitore =1;
                pu1 += 1;
            }

            cout << "ha vinto il giocatore " << vincitore << "\n congratulazioni!!!\n\n\n\n";
        }
        cout << "siamo a p1:p2 \n " << pu1 << ":" << pu2 << "\n";
        loop_quest = true;
        while (loop_quest){
            cout << "vuoi giocare ancora? \n0 : no \n1 : si \n2 : si, con reset punteggio\n";
            cout << "risposta  :  ";
            cin >> more_game;
            if ((more_game>=0)&&(more_game<=2)){
                loop_quest = false;
            }
            else {
                cout << "non ho ben capito!\n\n\n\n";

            }

        }
        if (more_game == 0){
            loop_gioco = false;
        }
        if (more_game == 2){
            pu1 = 0;
            pu2 = 0;
        }




    }























return 0;
}
