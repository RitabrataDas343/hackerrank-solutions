if __name__ == '__main__':
    n = int(raw_input())
    student_marks = {}
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores
    query_name = raw_input()
    for key, value in student_marks.items():
         if query_name == key:
            sumation = student_marks[key][0] + student_marks[key][1] + student_marks[key][2]
            f= sumation/3
            print('%.2f'%f)
