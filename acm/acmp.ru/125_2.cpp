#include <fstream>
using namespace std;
int main() {
  ifstream file("input.txt");
  ofstream out("output.txt");
  int x, i, j;
  file >> x;
  int count = 0;
  int **a = new int*[x];
  int *b = new int[x];
  for (int i = 0; i < x; i++) {
    a[i] = new int[x];
  }
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      file >> a[i][j];
    }
  }
  for (int i = 0; i < x; i++) {
    file >> b[i];
  }
  //Основная часть программы (обход матрицы смежности)
  for (i = 0; i < x; i++) {
    for (j = i + 1; j < x; j++) {
      //Проверка наличия моста между холмами
      if (a[i][j] == 1) {
        //Проверка цвета холмов
        if (b[i] != b[j]) {
          count++;
        }
      }
    }
  }
  out << count;
}