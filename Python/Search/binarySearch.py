#implementation of binary search in python
#complexity of O(log n)

def binarySearch(array , target):
    low , top = 0 , len(array)
    
    while True:   
    
         mid = int((low + top) / 2)
         
         if  array[mid] == target:
             return mid  #returns index if found
            
         elif array[mid] < target:
             low = mid
             
         else :
             top = mid

 
