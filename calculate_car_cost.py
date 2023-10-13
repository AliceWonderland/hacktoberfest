def calculate_car_cost(distance, fuel_efficiency, fuel_cost):
    car_cost = (distance / fuel_efficiency) * fuel_cost
    return car_cost

def calculate_public_transport_cost(monthly_pass_cost, monthly_trips):
    public_transport_cost = monthly_pass_cost
    return public_transport_cost

def main():
    print("Welcome to the Commute Cost Calculator!")

    # Input for car commute
    distance = float(input("Enter the distance of your daily car commute (in miles): "))
    fuel_efficiency = float(input("Enter your car's fuel efficiency (miles per gallon): "))
    fuel_cost = float(input("Enter the cost of fuel per gallon: "))

    car_cost = calculate_car_cost(distance, fuel_efficiency, fuel_cost)

    # Input for public transportation
    monthly_pass_cost = float(input("Enter the cost of a monthly public transport pass: "))
    monthly_trips = int(input("Enter the number of trips you make in a month: "))

    public_transport_cost = calculate_public_transport_cost(monthly_pass_cost, monthly_trips)

    # Compare and display results
    if car_cost < public_transport_cost:
        print("It's cheaper to commute by car. Car cost: $%.2f, Public transport cost: $%.2f" % (car_cost, public_transport_cost))
    elif public_transport_cost < car_cost:
        print("It's cheaper to use public transportation. Car cost: $%.2f, Public transport cost: $%.2f" % (car_cost, public_transport_cost))
    else:
        print("The costs are the same. Car cost: $%.2f, Public transport cost: $%.2f" % (car_cost, public_transport_cost))

if __name__ == "__main__":
    main()
