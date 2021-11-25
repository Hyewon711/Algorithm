def solution(numbers):
    #0. key point
    numbers_str = [str(num) for num in numbers]                 #1. 사전 값으로 정렬하기
    numbers_str.sort(key=lambda num: num*3, reverse=True)       

    return str(int(''.join(numbers_str)))

print(solution([10, 68, 75, 7, 21, 12]))             # result : 77568211210