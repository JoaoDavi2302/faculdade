#include <omp.h>
#include <stdio.h>

#define N 1000

double A[N][N];

void atualizar_in_place(int iteracoes) {
  double inicio = omp_get_wtime();

  for (int it = 0; it < iteracoes; it++) {
    for (int i = 1; i < N - 1; i++) {
      for (int j = 1; j < N - 1; j++) {
        // DEPENDÊNCIA DE DADOS (RAW - Read After Write):
        // A[i-1][j] e A[i][j-1] foram atualizados nesta mesma iteração `it`.
        // A[i+1][j] e A[i][j+1] ainda são da iteração anterior.
        A[i][j] =
            0.25 * (A[i - 1][j] + A[i + 1][j] + A[i][j - 1] + A[i][j + 1]);
      }
    }
  }

  double fim = omp_get_wtime();

  printf("\n[Tempo de Processamento (OpenMP)]: %.6f segundos\n", fim - inicio);
}

int main() { atualizar_in_place(10); }
