fn main() {
    let mut num_list: [i32; 7] = [1, 7, 5, -89, 2, 32, 8];

    println!("{:?}", num_list);
    selection_sort_iter(&mut num_list);
    println!("{:?}", num_list);
}

fn selection_sort(num_list: &mut [i32; 7]) {
    let mut min: usize;

    for i in 0..num_list.len() {
        min = i;
        for j in i + 1..num_list.len() {
            if num_list[min] > num_list[j] {
                min = j;
            }
        }
        if i != min {
            num_list.swap(i, min);
        }
    }
}

fn selection_sort_iter(num_list: &mut [i32; 7]) {
    for i in 0..num_list.len() {
        let min = (i..num_list.len()).min_by_key(|x| num_list[*x]).unwrap();
        num_list.swap(i, min);
    }
}
