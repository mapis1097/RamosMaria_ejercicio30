#include <iostream>
#include<cmath>
//se llama el metodo
void ecuacion (float s, float d, int Ctiempo, int Cespacio, float deltaT, float deltaX);
float max_vector(float *vector, int N);

//ejecuta el codigo
int main (int argc, char **argv){
    int param = atoi(argc[1]);
    if(param == 10){
        int Cespacio = 30;
    }
    else if(param == 30){
        int Cespacio = 10;
    }
    else{
        int Cespacio =100;
    }
    //variables
    float phi_1 = 0.0;
    float phi_2 = 0.0;
    float deltaX = 2.0/Cespacio;
    float tiempo = 1;
    float D = 1;
    float deltaT = deltaX*deltaX/(2*D);
    float s = 1;
    float inicial = 0;
    int CTiempo = (int) (tiempo / deltaT);
    
    
    ecuacion(s, D, CTiempo, CEspacio, deltaT, deltaX);
   
 return 0;
}




//metodos
void ecuacion (float s, float d, int Ctiempo, int Cespacio, float deltaT, float deltaX){
    float anterior[Cespacio];
    float actual[Cespacio];
    float maximo[Ctiempo];
    float maximo_absoluto;
 for ( int l = 0; l < Cespacio; l++){
            anterior[l] = 0;
        }
    for (int i = 0; i < Ctiempo; i ++){
        std::cout<<std::endl;
        maximo[i] = max_vector(anterior, Cespacio);
               
        for (int k = 0; k < Cespacio; k++){
            std::cout << anterior[k]<< "\t";
            
        }
        std::cout<<std::endl;
        for (int j = 0; j < Cespacio; j ++)
        {
            if (j == 0 || j == Cespacio-1){
                actual[j] = 0;
            }
            else{
                actual [j] = anterior[j] + (d*deltaT/pow(deltaX,2))*(anterior[j+1]- (2.0* anterior[j]) + anterior[j-1]) + (deltaT*s);        
            }
           
        }
        for ( int l = 0; l < Cespacio; l++){
            anterior[l] = actual[l];
        }
         
    }
    std::cout<<std::endl;
    maximo_absoluto = max_vector(maximo, Ctiempo); 
    for (int t = 0; t< Cespacio; t++){
      std::cout <<maximo_absoluto<<"\t"; 
        
    }
    std::cout<<std::endl;
    
}

float max_vector(float *vector, int N){
    float mayor = *vector;
    for (int i=0; i<N; i++){
        if (*(vector + i) > mayor){
            mayor=*(vector + i);
    }
}
    return mayor;
}
    
