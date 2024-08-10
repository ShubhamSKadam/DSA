let input = [5,1,2,4,2];

const merge = (input,start,mid, end) => {
    let i=start,j=mid+1,k=0, temp[100];

    while()

}

const mergeSort = (input,start,mid) => {

    if(start>=end){
        return;
    }

    let mid = (start+end)/2;
    mergeSort(input,start,mid);
    mergeSort(input,mid+1,end);
    merge(input,start,mid,end);
}
