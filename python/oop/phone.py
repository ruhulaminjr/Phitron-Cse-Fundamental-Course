class Phone:
    manufacture = "Bangladesh"

    def __init__(self, brand, price, ram, rom):
        self.brand = brand
        self.price = price
        self.ram = ram
        self.rom = rom

    def print_spec(self):
        print(
            f"Brand : {self.brand} Price : {self.price} Ram : {self.ram} Memory : {self.rom}")


my_phone = Phone("Samsung", 10000, 2, 32)
my_phone.print_spec()

new_phone = Phone("Redmi 11", 19566, 6, 64)

new_phone.print_spec()
