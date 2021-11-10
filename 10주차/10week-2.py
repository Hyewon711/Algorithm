# 비트연산을 통해 문자의 대소문자 바꾸기
str="GeekSfOrgEEks"

for i in str:
    if i.islower() : print(i.upper(),end="") 
    elif i.isupper() : print(i.lower(),end="")
    else: print(i,end="")   # 숫자출력을 위한 else문

#str.upper() : str을 대문자로 출력
#str.lower() : str을 소문자로 출력
#str.isupper() : str이 대문자인지 검사
#str.islower() : str이 소문자인지 검사