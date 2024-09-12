#ifndef _cs4050_h
#define _cs4050_h

#ifdef __cplusplus
extern "C" 
{
#endif

// Types
typedef enum _Color
{
    WHITE,
    GRAY,
    BLACK,
    RED,
    BLUE,
} Color;

typedef struct _Edge
{
    int from;
    int to;
    float weight;
    Color color;
} Edge;

typedef struct _Adjacency
{
    Edge * pEdge;
    struct _Adjacency * next;
} Adjacency, * PAdjacency;

typedef struct _Vertex
{
    int number;
    Color color;
    int d;
    int f;
    int predecessor;
    PAdjacency list;
} Vertex;


// Prototypes
int IsDirected(void);
void SetDirected(int fIsDirected);
void GetCounts(int * pCountVertices, int * pCountEdges);
void GetEdge(Edge * pEdge);
void GetEdges(Edge edges[], int countEdges);
void PrintVertex(Vertex vertex);
void PrintVertices(Vertex vertices[], int count);
void AddAdjacentEdge(Vertex * pVertex, Edge * pEdge);
void BuildAdjacency(    Vertex vertices[],
                        Edge edges[],
                        int countVertices,
                        int countEdges);
void CleanUpAdjacency(Vertex vertices[], int countVertices);
#ifdef __cplusplus
}
#endif

#endif
