#include<stdio.h>
#include<stdlib.h>
int source, V, E, time, visited[20], G[20][20];
void
DFS (int i)
{
  int j;
  visited[i] = 1;
  printf ("%d->", i + 1);
  for (j = 0; j < V; j++)
    {
      if (G[i][j] == 1 && visited[j] == 0)
{
 DFS (j);
}
    }
}

int
main ()
{
  int i, j, v1, v2;
  printf ("\n\n\n graph \n");
  printf ("enter the no of edges");
  scanf ("%d", &E);
  printf ("enter the no of vertices");
  scanf ("%d", &V);
  for (i = 0; i < V; i++)
    {
      for (j = 0; j < V; j++)
G[i][j] = 0;
    }
  for (i = 0; i < E; i++)
    {
      printf ("enter the edges(format:V1 V2):");
      scanf ("%d%d", &v1, &v2);
      G[v1 - 1][v2 - 1] = 1;
    }
  for (i = 0; i < V; i++)
    {
      for (j = 0; j < V; j++)
printf ("%d", G[i][j]);
      printf ("\n");
    }
  printf ("enter the source:");
  scanf ("%d", &source);
  DFS (source - 1);
  return 0;
}

/*OUTPUT
graph
enter the no of edges4
enter the no of vertices4
enter the edges(format:V1 V2):1
2
enter the edges(format:V1 V2):2
3
enter the edges(format:V1 V2):3
4
enter the edges(format:V1 V2):4
1
0100
0010
0001
1000
enter the source:1
1->2->3->4->
--------------------------------
Process exited after 22.51 seconds with return value 0
Press any key to continue . . .
*/
        
    





