class Shop:
    name = "Lotif Store"
    ads = "Bangladesh"

    def __init__(self, customer):
        self.customer = customer
        self.cart = []
        self.price = 0

    def calcAmount(self, amount, qty):
        return amount * qty

    @classmethod
    def classMethod(cls, name):
        cls.ads = name

    @staticmethod
    def multiply(x, y):
        return x*y

    def add_to_cart(self, item, price, qty):
        self.cart.append(item)
        self.price = self.calcAmount(price, qty)
        self.price = self.multiply(price, qty)


shopping = Shop("Lotif")
shopping.add_to_cart("shirt", 350, 5)

print(shopping.price)
shopping.classMethod("Jamalpur")
result = Shop.multiply(5, 10)
print(result)
print(shopping.ads)
