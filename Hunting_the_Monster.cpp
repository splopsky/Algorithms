#include <iostream>
#include <string>


using namespace std;


//quick sort
void quickSort(int* array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}



int main() {

    int monster_hp;
    int weapon_num;
    int min_attack = 0;


    cin >> monster_hp >> weapon_num;

    

    int** data = new int* [weapon_num];
    for (int i = 0; i < weapon_num; ++i)
        data[i] = new int[2];

    //배열에 입력받기

    for (int i = 0; i < weapon_num; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> data[i][j];
        }
    }

    //기존 배열 출력
    /*
    for (int i = 0; i < weapon_num; i++) {
        for (int j = 0; j < 2; j++) {
            cout << data[i][j] << endl;
        }
    }
    */
   
    //정렬을 위한 공격력, 내구도 기반의 새로운 배열 각각 생성
    int* attack_arr = new int[weapon_num]();
    int* num_arr = new int[weapon_num]();

    
    for (int i = 0; i < weapon_num; i++) {
        attack_arr[i] = data[i][0];
    }
 

    /*
    //공격력 배열 출력
    for (int i = 0; i < weapon_num; i++) {
        cout << attack_arr[i] << endl;;
    }
    */
    
    //공격력 순으로 정렬하기

    quickSort(attack_arr, 0,  weapon_num - 1);

    //내구도 순서랑 공격력 순서랑 맞추기
    for(int i = 0; i < weapon_num; i++)
        for (int j = 0; j < weapon_num; j++)
        {
            if (data[i][0] == attack_arr[j])
                num_arr[j] = data[i][1];
        }


    
    
    
    /*
    cout << "=================================" <<  endl;
    //공격력 + 내구도 배열 출력
    for (int i = 0; i < weapon_num; i++) {
        cout << attack_arr[i] << "  " << num_arr[i] << endl;;
    }
    //내구도 배열 출력
    for (int i = 0; i < weapon_num; i++) {
        cout << num_arr[i] << endl;;
    }
    */

    //적용하기
 
        for (int i = weapon_num - 1; i >= 0; i--)
        {
            while (num_arr[i] > 0)
            {
                if (monster_hp <= 0)
                    break;
                monster_hp -= attack_arr[i];
                num_arr[i]--;
                min_attack++;
                
            }
    
    }

    //결과 출력
    cout << min_attack;


    //배열 삭제
    for (int i = 0; i < weapon_num; ++i) {
        delete[] data[i];
    }
    delete[] data;
    delete[] attack_arr;
    delete[] num_arr;

    
    return 0;

}

