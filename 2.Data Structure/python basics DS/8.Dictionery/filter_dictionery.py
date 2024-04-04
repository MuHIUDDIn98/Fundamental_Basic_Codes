actors = [
    {'name':'sakib','age':34},
    {'name':'manna','age':50},
    {'name':'sabana','age':65},
    {'name':'bubli','age':30},
    {'name':'sabana','age':65},
]

senior_artists = filter(lambda actor:actor['age']>35, actors)
print(list(senior_artists))
