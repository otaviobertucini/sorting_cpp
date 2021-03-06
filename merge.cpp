void split(int list[], int begin, int end){
    int pivot;
    pivot = (begin+end)/2;
    if(begin < end){
        split(list, begin, pivot);
        split(list, pivot+1, end);
        merge(list, begin, pivot, end);
    }
}

void merge(int list[], int begin, int pivot, int end){
    int index1, index2, size, *aux, i, enter, j;
    index1 = begin;
    index2 = pivot+1;
    size = end-begin+1;
    aux = new int[size];
    enter = 1;
    for(i=0; i<size; i++){
        if((index1 <= pivot && index2 <= end) || enter){
            enter = 0;
            if(list[index1] < list[index2]){
                aux[i] = list[index1];
                index1++;
            }
            else if(list[index1] > list[index2]){
                aux[i] = list[index2];
                index2++;
            }
        }
        else{
            if(index1 <= pivot){
                aux[i] = list[index1];
                index1++;
            }
            else{
                aux[i] = list[index2];
                index2++;
        int main() {
    int i, size=10;
    int list[10] = {8, 1, 3, 6, 4, 2, 10, 9, 5, 7};
    mergeSort(list);
    for(i=0; i<size; i++)
        cout << list[i] << endl;
    return 0;
}    }
        }
    }
    for(i=0, j=begin; i<size; i++, j++){
        list[j] = aux[i];
    }
}

int main() {
    int i, size=10;
    int list[10] = {8, 1, 3, 6, 4, 2, 10, 9, 5, 7};
    split(list, 0, 9);
    for(i=0; i<size; i++)
        cout << list[i] << endl;
    return 0;
}
