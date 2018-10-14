n = 3
d = dict(raw_input().split() for _ in range(n))
print d


def huffmanDecode (dictionary, text):
    res = ""
    while text:
        for k in dictionary:
            if text.startswith(k):
                res += dictionary[k]
                text = text[len(k):]
    return res
