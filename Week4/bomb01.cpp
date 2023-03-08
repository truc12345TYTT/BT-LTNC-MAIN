#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int m, n, k, win = 0, bombAround[100][100];
bool a[100][100], bomb, choice[100][100];


void setBomb();
void mapBomb();
void displayMap();
void play(int x, int y);
void update(int x, int y);
void init(int x, int y);
void effect(int x, int y);

int main(){
    cin >> m >> n >> k;
   // setMap();
    displayMap();
    setBomb();
    mapBomb();
    do{
        int x, y;
        cin >> x >> y;
        //win ++;
       // update(x, y);
        system("CLS");
        update(x,y);
    }while (!bomb && win < m*n - k);
    if (m*n - k ==  win) cout << "YOU'RE WINNER\n"; // congaration
    return 0;
}

void setBomb(){
    srand((int)time(0));
    int i = 0;
   while(i < k){
        int x = rand()%m + 1;
        int y = rand()%n + 1;
        if (a[x][y] == 0){
            cout << x << ' ' << y << endl;
            a[x][y] = 1;
            i ++;
        }
    }
}

void mapBomb(){
    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++){
            if (a[i - 1][j - 1]) bombAround[i][j] ++;
            if (a[i - 1][j]) bombAround[i][j] ++;
            if (a[i - 1][j + 1]) bombAround[i][j] ++;
            if (a[i][j - 1]) bombAround[i][j] ++;
            if (a[i][j]) bombAround[i][j] ++;
            if (a[i][j + 1]) bombAround[i][j] ++;
            if (a[i + 1][j]) bombAround[i][j] ++;
            if (a[i + 1][j + 1]) bombAround[i][j] ++;
        }
    }
}

void displayMap(){
    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++){
            if (a[i][j] == 0 && choice[i][j]) cout << ' ' << bombAround[i][j] << ' ';
            if (choice[i][j] == 0) cout << " . ";
            if (a[i][j] && choice[i][j]) cout << " * ";
        }
        cout << endl;
    }
}

void play(int x, int y){
    choice[x][y] = 1;
    if (a[x][y]){
        bomb = 1;
        cout << "YOU'RE DEAD\n";
        return;
    }
}

void init(int x, int y){
    system("CLS");
    choice[x][y] = 1;
    win ++;
    displayMap();
}

void effect(int x, int y){
    choice[x][y] = 1;

}

void update(int x, int y){
    play(x,y);
    init(x,y);
   // effect(x,y);
}



