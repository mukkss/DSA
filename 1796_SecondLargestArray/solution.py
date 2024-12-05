class Solution:
    def secondHighest(self, s: str) -> int:
        largest = -1
        secondLargest = -1

        for c in s:
            if c.isdigit():
                digit = int(c)
                if digit > largest:
                    secondLargest = largest
                    largest = digit
                elif largest > digit > secondLargest:
                    secondLargest = digit

        return secondLargest