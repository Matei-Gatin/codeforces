//
// Created by matt on 9/15/26.
//

#include <iostream>

using namespace std;

void verify_watermelon(const int w) {
    if (w > 2 && w % 2 == 0) {
        printf("YES\n");
        return;
    }

    printf("NO\n");
}

int main() {
    int w;
    cin >> w;

    verify_watermelon(w);

    return 0;
}
