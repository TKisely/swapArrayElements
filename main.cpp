#include <iostream>
#define ARRAYSIZE 10

using namespace std;

int myArray[ARRAYSIZE];

int* myListPointer= nullptr;
int elementNum=0;

void arrayIndexToIndex(){
    for (int i = 0; i < ARRAYSIZE; ++i) {
        myArray[i]=i;
    }
}

bool arraySwapItems(int pos1, int pos2){
    if(pos1<ARRAYSIZE&&pos2<ARRAYSIZE){
        int temp = myArray[pos1];
        myArray[pos1] = myArray[pos2];
        myArray[pos2]=temp;
        return true;
    }
    return false;

}

bool putFromConsole(){
    for (int i = 0; i < ARRAYSIZE; ++i) {
        cout<<"Please type the ["<<i<<"] number"<<endl;
        cin>>myArray[i];
    }
    return true;
}

bool orderArray(){
    for (int i = 0; i < ARRAYSIZE - 1; ++i) {
        for (int j = 0; j < ARRAYSIZE - i - 1; ++j) {
            if(myArray[j]>myArray[j+1]){
                arraySwapItems(j,j+1);
            }
        }
    }
    return true;
}

void printArray(){
    for (int i = 0; i < ARRAYSIZE; ++i) {
        cout<<"Array element at["<<i<<"] is "<<myArray[i]<<endl;
    }
}

void printSeparater(){
    cout<<"-----||-----"<<endl;
}


int main() {
    printArray();
    printSeparater();

    arrayIndexToIndex();
    printArray();
    printSeparater();

    arraySwapItems(5,8);
    printArray();
    printSeparater();

    putFromConsole();
    printSeparater();

    printArray();
    printSeparater();

    orderArray();
    printArray();


    printSeparater();
    std::cout << "Exectued!" << std::endl;
    return 0;
}