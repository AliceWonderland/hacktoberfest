// Define an array to store the products available for purchase.
const products = [
  { id: 1, name: 'Product A', price: 10.99 },
  { id: 2, name: 'Product B', price: 24.99 },
  { id: 3, name: 'Product C', price: 7.49 },
  // Add more products here...
];

// Initialize an empty shopping cart array.
let shoppingCart = [];

// Function to add a product to the shopping cart.
function addToCart(productId) {
  const productToAdd = products.find(product => product.id === productId);
  if (productToAdd) {
    shoppingCart.push(productToAdd);
    console.log(`${productToAdd.name} added to the cart.`);
  } else {
    console.log('Product not found.');
  }
}

// Function to remove a product from the shopping cart.
function removeFromCart(productId) {
  const indexToRemove = shoppingCart.findIndex(product => product.id === productId);
  if (indexToRemove !== -1) {
    const removedProduct = shoppingCart.splice(indexToRemove, 1)[0];
    console.log(`${removedProduct.name} removed from the cart.`);
  } else {
    console.log('Product not found in the cart.');
  }
}

// Function to calculate the total price of items in the cart.
function calculateTotalPrice() {
  const totalPrice = shoppingCart.reduce((total, product) => total + product.price, 0);
  return totalPrice.toFixed(2);
}

// Function to simulate the checkout process.
function checkout() {
  const total = calculateTotalPrice();
  console.log(`Total price: $${total}`);
  console.log('Thank you for shopping with us!');
  // You can add further actions like payment processing here.
  // Clear the shopping cart after checkout.
  shoppingCart = [];
}

// Example usage:
addToCart(1); // Add Product A to the cart.
addToCart(2); // Add Product B to the cart.
removeFromCart(1); // Remove Product A from the cart.
addToCart(3); // Add Product C to the cart.
console.log('Cart:', shoppingCart);
console.log('Total Price:', calculateTotalPrice());
checkout();
console.log('Cart after checkout:', shoppingCart);
