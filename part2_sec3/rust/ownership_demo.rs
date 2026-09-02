// Rust: ownership and borrowing manage memory automatically and safely,
// with all checks performed at COMPILE TIME by the borrow checker.
// There is no garbage collector and no manual free() call.

fn print_length(s: &String) {          // borrows s (read-only reference)
    println!("'{}' has length {}", s, s.len());
}

fn take_ownership(s: String) {         // takes ownership; s is dropped
    println!("Took ownership of '{}': memory freed when this fn ends", s);
} // <- s's heap buffer is automatically freed here (Drop)

fn main() {
    let original = String::from("Hello, Rust ownership!"); // heap-allocated

    print_length(&original);           // lend a reference, original still valid
    print_length(&original);           // can borrow immutably many times

    take_ownership(original);          // ownership MOVES into the function
    // println!("{}", original);       // <-- would NOT compile: value moved

    let mut counter = String::from("count: ");
    {
        let counter_ref = &mut counter; // exclusive mutable borrow
        counter_ref.push_str("1");
    } // mutable borrow ends here
    println!("{}", counter);
    println!("main() ends: 'counter' is dropped and its memory freed automatically");
}
