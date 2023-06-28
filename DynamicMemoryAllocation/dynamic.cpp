#include "dynamic.h"

int main()
{
/*

    Example exObj, * exPtr;
    exPtr = &exObj;

    exObj.x = 10;
    exObj.y = 12;
    exObj.print();

    (*exPtr).x = 12;
    exPtr->y = 13;
    exPtr->print();
    int *ptr = new int;
    Example* ptrEx = new Example;
    ptrEx->x = 2;
    ptrEx->y = 10;
    ptrEx->print();
    delete ptrEx;


*/


/*
    //Single-Dim. Array
    int* ptrArray = new int[5];
    Example* ptrExArray = new Example[5];
    for (int i = 0; i < 5; i++) {
        ptrExArray[i].x = i;
        ptrExArray[i].y = i * i;
        ptrExArray[i].print();
    }
    delete[] ptrExArray;



*/



    
    //Multi-Dim. Array
    int** Array2D = new int* [5];
    Example** ExampleArray2D = new Example* [5];

    for (int i = 0; i < 5; i++) {
        ExampleArray2D[i] = new Example[5];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            ExampleArray2D[i][j].x = i;
            ExampleArray2D[i][j].y = j;
            ExampleArray2D[i][j].print();
        }
    }
    
    for (int i = 0; i < 5; i++) {
        delete[] ExampleArray2D[i];
    }
    delete[] ExampleArray2D;
}