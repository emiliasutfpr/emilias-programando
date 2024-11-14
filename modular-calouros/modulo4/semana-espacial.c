#include <stdio.h>
#include <math.h>
#include <float.h> 

#define MAX_NAVES 100

//armazena coordenada
typedef struct {
    int x, y, z;
} Coordenada;

//calculo de distancia 3d
double calcularDistancia3D(int x1, int y1, int z1, int x2, int y2, int z2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

int main() {
    int quantidadeDeNaves;
    Coordenada listaDeCoordenadas[MAX_NAVES];
    
     scanf("%d", &quantidadeDeNaves);
    
       for (int i = 0; i < quantidadeDeNaves; i++) {
        scanf("%d %d %d", &listaDeCoordenadas[i].x, &listaDeCoordenadas[i].y, &listaDeCoordenadas[i].z);
    }

    double menorDistancia;
    double distancia;
    
  
    for (int i = 0; i < quantidadeDeNaves; i++) {
        menorDistancia = DBL_MAX;
        
        int x1 = listaDeCoordenadas[i].x;
        int y1 = listaDeCoordenadas[i].y;
        int z1 = listaDeCoordenadas[i].z;

        for (int j = 0; j < quantidadeDeNaves; j++) {
            if (i != j) {
                int x2 = listaDeCoordenadas[j].x;
                int y2 = listaDeCoordenadas[j].y;
                int z2 = listaDeCoordenadas[j].z;
                
                distancia = calcularDistancia3D(x1, y1, z1, x2, y2, z2);
                
                if (distancia < menorDistancia) {
                    menorDistancia = distancia;
                }
            }
        }
         
        if (menorDistancia >= 0 && menorDistancia <= 20) {
            printf("A\n");
        } else if (menorDistancia > 20 && menorDistancia <= 50) {
            printf("M\n");
        } else {
            printf("B\n");
        }
    }

    return 0;
}
