class Shop:
    products = {}

    def __init__(self, name, location, phone):
        self.name = name
        self.location = location
        self.__phone = phone

    def addProduct(self, id, name, price, qty):
        newProduct = {
            'name': name,
            'price': price,
            'qty': qty
        }
        Shop.products[id] = newProduct


shop1 = Shop("Naraz", "Dhaka Bd", '015xxxxxx')
shop2 = Shop("Kharaz", "chittagong", '017xxxxx')
shop2.addProduct(13, "Samsung Phone", 299, 4)
shop1.addProduct(11, "Smart Watch", 89, 7)

print(shop1.__dict__)

print(shop1.products)

# print(shop1._Shop__phone)
Shop.__password = "ksdjfkd343"

print(shop1.__password)
