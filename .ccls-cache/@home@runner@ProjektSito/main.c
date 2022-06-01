#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Sito(int x,int *tab){
  for(int i=2;i<x+1;i++){
    for (int j=i+1;j<x+1;j++){
      if(j%i==0){
        tab[j]=1;
      }
    }
  }
}

void WypiszTablice(int x,int *tab){
    for(int i=2;i<=x;i++){
    if(tab[i]==0){
      printf("%d, ",i);
    }
  }
}

#define LIMIT 300000
int main() {
  printf("Wybierz poprzez wpisanie odpowiedniej cyfry:\n1: Obliczenie i wypisanie liczb pierwszych w przedziale\n2: Wpisanie liczb pierwszych z przedzialu do pliku\n3: Sprawdzanie czy liczby w pliku sa liczbami pierwszymi\n");
  int wybor;
  scanf("%d",&wybor);
  while (!(wybor==1 || wybor==2 || wybor == 3)){
    printf("Niepoprawna liczba, wybierz ponownie!\n");
    scanf("%d",&wybor);
  }
    if(wybor==1 || wybor==2){
      int start,stop,czas,N;
      int *TAB;
      printf("Wprowadz gorny przedzial dla ktorego chcesz szukac liczb pierwszych (gorny przedzial nie moze byc wiekszy niz %d z powodu czasu wykonywania programu): ",LIMIT);
      scanf("%d",&N);
      while(N>LIMIT || N<2){
        if(N>LIMIT){
          printf("Niepoprawne dane! Wprowadz mniejszy przedzial.\n");
        }
        if(N<2){
          printf("Niepoprawne dane! Wprowadz wiekszy przedzial.\n");
        }
        scanf("%d",&N);
      }
      TAB = malloc(sizeof(int)*N);
      for(int i=0;i<N;i++){
        TAB[i]=0;
      }
      TAB[0]=TAB[1]=1;
      if(wybor==1){
        printf("Liczby pierwsze w zakresie <2;%d>:\n",N);
        start = time(NULL);
        Sito(N,TAB);
        WypiszTablice(N,TAB);
        printf("\n");
        stop = time(NULL);
        czas = stop - start;
        printf("Program wykonywał się %d sekund(y).\n",czas);
      }
      if(wybor==2){
        printf("Rozpoczyna sie wpisywanie liczb do pliku.\n");
        char *nazwa;
        FILE *plik;
        nazwa = "wynikowy.dat";
        plik = fopen(nazwa,"w");
        fprintf(plik,"Liczby pierwsze w zakresie <2;%d>: \n",N);
        start = time(NULL);
        Sito(N,TAB);
        for(int i=2;i<=N;i++){
          if(TAB[i]==0){
          fprintf(plik,"%d, ",i);
          }
        }
        fprintf(plik,"\n");
        stop = time(NULL);
        czas = stop - start;
        fprintf(plik,"Program wykonywal sie %d sekund(y).\n",czas);
        fclose(plik);
        printf("Program skonczyl dzialanie. Mozesz sprawdzic wynik w pliku.\n");
      }
    }
  if(wybor==3){
    char *nazwa2;
    int napis;
    FILE *plik2;
    int *TABTest;
    int max;
    nazwa2 = "testowy.dat";
    plik2 = fopen(nazwa2,"r");
    fscanf(plik2,"%d",&napis);
    printf("%d\n",napis);
    fclose(plik2);
  }
    wybor = 0;
}



      /*for(int i=2;i<N+1;i++){
        for (int j=i+1;j<N+1;j++){
          if(j%i==0){
            TAB[j]=1;
          }
        }
      }
      for(int i=2;i<=N;i++){
        if(TAB[i]==0){
          printf("%d, ",i);
        }
      }*/