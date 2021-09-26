def ubiquitous_binary_search(a,key) # a is the array and key is the value we want to search
    lo= 0
    hi = a.length-1
    
    while(hi-lo>1)
     mid = lo + (hi-lo)/2
     
     if a[mid]<=key
         lo=mid
     else
         hi=mid
     end
    end
    
    if (a[lo]== key)
        return lo
    else
        return "value not found"
    end
end
