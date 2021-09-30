"""
A number is a Krishnamurthy number if the sum of the factorials of the digits of the number is equal to the number itself.
For example, 1, 2 and 145 are Krishnamurthy numbers.
"""

def kmurthy(n):  
  """
  Returns True if the number is a Krishnamurthy number and False if it is not.
  """ 
  
  #Initialising the variable s that will store the sum of the factorials of the digits to 0
  s=0
  #Storing the number n in a temporary variable tmp
  tmp=n
  
  #Only positive integers can be Krishnamurthy numbers
  if n<=0 or str(type(n))!="<class 'int'>":
    return False
  """
  >>> kmurthy(0)
  False
  >>> kmurthy(-9)
  False
  >>> kmurthy(2.3)
  False
  """
  
  else:    
    while n!=0:
      #Initialising the variable fact that will store the factorials of the digits
      fact=1
      #Computing factorial of each digit
      for i in range(1,n%10+1):
        fact=fact*i
      #Computing the sum of the factorials
      s=s+fact
      #Discarding the digit for which factorial has been calculated
      n=n//10
      
      #Evaluating if sum of the factorials of the digits equals the number itself
      if tmp==s:
        return True
      else:
        return False
      
      """
      >>> kmurthy(145)
      True
      >>> kmurthy(2)
      True
      >>> kmurthy(1)
      True
      """
