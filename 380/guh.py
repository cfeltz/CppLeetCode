class RandomizedSet:

    def __init__(self):
        value_to_indice = dict()
        indices = set()

        


    def insert(self, val: int) -> bool:
        if val in value_to_indice:
            return False

        indices.add(value_to_indices.size() + 1)
        value_to_indice[val] = indices
        
        return True


    def remove(self, val: int) -> bool:
        if val not in value_to_indice:
            return False

        indices.remove(value_to_indice[val])

        
        return True
        

    def getRandom(self) -> int:
        

