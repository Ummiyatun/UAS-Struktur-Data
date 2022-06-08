/*program c++ membuat undirected graph menggunakan representasi adjacency matriks*/
#include <bits/stdc++.h>
#include <iostream>
#define max 20

using namespace std;
int adj_mat [max][max];
/*inisialisasi matriks ke nol*/
void initialize (int i, int j, int v){
	for(i = 0; i < v; i++){
		for(j = 0; j < v; j++){
		 adj_mat[i][j] = 0;
		}
	}
}
/*menambahkan edge*/
void add_edge(int u, int v, int w)
{
	adj_mat[u][v] = w;
	adj_mat[v][u] = w;
}
/*mencetak matriks*/
void display_mat(int v){
int i,j;
	for(i = 1; i < v; i++){
		for(j = 1; j < v; j++){
			cout << adj_mat[i][j]<<" ";
		}
			cout << endl;
	}
}
/*input vertex*/
int main(){
	int v = 5;
	
	add_edge(1,2,5);
	add_edge(2,3,1);
	add_edge(4,1,3);
	add_edge(2,4,1);
	add_edge(3,1,1);
	
	display_mat(v);
	
return 0;
}
