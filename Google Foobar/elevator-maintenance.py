class Elevator:
    def __init__(self, elevator):
        div = list(map(int, elevator.strip().split(".")))
        self.str = elevator
        self.major = div[0]
        self.minor = div[1] if len(div) > 1 else -1
        self.revision = div[2] if len(div) > 2 else -1

    def __lt__(self, other):
        if self.major < other.major:
            return True
        if self.major > other.major:
            return False
        if self.minor < other.minor:
            return True
        if self.minor > other.minor:
            return False
        if self.revision < other.revision:
            return True
        if self.revision > other.revision:
            return False


def solution(l):
    solution = []
    for elevator in l:
        solution.append(Elevator(elevator))
    solution.sort()
    return [e.str for e in solution]
