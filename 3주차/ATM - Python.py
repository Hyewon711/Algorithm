#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import pandas as pd

n = int(input())
time = list(map(int, input().split()))
time.sort()

ans = 0
for i in range(1, n+1):
    ans += sum(time[:i])
    
print(ans)


# In[ ]:




