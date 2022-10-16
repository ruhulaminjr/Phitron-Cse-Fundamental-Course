class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        self.cart.append({'item': item, 'price': price, 'qty': quantity})

    def pay_bill(self, amount):
        totalcost = 0
        for item in self.cart:
            cost = item['price'] * item['qty']
            totalcost += cost
        if amount < totalcost:
            print(
                f"Not Enough Balance to Buy you need more {totalcost - amount} to buy")
        elif amount > totalcost:
            print(
                f"Thanks for shopping Your return Money is {amount - totalcost}")
        else:
            print("Thans for Buying ")


shop = Shopping('Ruhul')
shop.add_to_cart("shoe", 1299, 1)
shop.add_to_cart("Pant", 899, 2)
shop.add_to_cart("T-Shirt", 499, 3)

shop.pay_bill(4594)
shop.pay_bill(5000)
