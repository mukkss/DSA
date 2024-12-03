int secondHighest(char* s) {
    int largest = -1, secondLargest = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            int digit = s[i] - '0';
            if (digit > largest) {
                secondLargest = largest;
                largest = digit;
            } else if (digit > secondLargest && digit < largest) {
                secondLargest = digit;
            }
        }
    }

    return secondLargest;
}