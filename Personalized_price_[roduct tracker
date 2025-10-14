
import requests
from bs4 import BeautifulSoup
import time

class PriceTracker:
    def __init__(self):
        self.products = {}

    def add_product(self, product_name, url, target_price):
        self.products[product_name] = (url, target_price)
        print(f"Tracking {product_name} at {url} with target price ${target_price}.")

    def check_prices(self):
        for product_name, (url, target_price) in self.products.items():
            response = requests.get(url)
            soup = BeautifulSoup(response.text, 'html.parser')
            price_tag = soup.find('span', class_='price')  # Adjust based on actual site
            if price_tag:
                current_price = float(price_tag.text.replace('$', '').replace(',', ''))
                if current_price <= target_price:
                    print(f"ALERT: {product_name} is now ${current_price}!")
                else:
                    print(f"{product_name} is still ${current_price}.")

    def start_tracking(self):
        while True:
            self.check_prices()
            time.sleep(3600)  # Check every hour

def main():
    tracker = PriceTracker()
    
    while True:
        product_name = input("\nEnter the product name (or 'quit' to exit): ")
        if product_name.lower() == 'quit':
            break
        url = input("Enter the product URL: ")
        target_price = float(input("Enter your target price: "))
        tracker.add_product(product_name, url, target_price)

    tracker.start_tracking()

if __name__ == "__main__":
    main()
