def recursive_solution(remaining_sequence, bigger_than=None):                    
  """Finds the longest increasing subsequence of remaining_sequence that is      
  bigger than bigger_than and returns it.  This solution is O(2^n)."""           
  # Base case: nothing is remaining.                                             
  if len(remaining_sequence) == 0:                                               
    return remaining_sequence                                                    
  # Recursive case 1: exclude the current element and process the remaining.     
  best_sequence = recursive_solution(remaining_sequence[1:], bigger_than)        
  # Recursive case 2: include the current element if it's big enough.            
  first = remaining_sequence[0]                                                  
  if (first > bigger_than) or (bigger_than is None):                             
    sequence_with = [first] + recursive_solution(remaining_sequence[1:], first)  
    # Choose whichever of case 1 and case 2 were longer.                         
    if len(sequence_with) >= len(best_sequence):                                 
      best_sequence = sequence_with                                              
  return best_sequence      

a=[int(x) for x in raw_input().split()]
print(recursive_solution(a))
