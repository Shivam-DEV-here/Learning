console.log("Hello World");

const a = slugify("https://www.youtube.com/watch?v=HC3-gSNbx00");
function slugify(text) {
    return text
        .toString()
        .toLowerCase()
        .replace(/[^a-z0-9]+/g, '-')
        .replace(/^-+|-+$/g, '');
}
console.log(a);

const b = slugify('som st&&*(^%$$^^&o)');
console.log(b);
