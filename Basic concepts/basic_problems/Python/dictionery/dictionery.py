import json
from difflib import get_close_matches

# Load dictionary data from the JSON file
with open("DicData.json") as file:   
    data = json.load(file)


def translate(word):
    word = word.lower()
    
    if word in data:
        
        return data[word]
    
    elif word.title() in data:
        
        return data[word.title()]
    
    elif word.upper() in data:
        
        return data[word.upper()]
    
    elif len(get_close_matches(word,data.keys()))>0:           #if length of getclose matches is greater than zero
        print("did you mean %s instead" %get_close_matches(word,data.keys())[0])   #first element of the close matchers 
        decide = input("press y for yes    or    n for no  :")
        if decide == 'y':
            return data[get_close_matches(word, data.keys())[0]]
        
        elif decide == 'n':
            
            return (" there is no close matches in this dictionery  ")
        
        else:
            return("You have entered wrong input please enter just y or n  :")
        
    else:
        print("you have entered wrong word !!!")


word = input("Enter the word you want to search :")
output = translate(word)
print(f"your searched word meaning : {output}")