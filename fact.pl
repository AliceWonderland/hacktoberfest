     factorial(0,1).
     factorial(N,Ans) :-
     N>0,
     N1 is N-1,
     factorial(N1, V),
     Ans is N*V.
