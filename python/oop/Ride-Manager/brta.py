import random
import uuid


class BRTA:
    def __init__(self):
        self.__licences = {}

    def take_driving_test(self, email):
        score = random.randint(20, 100)
        if score > 33:
            # print("Congratulation You Passed : ", score)
            licence = str(uuid.uuid4())
            self.__licences[email] = licence
            return licence
        # print("Sorry You Failed Driving Test : ", score)
        return False

    def validate_licence(self, email, licence):
        if email in self.__licences.keys():
            if self.__licences[email] == licence:
                # print("Licence is Valid")
                return True
        # print("Licence is Invalid")
        return False
