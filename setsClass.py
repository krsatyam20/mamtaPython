x={1,2,4,5,6}

print(type(x))

print(x)

#printing using loop

for i in x:
    print(i)

#using set()(method/function we can define set)

y=set(["mamta","kumari","jaiswal","motihari"])
print(y)

print(type(y))

#create empty set

emset={} # we will create dictionary

print(type(emset))

#empty set using set function

emset=set()
print(type(emset))

#adding items to the set
#using add() method we will add item
emset.add("mamta")
emset.add("kumari student")
print(emset)

for i in emset:
    print(i)

#update
  #update()

emset.update(["jais","kumar"])


for i in emset:
    print(i)
#removeing item
    #remove()/dicard()

emset.remove("jais")

#emset.dicard("jai")
print("Remove item")
for i in emset:
    print(i)

#pop :always remove the last item

emset=set(["jan","feb","mar","apr","may"])

emset.pop()

print(emset)

#Union b/w two sets

set1={1,2,3,4}
set2={3,4,5,6,7}
print(set1|set2) #union of two sets
print(set1 & set2) #Intersection of two sets

print(set1-set2)#Diffrence b/w two sets


print(set1^set2) #symmetric diffrence

#coparision/conditional (> "Superset",< "Subset" >= <= ==)

print(set1>set2) #true/false

set3={"a","b","kumari"}
set4={"a","mamta","motihari"}
print(set4>set3)




































    















































