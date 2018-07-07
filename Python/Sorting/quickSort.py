# recursive implementation of quick sort in python

def quickSort(array):

 if len(array) > 1 :
  
  left = [ ]
  right = [ ]
  pivot = array[0]
  
  index = 1 # skips pivot
  while index < len(array) :
   
   if array[ index ] >= pivot :
    right.append( array[ index ] )
   
   else:
    left.append( array[ index ] )
    
   index += 1
  return quickSort( left )+[ pivot ]+quickSort( right ) 
 
 else: #returns array when contains 1 or 0 elements
  return array
  
  
