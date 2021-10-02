export const colorCode = (color: string) => {
    return COLORS.indexOf(color.toLowerCase());
};
export const COLORS = [
    "black",
    "brown",
    "red",
    "orange",
    "yellow",
    "green",
    "blue",
    "violet",
    "grey",
    "white",
];

console.log('Black', colorCode('Black')); // Black

