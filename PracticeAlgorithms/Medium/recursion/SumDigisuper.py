def superDigit(n, k):
    # Write your code here
    if len(n)==1:
        return int(n)
    return superDigit(str(sum(map(int, n))*k),1)
