//  let a=[ [1,2,5,7],[2,4,7,2] ]

// a.findIndex(b)
// const b=(a)=>{
// console.log(a >6)
// }

// let k=["bfd","jfj",3,5]
// console.log(k);
//  let u=k.indexOf(3)
//  if(u>-1){
//     k.splice(u,1)
//  }

// console.log(k);


// let arr=[[4,9,"7873","kelvin",0,4,5,7,"kelvin"],
// [0,0,0],[3,4,5]]

// for(let i=0;i<arr.length;i++){

//   if(arr[i].indexOf(4)){//if its exist 
//     if(arr[i]>-1){
//       arr.splice(arr[i])
//     }
//     console.log(arr[i]);
//   }




// }


function handleDelete(arr,e){

    for(let i=0;i<arr.length;i++){
        let d=arr[i]
        // console.log(d);
        if(d.indexOf(e)){//chheck if it exist
            if(d>-1){
                arr.splice(arr[i])//to remove
            }
      console.log(arr[i]);//to return the values after deletion
        }      
        
    }
}
handleDelete([[1,1,1],[0,0,0],[2,2,2]],1)