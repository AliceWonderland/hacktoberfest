// Language: Rust
// ENV: Rustc within Bash  
// Name: Tiger Tux
// GitHub: https://github.com/Ordained-SubGenii

// Run by compiling binary file with 1) `rustc hello_world_ordained-subgenii.rs`
//                                   2) `./hello_world_ordained-subgenii`

// An attribute to hide warnings for unused code.
#![allow(dead_code)]

#[derive(Debug)]
// Custom data type of Structure, called Person wit name (as a string) and age (as unsigned integer primative)  
struct Person {
    name: String,
    age: u8,
}

fn main() {
    // Create struct with field init shorthand
    let name = String::from("Tigertux");
    let age = 40;
    let tigertux = Person { name, age };

    let greeting = String::from("Bon dia chicos!");

    println!("{ }", greeting); 
    println!("{:?}", tigertux);
}


