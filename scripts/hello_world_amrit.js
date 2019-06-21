class Person {
    constructor (name, city) {
        this.name = name ? name : "Anonymous"
        this.city = city ? city : "Jaipur, India"
    }   

    greetings(name = this.name, city = this.city) {
        let str = `Hello World by ${name} from ${city}`
        console.log(str)
        return str
    }
}

var myself = new Person("Amrit", "Jaipur, India")
myself.greetings()