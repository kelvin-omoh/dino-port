// var hond;
// var mary=(12+3+4);
// var odion=(134+5+89);
// switch(hond){
// case(mary>odion):
//     console.log("i am enaikele");break;
// case(odion>mary):
//     console.log("my name is odion");break;
// default:console.log("error message");
// }






/* const binarySearch = (begin,end , array,target )=>{

    midpoint = (begin+end)/2



    if(array[midpoint]=== target){
        return midpoint
    }
    else if(array[midpoint]>target){
        return binarySearch(begin,midpoint-1,array,target)
    }
    else if(array[midpoint]<target){
        return binarySearch(midpoint + 1, end,array,target)
    }
    else{
        console.log('Item was not found');
    }


}
console.log(binarySearch(0,6,[1,2,3,4,5,6,7,8,9,10],7));
 */


let arr = [5,2,1,4,3,1000,45,111]

function swap(first, second,arr){
    let temp = arr[first];
    arr[first]= arr[second];
    arr[second] = temp

}


const bubbleSort = (arr)=>{

  

    for(let i=0;i<arr.length;i++){

        for(let j=0; j<arr.length-1; j++){
            if(arr[j]>arr[j+1]){
                swap(j,j+1,arr)
               
            }

        }
    }
}

bubbleSort(arr)

console.log(arr);


