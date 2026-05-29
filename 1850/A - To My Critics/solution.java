var input = readline().split(' ');
var t = parseInt(input[0]);
while (t--) {
    var line = readline().split(' ');
    var a = parseInt(line[0]);
    var b = parseInt(line[1]);
    var c = parseInt(line[2]);
    if (a + b >= 10 ||a + c>= 10 || b + c >= 10) {
        print("YES");
    } else {
        print("NO");
    }
}