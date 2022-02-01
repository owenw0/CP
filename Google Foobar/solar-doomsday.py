def solution(area):
    # Your code here
    squares = []
    while area > 0:
        square = int(area ** 0.5) ** 2
        area -= square
        squares.append(square)

    return squares


print(solution(12))
