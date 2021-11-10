#include <iostream>
#include <vector>

using namespace std;

int getParent(int set[], int x)
{
    if (set[x] == x) return x;
    return set[x] = getParent(set, set[x]);
}

void unionParent(int set[], int a, int b)
{
    a = getParent(set, a);
    b = getParent(set, b);
    if (a < b) set[b] = a;
    else set[a] = b;
}

int find(int set[], int a, int b)
{
    a = getParent(set, a);
    b = getParent(set, b);
    if (a == b) return 1;
    else return 0;
}

class Edge
{
public:
    int node[2];
    int distance;
    Edge(int a, int b, int distance)
    {
        this->node[0] = a;
        this->node[1] = b;
        this->distance = distance;
    }
    bool operator <(Edge& edge)
    {
        return this->distance < edge.distance;
    }
};

void quickSort(vector<Edge> & array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2].distance;
    int temp1, temp2, temp3;

    while (i <= j)
    {
        while (array[i].distance < pivot)
            i++;
        while (array[j].distance > pivot)
            j--;
        if (i <= j)
        {
            //cout << array[i].distance << " " << array[i].node[0] << " " << array[i].node[1]<< endl;
            temp1 = array[i].distance;
            temp2 = array[i].node[0];
            temp3 = array[i].node[1];
            array[i].node[0] = array[j].node[0];
            array[i].node[1] = array[j].node[1];
            array[i].distance = array[j].distance;
            array[j].distance = temp1;
            array[j].node[0] = temp2;
            array[j].node[1] = temp3;
            //cout << array[i].distance << " " << array[i].node[0] << " " << array[i].node[1] << endl<<endl;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}
int main(void)
{
    int node, edge;
    vector<Edge> data;
    cin >> node >> edge;
    
    for (int i = 0; i < edge; i++)
    {
        int x, y, d;
        cin >> x >> y >> d;
        data.push_back(Edge(x, y, d));
        
    }

  
    quickSort(data, 0, edge - 1);

    
    /*for (int i = 0; i < 15; i++)
    {
        cout << data[i].node[0] << " , " << data[i].node[1] << " , " << data[i].distance << endl;
    }
    */
    

    int* set = new int[node];

    for (int i = 0; i < node; i++)
    {
        set[i] = i;
    }

    int sum = 0;

    for (int i = 0; i < data.size(); i++)
    {
        if (!find(set, data[i].node[0] - 1, data[i].node[1] - 1))
        {
            sum += data[i].distance;
            unionParent(set, data[i].node[0] - 1, data[i].node[1] - 1);
        }
    }

    cout << sum;

    delete[] set;

}
