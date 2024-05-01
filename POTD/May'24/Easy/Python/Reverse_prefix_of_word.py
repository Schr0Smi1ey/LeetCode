class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        n = word.find(ch)
        i, j = 0,n
        arr = list(word)
        if n != -1:
            while i < j:
                arr[i],arr[j] = arr[j],arr[i]
                i += 1
                j -= 1
        return ''.join(arr)