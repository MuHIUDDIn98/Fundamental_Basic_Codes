head = {
        "value": 11,
        "next" :    {
                        "value": 3,
                        "next" : {
                                    "value": 23,
                                    "next" : {
                                                    "value": 7,
                                                    "next" : {
                                                                    "value": 8,
                                                                    "next" : None
                                                                }
                                             }
                                }
                    }
      }


print(head['next']['next']['next']['value'])