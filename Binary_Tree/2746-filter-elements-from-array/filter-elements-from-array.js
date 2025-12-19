/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {

    let arr1=[];
    for(let i=0;i<arr.length;i++){
        val = fn(arr[i],i);
        if(val) arr1.push(arr[i]);
    }
    return arr1;

};