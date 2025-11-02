def is_haiku(h):
    return sorted([int(x) for x in h]) == [5, 5, 7]

def main():
    inp = input().split(" ")
    print("YES") if is_haiku(inp) else print("NO")

if __name__ == "__main__":
    main()
