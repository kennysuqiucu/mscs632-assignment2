fn allocate_vector(size: usize) -> Vec<i32> {
    let mut v = Vec::with_capacity(size);
    for i in 0..size {
        v.push((i * i) as i32);
    }
    v
}

fn change_ownership(v: Vec<i32>) -> i32 {       // Notice it's not being passed in with the & symbol, so the vector is moved to this function and the caller loses ownership of it
    v.iter().sum()
}

fn main() {
    let owned = allocate_vector(1000);          // Allocate a vector of 1000 elements
    let total = change_ownership(owned);          // Move the vector to the function, which takes ownership of it
    println!("sum = {}", total);
    println!("owned[5] = {}", owned[5]);       // This line tries to access owned[5] after the vector has been moved, which is invalid and will cause a compile error
}
