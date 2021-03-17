int** getImage (int nRows, int nCols) {
    int **arr;
    arr = new int*[nRows];
    for(int i =0;i<nRows;i++){
        arr[i] = new int[nCols];
    }
    for (int i=0;i<nRows;i++){
        for (int j=0;j<nCols;j++){
           cin>>arr[i][j];
        }
    }
    return arr;
}
void fillImage (int** image, int nRows, int nCols, int threshold){
    for (int i=0;i<nRows;i++){
        for (int j=0;j<nCols;j++){
            if (image[i][j]<threshold)
            image[i][j]=0;
        }
    }
}
void print (int** image, int nRows, int nCols){
    for (int i=0;i<nRows;i++){
        for (int j=0;j<nCols;j++){
           cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
}
