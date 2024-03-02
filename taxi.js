const numberOfCars = (n, people) => {
    let count = [0, 0, 0, 0]; // Count of groups of each size

    // Count the number of groups of each size
    for (let i = 0; i < n; i++) {
        count[people[i] - 1]++;
    }

    let cars = count[3]; // Groups of size 4 directly go into separate cars

    // Pair groups of size 3 with single passengers or count as one car
    cars += count[2];
    count[0] = Math.max(0, count[0] - count[2]);

    // Pair groups of size 2 with other groups of size 2 or single passengers
    cars += Math.ceil(count[1] / 2);
    count[0] = Math.max(0, count[0] - (count[1] % 2) * 2);

    // Count remaining single passengers
    cars += Math.ceil(count[0] / 4);

    return cars;
};

console.log(numberOfCars(5, [1, 2, 4, 3, 3]));
console.log(numberOfCars(8, [2, 3, 4, 4, 2, 1, 3, 1])); 