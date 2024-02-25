Teleport necessary when there are zeroes in your array, when there are larger numbers before smaller numbers in the array, when there's only one number in the arrat.
So run through the array once:
max = arr[first] - 1;
boolean increment = false;
if (arr.length > 1) {
    for (int i = 0; i < arr.length; i++) {
        if (arr[i] == 0) {
            increment == true;
        }
        else if (increment == true) {
            max += arr[i];
        }
    }
}
cout << max;;
//That's basically it
