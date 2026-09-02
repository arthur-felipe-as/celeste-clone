#include "raylib.h"
#include "bits/stdc++.h"

int main(){
    InitWindow(500, 500, "bom dia");
    std::string texto_na_tela = "Congrats! You created your first window!";


    while(!WindowShouldClose()){
        for (int i = 0; i < texto_na_tela.size(); i++)
        {
                            BeginDrawing();
                                ClearBackground(RAYWHITE);

                                DrawText(&texto_na_tela[i] , 190, 200, 20, LIGHTGRAY);
                            EndDrawing();                
        
        }
        
    }
    return 0;
}