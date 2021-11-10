#Function to implement Floyd-Warshall Algorithm
INF = 99999
def printSolution(numOfVertices, distance):
    for i in range(numOfVertices):
        for j in range(numOfVertices):
            if(distance[i][j] == INF):
                print("INF", end=" ")
            else:
                print(distance[i][j], end=" ")
        print("")

def floydWarshall(numOfVertices, n):
    distance = n
    for k in range(numOfVertices):
        for i in range(numOfVertices):
            for j in range(numOfVertices):
                distance[i][j] = min(
                    distance[i][j], distance[i][k]+distance[k][j])

    printSolution(numOfVertices, distance)


n = int(input())
# Initialize matrix
matrix=[] 
for i in range(0,n):
 matrix.append([int(j) for j in input().split()])

floydWarshall(n, matrix)
