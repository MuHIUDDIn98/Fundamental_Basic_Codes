# Problem: Start with queue = []. Add "Job1", then "Job2".
#  Then remove "Job1" (the first item added) using pop(). Solution:

queue =[]
queue.append("job1")
queue.append("job2")
queue.append("job3")
processed_job = queue.pop(0)
print(queue)