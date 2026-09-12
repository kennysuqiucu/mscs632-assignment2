fn allocate_vector(size: usize) -> Vec<i32> {
    let mut vector = Vec::with_capacity(size);
    for i in 0..size {
        vector.push((i * i) as i32); 
    }
    vector
}

fn sum_borrowed(v: &Vec<i32>) -> i32 {
    vector.iter().sum()                              // Vector is summed and then sent back to the caller in let total = sum_borrowed(%owned)
}

fn main() {
    let owned = allocate_vector(1000);          // Allocate a vector of 1000 elements
    println!("owned[5] = {}", owned[5]);

    let total = sum_borrowed(&owned);   // Passing a reference to the vector instead of moving it, similar to C++ where we pass by reference
    println!("sum = {}", total);
    println!("owned[5] again = {}", owned[5]); // This is still valid if are just borrowing the vector, but if we had moved it, this line would be invalid and cause a compile error
}
