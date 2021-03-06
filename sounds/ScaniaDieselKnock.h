const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 852;
const signed char knockSamples[] = {
0, -5, -20, -51, -66, -55, -47, -42, -44, -46, -27, -5, 36, 70, 110, 127,
119, 115, 100, 88, 76, 59, 42, 19, 18, 12, 16, 28, 30, 28, 25, 17, 
-5, -21, -12, -12, -19, -27, -32, -30, -34, -38, -33, -32, -40, -41, -46, -55, 
-52, -52, -57, -38, -25, -16, 0, 21, 33, 35, 43, 49, 50, 57, 60, 54, 
50, 44, 48, 52, 53, 58, 50, 35, 33, 41, 39, 36, 36, 33, 32, 36, 
40, 47, 56, 63, 57, 29, 13, -2, -6, -10, -15, -11, -19, -13, 4, 12, 
23, 36, 36, 36, 37, 33, 18, 10, 8, 12, 13, 18, 33, 29, 30, 31, 
29, 29, 27, 30, 26, 14, 6, 4, 9, 14, 17, 25, 28, 26, 23, 17, 
16, 18, 13, 0, -3, -8, -4, 5, 9, 16, 18, 13, -1, -17, -28, -28, 
-29, -34, -38, -39, -25, -8, -2, -2, -8, -24, -30, -32, -35, -42, -49, -49, 
-43, -35, -26, -18, -9, 2, 4, -1, -2, -6, -12, -9, -5, -5, 3, 17, 
13, 4, -13, -25, -30, -46, -54, -62, -69, -73, -79, -84, -85, -78, -64, -58, 
-57, -50, -47, -49, -53, -54, -55, -58, -60, -61, -60, -53, -36, -37, -41, -39, 
-40, -38, -11, 1, 14, 21, 19, 22, 24, 20, 17, 16, 19, 23, 8, -17, 
-41, -49, -53, -53, -43, -34, -20, -14, -12, -11, -16, -19, -18, -14, -6, -3, 
-6, -6, -8, -19, -24, -25, -30, -27, -16, -7, -3, -8, -11, -12, -15, -16, 
-6, 11, 23, 32, 37, 45, 49, 53, 55, 48, 49, 49, 40, 35, 27, 21, 
32, 42, 59, 68, 70, 75, 78, 75, 71, 67, 64, 61, 55, 39, 31, 30, 
29, 24, 21, 30, 36, 33, 21, 18, 23, 25, 28, 32, 38, 42, 48, 46, 
39, 28, 8, -4, -16, -11, 6, 23, 28, 32, 30, 26, 25, 31, 39, 42, 
37, 26, 10, -14, -18, -15, -8, -2, 0, 2, 2, 3, -3, -10, -19, -34, 
-39, -29, -21, -20, -22, -21, -14, -14, -24, -22, -19, -21, -27, -41, -44, -29, 
-24, -28, -28, -20, -11, -5, -11, -17, -29, -34, -28, -23, -16, -19, -24, -28, 
-35, -33, -30, -31, -34, -39, -55, -66, -67, -59, -48, -55, -64, -72, -75, -66, 
-55, -52, -51, -49, -51, -50, -43, -39, -44, -48, -45, -42, -38, -30, -27, -24, 
-20, -13, -7, -7, -3, -10, -23, -31, -38, -38, -29, -17, -14, -3, 2, 7, 
10, 8, 9, 8, 5, 6, 15, 21, 30, 48, 43, 33, 22, 13, -23, -27, 
-17, -10, -2, 1, 3, 7, 10, 7, 9, 7, 9, 16, 16, 13, 9, 6, 
0, -5, -12, -16, -12, -7, 3, 14, 22, 28, 25, 32, 44, 49, 48, 50, 
60, 65, 63, 57, 56, 53, 38, 29, 32, 34, 26, 25, 29, 27, 22, 21, 
23, 25, 30, 34, 31, 27, 21, 8, 5, 10, 11, 8, 19, 24, 20, 19, 
18, 15, 26, 38, 44, 40, 37, 38, 28, 27, 27, 28, 24, 13, 15, 19, 
26, 29, 27, 14, 8, 3, 0, 3, 4, -1, 2, 6, 6, 5, -6, -5, 
-3, -7, -3, 4, 9, 7, 6, -1, -10, -5, -3, -3, 6, 17, 18, 17, 
19, 17, 15, 12, 6, 2, 5, 12, 20, 23, 14, 12, 12, 7, -1, -6, 
-12, -16, -14, -13, -12, -11, -6, -6, -12, -10, -4, -3, -8, -20, -28, -26, 
-17, -7, -9, -9, -10, -8, -9, -13, -7, -9, -18, -23, -18, -15, -13, -19, 
-32, -41, -38, -37, -37, -31, -24, -16, -13, -14, -8, -9, -11, -14, -15, -18, 
-24, -25, -26, -32, -32, -28, -21, -16, -10, -3, 0, 11, 16, 5, -1, 5, 
0, -9, -7, -5, -15, -15, -12, -10, -9, -9, -14, -17, -15, -11, -8, -1, 
12, 23, 22, 18, 20, 22, 20, 19, 16, 10, 6, 7, 8, 11, 10, -3, 
-12, -18, -26, -29, -31, -33, -26, -19, -22, -20, -2, 4, -6, -4, -5, -12, 
-19, -18, -18, -14, -8, -4, 3, 15, 16, 20, 30, 42, 52, 62, 64, 58, 
54, 50, 49, 49, 50, 53, 54, 53, 38, 27, 15, 5, 0, -2, -2, -3, 
6, 19, 26, 25, 19, 12, 0, -11, -17, -21, -19, -13, -4, 0, 0, 2, 
8, 15, 22, 31, 34, 27, 21, 17, 21, 29, 28, 23, 23, 28, 29, 23, 
13, -3, -11, -11, -17, -33, -33, -24, -15, -10, -9, -3, 8, 14, 20, 23, 
15, 5, -1, -3, -7, -5, 0, 3, 1, -2, -5, -7, -12, -13, -14, -17, 
-23, -21, -16, -19, -26, -27, -21, -20, -25, -28, -32, -40, -46, -47, -42, -36, 
-30, -24, -19, -17, -15, -15, -14, -7, -3, -9, -17, -26, -36, -43, -42, -39, 
-30, -21, -19, -14, -8, -4, -4, -5, -9, -24, -29, -31, -30, -28, -31, -23, 
-17, -14, -7, -1, 8, 12, 20, 24, 18, 11, -3, -8, -7, -2, -3, -14, 
-23, -27, -32, -34, -35, -35, -31, -25, -31, -46, -51, -48, -42, -31, -17, -7, 
-6, -3, -2, 0, };
