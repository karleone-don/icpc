def generate_brackets(n, current='', open_count=0, close_count=0):
    if len(current) == 2 * n:
        print(current)
        return
    
    if open_count < n:
        generate_brackets(n, current + '(', open_count + 1, close_count)
    if close_count < open_count:
        generate_brackets(n, current + ')', open_count, close_count + 1)

n = 2
generate_brackets(n)