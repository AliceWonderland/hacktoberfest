fatorial :: Int -> Int
fatorial n
	| n == 0 = 1
	| otherwise = ((fatorial (n - 1)) * n)