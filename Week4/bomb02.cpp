#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

char mapMain[100][100];
bool mapBomb[100][100], choice[100][100], die = 0;
int bombAround[100][100], m, n,k , x, y, win = 0;

void displayMap();
void setMap();
void setBomb();
void init(int x, int y);
void play(int x, int y);
void update();
bool endGame();

int main(){
    cin >> m >> n >> k;
    setBomb();
    setMap();
    update();
    displayMap();
    do{
        cin >> x >> y;
    //    play();
    //    update()
        init(x, y);
        system("CLS");
        displayMap();
    }while(!endGame());
    if (die == 0)
        cout << "YOU'RE WINNER\n";
    else cout << "YOU'RE DEAD\n";
}


/// -----------------------------------------------------------------------------------------------------------------------
void setBomb(){
    int numberBomb = 0;
    srand((int)time(0));
    while (numberBomb < k){
        int x = rand()%m + 1;
        int y = rand()%n + 1;
        cout << x << ' ' << y << endl;
        if (mapBomb[x][y] == 0){
            mapBomb[x][y] = 1;
            numberBomb ++;
        }
    }
   /* mapBomb[10][10] = 1;
    mapBomb[5][5] = 1;
    mapBomb[15][15] = 1;
    mapBomb[8][8] = 1;*/

}
//------
void setMap(){
    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++)
            mapMain[i][j] = '.';
    }
}
//------
void displayMap(){
    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++)
            cout << mapMain[i][j] << ' ';
        cout << endl;
    }
}
//------
void play(int x, int y){
   // cout << "test";
    choice[x][y] = 1;
    win ++;
    if (mapBomb[x][y] == 1) {
        die = 1;
        mapMain[x][y] = '*';
    }else mapMain[x][y] = char(bombAround[x][y] + '0');
}
//------
bool endGame(){
    if (die == 1 || win == m*n - k) return 1;
    return 0;
}

void update(){
    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++){
            if (mapBomb[i - 1][j - 1]) bombAround[i][j] ++;
            if (mapBomb[i - 1][j]) bombAround[i][j] ++;
            if (mapBomb[i - 1][j + 1]) bombAround[i][j] ++;
            if (mapBomb[i][j - 1]) bombAround[i][j] ++;
            if (mapBomb[i][j + 1]) bombAround[i][j] ++;
            if (mapBomb[i + 1][j - 1]) bombAround[i][j] ++;
            if (mapBomb[i + 1][j]) bombAround[i][j] ++;
            if (mapBomb[i + 1][j + 1]) bombAround[i][j] ++;
        }
    }
}

void init(int x, int y){
    play(x, y);
   // cout << "xxx";
    if (mapBomb[x][y] == 0 && bombAround[x][y] == 0 && x < m && choice[x + 1][y] == 0 && mapBomb[x + 1][y] == 0)
        init(x + 1, y);
    if (mapBomb[x][y] == 0 && bombAround[x][y] == 0 && y < n && choice[x][y + 1] == 0 && mapBomb[x][y + 1] == 0)
        init(x, y + 1);
    if (mapBomb[x][y] == 0 && bombAround[x][y] == 0 && x > 1 && choice[x - 1][y] == 0 && mapBomb[x - 1][y] == 0)
        init(x - 1, y);
    if (mapBomb[x][y] == 0 && bombAround[x][y] == 0 && y > 1 && choice[x][y - 1] == 0 && mapBomb[x][y - 1] == 0)
        init(x, y - 1);
      //  cout << "aaaaaaaaaaaaaa";
       // displayMap();
    //}else init(x - 2, y + 1);
}
