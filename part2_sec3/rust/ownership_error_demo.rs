fn take_ownership(s: String) {
    println!("Took ownership of '{}'", s);
}

fn main() {
    let original = String::from("Hello, Rust ownership!");
    take_ownership(original);          // ownership MOVES into the function
    println!("{}", original);          // ERROR: use after move
}
