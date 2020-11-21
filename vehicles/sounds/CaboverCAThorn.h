const unsigned int hornSampleRate = 22050;
const unsigned int hornSampleCount = 5131;
#define HORN_LOOP
const unsigned int hornLoopBegin = 1752; // Adjust start of loop manually
const unsigned int hornLoopEnd = 1870; // Adjust end of loop manually
const signed char hornSamples[] = {//0
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, //16
-1, -1, -1, -1, -1, -2, -2, -2, -1, -1, -1, -1, 0, 0, 1, 1, //32
2, 3, 2, 2, 1, 1, 1, 0, -3, -3, -3, -3, -4, -4, -3, -1, //48
-1, -1, 0, 1, 3, 5, 5, 6, 7, 6, 4, 3, 2, 1, 0, -1, //64
-3, -3, -4, -5, -5, -4, -4, -4, -4, -4, -3, -3, -4, -5, -5, -3, //80
-1, 0, 0, -3, -3, -3, -5, -4, -3, -2, 0, 1, 4, 7, 8, 9, //96
9, 7, 5, 3, 3, 3, 2, 1, 2, 1, 1, 1, -1, 1, 5, 5, //112
5, 2, 0, -1, -3, -4, -3, -4, -5, -5, -6, -7, -9, -10, -9, -8, //128
-6, -7, -7, -7, -8, -8, -8, -6, -6, -7, -6, -4, -1, 2, 6, 10, //144
11, 10, 9, 7, 8, 7, 3, 0, -4, -7, -11, -14, -14, -15, -15, -10, //160
-8, -3, 2, 7, 11, 13, 17, 19, 18, 19, 18, 18, 17, 12, 7, 5, //176
1, -2, -7, -9, -10, -11, -12, -13, -11, -8, -5, -2, -4, -3, -4, -8, //192
-8, -8, -8, -7, -8, -7, -8, -5, -2, -2, -1, 2, 7, 11, 15, 16, //208
17, 18, 16, 12, 5, 3, 2, -3, -6, -3, 3, 6, 8, 7, 6, 5, //224
2, 1, -2, 1, 3, 3, 6, 7, 5, 4, 0, -1, -4, -11, -13, -12, //240
-11, -9, -14, -22, -24, -24, -20, -18, -17, -14, -13, -8, -2, 0, 1, 4, //256
4, 6, 6, 3, 3, 7, 6, 5, 2, -1, -7, -9, -15, -25, -28, -23, //272
-13, -12, -9, -5, -1, 6, 11, 13, 19, 27, 31, 29, 31, 39, 44, 44, //288
39, 34, 36, 30, 23, 14, 9, 9, 0, -12, -20, -22, -24, -25, -29, -33, //304
-34, -36, -41, -37, -27, -22, -24, -27, -27, -21, -16, -14, -11, -9, -4, 0, //320
-2, 2, 14, 24, 23, 23, 23, 18, 19, 22, 25, 31, 33, 27, 14, 9, //336
10, 11, 13, 16, 13, 8, 3, -4, -6, 3, 1, -6, -9, -12, -20, -26, //352
-26, -25, -27, -34, -34, -26, -23, -25, -31, -31, -13, -6, 0, 6, 8, 6, //368
-1, 2, 5, 7, 7, 5, 3, 0, 3, 11, 17, 22, 20, 9, -3, -12, //384
-27, -44, -45, -43, -40, -35, -32, -27, -24, -17, -6, 5, 30, 42, 48, 62, //400
74, 76, 75, 75, 85, 89, 80, 73, 64, 51, 34, 16, 4, -5, -13, -21, //416
-29, -34, -35, -40, -48, -56, -61, -68, -74, -81, -86, -82, -74, -68, -58, -47, //432
-33, -19, -8, 1, 18, 27, 35, 44, 52, 62, 70, 72, 66, 57, 50, 47, //448
42, 37, 37, 32, 23, 13, 1, -4, -8, -15, -28, -37, -42, -46, -45, -43, //464
-43, -39, -38, -33, -31, -30, -27, -25, -19, -20, -20, -14, -12, -9, -4, 5, //480
15, 22, 25, 31, 39, 36, 27, 22, 14, 10, 9, 5, 7, 5, 0, 0, //496
-5, -10, -22, -35, -52, -59, -53, -47, -42, -35, -31, -28, -22, -14, -2, 9, //512
27, 45, 59, 85, 87, 84, 85, 90, 89, 77, 71, 64, 58, 52, 32, 11, //528
-3, -16, -28, -48, -56, -47, -53, -61, -66, -66, -61, -67, -76, -80, -76, -68, //544
-62, -56, -49, -45, -40, -29, -21, -14, -4, 17, 34, 57, 79, 90, 92, 92, //560
100, 96, 86, 78, 69, 61, 56, 47, 31, 26, 20, 1, -22, -31, -41, -48, //576
-53, -56, -50, -49, -48, -47, -50, -41, -36, -43, -45, -43, -40, -30, -29, -25, //592
-13, -4, 8, 11, 13, 16, 22, 30, 32, 27, 20, 14, 10, 8, 7, 7, //608
6, 8, 13, 11, 12, 10, 7, 5, -10, -57, -66, -59, -55, -49, -43, -38, //624
-29, -17, -9, -4, 32, 52, 68, 93, 102, 96, 86, 79, 73, 66, 60, 50, //640
42, 37, 33, 26, 20, -1, -9, -23, -42, -42, -52, -63, -60, -70, -63, -61, //656
-70, -81, -98, -94, -84, -78, -68, -62, -51, -39, -30, -21, -8, 17, 37, 51, //672
82, 107, 103, 97, 90, 84, 77, 69, 64, 58, 53, 46, 41, 32, 28, 12, //688
-11, -20, -43, -58, -66, -81, -84, -77, -77, -70, -73, -75, -67, -64, -42, -27, //704
-29, -16, 7, 2, 21, 34, 37, 46, 39, 33, 39, 40, 42, 39, 28, 21, //720
13, -2, -2, 0, -10, -9, -14, -21, -14, -10, -7, 1, 0, -20, -44, -44, //736
-40, -36, -32, -28, -21, -19, -8, 9, 15, 28, 40, 63, 93, 101, 104, 101, //752
88, 82, 73, 67, 60, 51, 41, 34, 16, -3, -9, -2, -22, -46, -40, -42, //768
-55, -71, -84, -79, -83, -89, -95, -95, -85, -81, -73, -63, -58, -49, -43, -39, //784
-31, -22, 16, 39, 52, 84, 110, 108, 99, 92, 88, 83, 75, 69, 61, 54, //800
48, 41, 32, 26, 12, -9, -22, -35, -55, -72, -87, -97, -89, -87, -78, -72, //816
-63, -41, -39, -40, -13, -12, -5, 15, 18, 29, 48, 54, 58, 48, 44, 41, //832
35, 33, 24, 12, 3, -5, -22, -20, -3, 1, -7, -21, -35, -34, -31, -33, //848
-20, -16, -20, -41, -60, -53, -46, -41, -36, -30, -25, -21, -14, -9, -1, 19, //864
35, 48, 95, 115, 116, 106, 100, 91, 83, 76, 68, 61, 54, 42, 26, 17, //880
14, 14, -22, -49, -47, -68, -82, -79, -94, -79, -74, -79, -88, -89, -77, -72, //896
-64, -59, -53, -42, -35, -31, -28, -18, 16, 52, 65, 101, 115, 106, 100, 90, //912
83, 76, 69, 63, 54, 48, 43, 38, 33, 26, 10, -12, -27, -38, -59, -69, //928
-98, -100, -88, -89, -84, -66, -41, -28, -30, -21, -2, -9, 6, 18, 7, 22, //944
39, 42, 42, 36, 36, 42, 52, 49, 37, 23, 8, -4, -20, -28, -23, -23, //960
-26, -25, -38, -33, -34, -28, -13, -16, -20, -51, -71, -62, -59, -50, -45, -41, //976
-25, -8, 6, 20, 20, 43, 62, 73, 107, 102, 94, 89, 79, 72, 64, 59, //992
52, 47, 41, 36, 22, 11, 14, 15, -12, -40, -42, -62, -65, -79, -98, -82, //1008
-77, -81, -96, -93, -83, -76, -68, -60, -53, -46, -38, -32, -25, -12, 32, 63, //1024
89, 116, 112, 104, 99, 89, 83, 76, 69, 62, 55, 47, 43, 32, 28, 28, //1040
7, -28, -34, -53, -77, -88, -107, -99, -81, -76, -69, -57, -45, -31, -31, -28, //1056
-12, -20, -3, 8, 4, 25, 41, 47, 48, 41, 41, 46, 47, 42, 32, 15, //1072
5, 0, -14, -13, -4, -4, 4, -1, -15, -7, -8, -3, -3, -12, -33, -56, //1088
-55, -49, -47, -41, -36, -30, -19, -11, 4, 13, 14, 43, 63, 87, 110, 100, //1104
94, 87, 78, 71, 64, 56, 49, 41, 36, 29, 19, 10, 10, 2, -41, -65, //1120
-71, -88, -83, -96, -98, -82, -84, -88, -95, -87, -78, -69, -60, -55, -49, -40, //1136
-37, -18, -19, -3, 50, 74, 89, 118, 108, 103, 98, 91, 81, 72, 66, 62, //1152
55, 48, 39, 34, 29, 26, 13, -17, -43, -70, -94, -96, -107, -85, -70, -73, //1168
-66, -60, -54, -33, -37, -20, -10, -28, -1, -1, 5, 34, 44, 53, 59, 52, //1184
44, 42, 48, 46, 28, 10, 0, -4, -19, -10, -4, -6, -6, -23, -37, -34, //1200
-37, -27, -27, -31, -35, -49, -41, -38, -35, -26, -25, -19, -15, -7, 16, 19, //1216
29, 50, 61, 87, 108, 110, 99, 93, 88, 80, 73, 60, 52, 45, 37, 32, //1232
27, 10, 11, -8, -53, -62, -64, -84, -81, -92, -81, -71, -87, -95, -94, -86, //1248
-80, -71, -60, -55, -49, -41, -38, -31, -22, 14, 60, 77, 98, 113, 104, 99, //1264
90, 85, 79, 67, 63, 57, 51, 46, 38, 31, 26, 22, 6, -24, -42, -72, //1280
-90, -96, -111, -92, -68, -68, -60, -55, -35, -24, -26, -6, -13, -23, -5, -4, //1296
16, 42, 48, 59, 65, 57, 52, 50, 55, 49, 33, 11, 5, -6, -19, -10, //1312
-6, -12, -15, -38, -51, -45, -43, -39, -49, -52, -59, -72, -61, -57, -49, -41, //1328
-40, -32, -28, -15, 11, 11, 17, 60, 84, 115, 117, 106, 97, 88, 82, 76, //1344
71, 64, 54, 48, 41, 35, 31, 21, 16, -17, -65, -70, -76, -85, -84, -97, //1360
-82, -70, -77, -87, -81, -70, -66, -61, -54, -45, -40, -34, -28, -21, -19, 15, //1376
55, 73, 104, 117, 109, 105, 96, 91, 81, 76, 67, 61, 55, 48, 41, 30, //1392
22, 5, -27, -51, -61, -100, -109, -103, -97, -91, -86, -77, -68, -62, -56, -50, //1408
-36, -14, -19, -17, 19, 30, 43, 53, 56, 66, 59, 50, 49, 57, 63, 54, //1424
39, 30, 36, 26, 9, 10, 5, -13, -12, -32, -39, -30, -30, -24, -30, -42, //1440
-57, -61, -49, -47, -43, -40, -35, -30, -20, -1, 6, 6, 30, 49, 87, 112, //1456
105, 98, 92, 80, 74, 66, 60, 52, 43, 34, 26, 20, 10, 3, 0, -52, //1472
-88, -75, -79, -80, -78, -85, -69, -68, -80, -88, -85, -75, -67, -62, -53, -47, //1488
-41, -32, -20, -15, -16, 42, 70, 91, 115, 111, 103, 97, 90, 83, 73, 68, //1504
58, 51, 49, 41, 35, 33, 25, 17, -11, -32, -45, -79, -100, -104, -105, -91, //1520
-88, -83, -68, -52, -29, -20, -22, -3, -24, -19, 3, 0, 13, 36, 47, 54, //1536
48, 46, 39, 48, 47, 30, 20, 17, 27, 17, 1, 6, -5, -16, -29, -47, //1552
-39, -41, -44, -33, -43, -48, -48, -44, -40, -34, -31, -26, -21, -18, -15, 0, //1568
-1, 3, 23, 48, 113, 127, 116, 110, 104, 96, 82, 76, 69, 57, 51, 48, //1584
37, 30, 19, 16, 10, -64, -79, -76, -91, -87, -91, -87, -72, -80, -86, -86, //1600
-81, -70, -66, -61, -54, -48, -40, -31, -18, -23, -11, 42, 86, 110, 115, 104, //1616
99, 89, 84, 78, 70, 64, 59, 50, 43, 37, 34, 28, 20, -5, -32, -43, //1632
-63, -89, -86, -96, -86, -70, -75, -71, -59, -43, -24, -25, -11, 3, -15, 12, //1648
20, 21, 38, 35, 39, 34, 29, 35, 37, 48, 39, 24, 11, 4, 9, -13, //1664
-17, -13, -28, -34, -47, -52, -41, -37, -27, -22, -38, -53, -62, -56, -50, -45, //1680
-34, -29, -25, -19, -1, 23, 15, 29, 51, 73, 110, 111, 101, 100, 91, 83, //1696
77, 66, 59, 52, 47, 40, 23, 10, 6, 13, -12, -62, -71, -75, -83, -83, //1712
-91, -80, -74, -85, -85, -79, -70, -62, -56, -47, -43, -40, -32, -28, -19, -19, //1728
-3, 38, 69, 113, 118, 109, 107, 101, 91, 83, 73, 67, 64, 57, 48, 39, //1744
32, 28, 17, -11, -46, -58, -94, -113, -106, -99, -91, -86, -82, -74, -70, -45, //1760 ------------- 1752
-38, -48, -31, -23, -10, 26, 28, 35, 48, 48, 60, 50, 41, 51, 61, 63, //1776
30, 15, 17, 24, 18, -8, 2, -3, -15, -15, -27, -16, -7, -12, -5, -7, //1792
-28, -51, -50, -45, -40, -35, -32, -29, -25, -20, -8, -3, -8, 15, 35, 76, //1808
116, 116, 104, 96, 89, 82, 74, 63, 56, 50, 42, 34, 28, 21, 15, 10, //1824
-32, -81, -84, -100, -101, -103, -101, -79, -84, -91, -87, -78, -70, -67, -58, -50, //1840
-43, -38, -27, -7, 5, 15, 51, 77, 92, 106, 101, 93, 85, 81, 77, 68, //1856
63, 57, 51, 44, 40, 24, 18, 13, -14, -47, -64, -83, -105, -106, -99, -96, //1872 ------------ 1870
-85, -81, -74, -67, -56, -30, -10, -5, 8, -7, -1, 24, 17, 34, 42, 48, //1888
54, 34, 36, 45, 51, 48, 35, 13, 14, 19, 0, -13, -7, -19, -18, -24, //1904
-28, -10, 3, 16, 18, 0, -26, -55, -52, -47, -42, -38, -36, -29, -27, -20, //1920
-3, -1, 7, 36, 63, 109, 110, 98, 92, 83, 79, 69, 62, 57, 47, 41, //1936
34, 25, 20, 15, 10, -17, -67, -75, -76, -94, -82, -92, -86, -70, -73, -88, //1952
-89, -81, -73, -67, -61, -49, -42, -28, -7, 7, 7, 38, 78, 96, 102, 100, //1968
91, 85, 81, 76, 69, 61, 52, 49, 40, 34, 29, 23, 20, 14, -10, -38, //1984
-51, -101, -116, -109, -107, -99, -89, -77, -64, -56, -37, -13, -14, 2, -3, -14, //2000
13, 22, 30, 52, 59, 69, 68, 53, 48, 58, 60, 43, 29, 18, 20, 19, //2016
-1, -2, 3, -18, -18, -29, -30, -19, -14, -2, -7, -24, -54, -76, -70, -67, //2032
-60, -55, -54, -47, -42, -24, -14, -16, 7, 24, 77, 114, 109, 102, 96, 86, //2048
79, 70, 61, 57, 54, 44, 36, 23, 13, 13, 7, -43, -69, -65, -85, -87, //2064
-88, -95, -80, -80, -82, -77, -67, -62, -55, -48, -41, -31, -27, -25, -16, -5, //2080
7, 74, 98, 111, 118, 109, 103, 89, 84, 77, 69, 64, 55, 48, 43, 37, //2096
20, 5, -3, -28, -57, -68, -83, -107, -101, -95, -90, -83, -79, -66, -60, -52, //2112
-26, -10, -7, 7, -7, 6, 29, 28, 42, 55, 64, 70, 51, 37, 35, 43, //2128
44, 29, 17, 10, 12, -5, -13, 2, -1, -4, -3, -5, 4, -1, 0, -1, //2144
-20, -47, -75, -77, -68, -62, -53, -50, -46, -39, -36, -17, -16, 3, 29, 51, //2160
111, 106, 99, 92, 82, 80, 69, 61, 54, 49, 44, 41, 30, 26, 20, 16, //2176
1, -63, -63, -72, -93, -86, -92, -87, -74, -79, -86, -86, -78, -68, -60, -53, //2192
-47, -40, -18, 4, 10, 3, 27, 71, 99, 107, 103, 96, 91, 80, 75, 68, //2208
59, 56, 51, 41, 38, 26, 8, 4, -5, -52, -68, -70, -85, -103, -96, -94, //2224
-87, -76, -71, -60, -51, -33, -6, -10, -2, 13, -2, 31, 39, 30, 38, 42, //2240
54, 49, 33, 30, 34, 35, 21, 16, 17, 24, 29, 1, 3, 0, -13, -16, //2256
-24, -15, -8, -6, 1, 2, -29, -53, -60, -55, -51, -48, -37, -33, -31, -27, //2272
-16, -16, -15, 12, 37, 80, 118, 109, 104, 94, 87, 81, 73, 57, 51, 49, //2288
44, 37, 26, 21, 17, 13, -20, -58, -58, -85, -86, -79, -93, -82, -65, -75, //2304
-90, -92, -83, -73, -69, -63, -57, -51, -33, -6, -10, 0, 46, 83, 98, 103, //2320
95, 90, 82, 77, 70, 63, 59, 52, 46, 42, 34, 30, 22, 19, 9, -19, //2336
-43, -62, -94, -108, -104, -103, -94, -85, -72, -59, -45, -10, -13, -15, -10, -22, //2352
2, 26, 30, 43, 46, 44, 48, 28, 22, 25, 30, 30, 16, 19, 22, 33, //2368
26, 2, 2, -13, -23, -27, -32, -19, -17, -12, -5, -14, -39, -59, -51, -47, //2384
-44, -38, -32, -28, -21, -20, -14, -13, 4, 34, 62, 107, 127, 114, 107, 97, //2400
89, 83, 76, 62, 55, 48, 42, 30, 23, 22, 14, -23, -82, -94, -92, -115, //2416
-96, -97, -95, -73, -72, -75, -72, -65, -59, -53, -44, -38, -33, -26, -24, -17, //2432
-13, 17, 62, 81, 107, 120, 111, 108, 98, 91, 84, 72, 64, 59, 50, 48, //2448
38, 11, 16, 0, -31, -55, -73, -97, -110, -95, -90, -94, -80, -75, -66, -58, //2464
-42, -14, -11, 3, 7, -5, 28, 49, 51, 61, 50, 57, 56, 25, 32, 36, //2480
42, 35, 16, 2, 8, 13, -9, -26, -33, -44, -47, -47, -39, -26, -15, -6, //2496
-6, -29, -57, -57, -52, -47, -41, -37, -32, -22, -19, -7, -6, -3, 26, 63, //2512
110, 124, 111, 107, 94, 88, 79, 70, 63, 58, 48, 43, 31, 22, 18, 16, //2528
2, -43, -63, -60, -83, -71, -70, -80, -69, -67, -81, -97, -89, -83, -75, -67, //2544
-62, -51, -45, -26, -13, -21, 0, 48, 66, 82, 107, 107, 97, 91, 85, 79, //2560
72, 67, 58, 49, 43, 39, 26, 26, 21, -6, -35, -51, -66, -104, -100, -92, //2576
-93, -89, -82, -74, -67, -50, -29, -20, -18, -9, -12, 3, 24, 32, 58, 53, //2592
64, 68, 43, 34, 43, 50, 42, 25, 17, 19, 28, 17, 0, -9, -20, -26, //2608
-27, -24, -19, -14, -9, -3, -20, -53, -67, -60, -53, -46, -41, -38, -25, -19, //2624
-2, -1, -8, 16, 33, 60, 115, 105, 99, 93, 83, 71, 68, 62, 54, 49, //2640
43, 34, 28, 23, 16, 14, -26, -57, -63, -80, -78, -66, -74, -68, -62, -63, //2656
-91, -102, -87, -84, -74, -65, -57, -51, -31, -11, -14, -20, 12, 67, 91, 108, //2672
103, 95, 89, 81, 72, 67, 64, 56, 48, 44, 39, 34, 27, 24, 14, -11, //2688
-30, -43, -62, -81, -81, -82, -88, -88, -78, -68, -56, -28, -15, -22, -23, -36, //2704
-23, 3, 8, 17, 21, 35, 47, 30, 18, 21, 31, 25, 11, 2, 2, 13, //2720
12, 3, -5, -10, -10, -15, -20, -17, -18, -13, -1, -16, -37, -39, -34, -31, //2736
-26, -19, -17, -13, -10, -9, -3, -4, 9, 32, 54, 101, 127, 115, 111, 102, //2752
94, 86, 72, 65, 59, 47, 41, 32, 19, 22, 17, 0, -45, -67, -84, -101, //2768
-87, -94, -103, -88, -91, -95, -89, -81, -78, -65, -58, -52, -46, -40, -34, -26, //2784
-24, -11, 24, 40, 81, 110, 112, 109, 101, 93, 89, 82, 72, 66, 60, 54, //2800
38, 21, 28, 25, 3, -26, -42, -59, -73, -71, -77, -81, -80, -69, -52, -49, //2816
-29, -12, -12, -9, -15, -31, 0, 11, 16, 19, 10, 37, 29, 15, 27, 31, //2832
32, 15, 1, -2, -2, -3, -10, -11, -14, -21, -22, -26, -12, -11, -15, -10, //2848
-11, -26, -57, -52, -44, -43, -35, -30, -23, -15, -11, 3, 3, 12, 39, 52, //2864
95, 124, 111, 103, 95, 88, 79, 71, 65, 55, 48, 43, 32, 19, 17, 18, //2880
1, -39, -59, -61, -86, -69, -69, -77, -66, -65, -67, -92, -93, -81, -79, -69, //2896
-62, -54, -45, -40, -38, -25, -20, 13, 38, 56, 100, 111, 105, 102, 93, 88, //2912
77, 71, 66, 59, 52, 46, 33, 32, 29, 11, -9, -29, -62, -73, -75, -75, //2928
-79, -92, -95, -86, -81, -70, -52, -40, -32, -31, -40, -27, 7, 21, 41, 47, //2944
57, 70, 44, 51, 61, 59, 58, 42, 20, 24, 21, 7, -4, -10, -11, -12, //2960
-20, -12, 0, -19, -8, 1, -14, -40, -63, -63, -57, -52, -48, -43, -34, -27, //2976
-12, -12, -14, 3, 24, 72, 111, 111, 107, 99, 86, 82, 74, 67, 61, 47, //2992
44, 34, 24, 25, 21, 10, -22, -39, -38, -62, -58, -55, -70, -61, -64, -56, //3008
-88, -104, -95, -93, -84, -76, -65, -56, -41, -28, -25, -32, 12, 39, 61, 95, //3024
102, 95, 88, 80, 78, 71, 64, 56, 51, 47, 39, 36, 33, 24, 17, 7, //3040
-13, -40, -62, -65, -59, -61, -72, -86, -77, -75, -79, -67, -55, -41, -33, -50, //3056
-33, -9, -4, 27, 23, 31, 49, 36, 25, 35, 40, 38, 23, 4, 0, 8, //3072
-2, -5, -2, -9, -4, -9, -15, -4, 3, 6, 14, -2, -22, -28, -27, -24, //3088
-22, -20, -16, -12, -9, -5, 0, 0, 6, 5, 22, 88, 107, 116, 112, 105, //3104
98, 87, 80, 70, 58, 57, 13, -13, -9, -3, 8, -16, -47, -41, -60, -57, //3120
-47, -55, -54, -59, -67, -89, -98, -85, -79, -69, -63, -57, -52, -47, -35, -26, //3136
-30, -15, 10, 33, 74, 94, 104, 105, 94, 91, 83, 75, 70, 64, 54, 50, //3152
40, 30, 31, 17, 4, -9, -29, -45, -51, -53, -59, -68, -79, -76, -66, -63, //3168
-51, -41, -34, -25, -47, -42, -19, -14, 3, 12, 8, 21, 8, 1, 8, 15, //3184
25, 19, 7, 6, 12, 7, 10, 9, 1, 0, 0, 4, 13, 10, 18, 29, //3200
10, -38, -57, -58, -50, -44, -42, -37, -25, -21, -8, -3, -13, 8, 13, 32, //3216
77, 103, 110, 104, 93, 84, 81, 70, 62, 52, 51, 38, 12, 4, 9, 18, //3232
-3, -26, -36, -64, -55, -50, -57, -47, -49, -57, -89, -106, -93, -88, -79, -73, //3248
-68, -60, -52, -40, -35, -35, -5, 22, 30, 74, 78, 92, 104, 94, 89, 80, //3264
79, 75, 61, 50, 44, 37, 33, 34, 27, 12, -3, -25, -38, -36, -40, -47, //3280
-59, -72, -66, -60, -67, -49, -41, -31, -27, -48, -55, -21, -4, 17, 22, 23, //3296
37, 27, 13, 15, 22, 21, 21, 8, 4, 12, 0, -5, 4, -2, 6, 3, //3312
-2, 4, -2, 6, 4, -16, -46, -69, -59, -51, -47, -46, -42, -35, -24, -7, //3328
-10, -1, 27, 28, 61, 98, 106, 104, 95, 90, 83, 73, 67, 61, 48, 44, //3344
14, 0, 10, 11, 11, -8, -6, -18, -49, -46, -50, -41, -40, -42, -52, -96, //3360
-94, -97, -99, -89, -82, -72, -63, -54, -44, -38, -21, -1, 0, 38, 83, 79, //3376
98, 102, 90, 86, 79, 72, 68, 61, 55, 41, 31, 39, 24, 7, 1, -6, //3392
-22, -58, -68, -64, -52, -54, -80, -63, -48, -46, -43, -46, -27, -28, -48, -47, //3408
-45, -39, 5, 4, 11, 23, 15, -5, -9, 3, 16, 20, 20, 22, 27, 38, //3424
41, 27, 21, 30, 30, 25, 17, 14, 13, -4, -26, -36, -36, -33, -29, -25, //3440
-22, -19, -16, -13, -12, -7, 23, 32, 36, 72, 82, 101, 100, 92, 93, 74, //3456
70, 46, 19, 30, 22, -12, -1, -6, -9, -18, -29, -27, -45, -44, -43, -49, //3472
-35, -24, -34, -57, -62, -79, -91, -82, -78, -70, -64, -42, -35, -41, -31, -2, //3488
6, 31, 66, 70, 84, 97, 85, 85, 81, 70, 66, 59, 52, 42, 30, 35, //3504
26, -1, -10, -20, -29, -31, -37, -43, -33, -26, -34, -46, -54, -60, -52, -50, //3520
-41, -33, -40, -23, -33, -35, -12, -6, 5, 2, -8, -1, 0, 7, 14, 11, //3536
25, 23, 11, 12, 18, 24, 23, 18, 18, 15, 15, 9, 7, 3, -16, -51, //3552
-61, -55, -51, -48, -41, -34, -30, -20, -16, 0, 36, 44, 61, 69, 73, 84, //3568
81, 86, 80, 59, 46, 35, 22, 14, -8, -16, -12, -23, -30, -36, -23, -14, //3584
-24, -29, -36, -30, -16, -12, -18, -20, -27, -52, -66, -63, -54, -48, -44, -41, //3600
-36, -31, -4, 8, 7, 25, 58, 65, 72, 74, 68, 73, 74, 67, 56, 47, //3616
49, 38, 22, 17, 11, 2, -3, -7, -17, -26, -30, -30, -28, -27, -30, -36, //3632
-40, -41, -42, -39, -27, -30, -27, -16, -17, -21, -19, -16, -11, -16, -15, -9, //3648
-3, 7, 5, 0, 6, 6, -5, 0, 14, 23, 29, 26, 26, 23, 6, -2, //3664
-8, -29, -50, -57, -51, -46, -39, -35, -33, -27, -20, -14, 6, 28, 44, 55, //3680
58, 84, 85, 79, 76, 67, 71, 54, 39, 43, 35, 24, 7, 4, -4, -25, //3696
-28, -19, -23, -18, -26, -35, -27, -28, -29, -36, -36, -30, -44, -48, -56, -64, //3712
-61, -57, -48, -43, -33, -17, -13, -10, 4, 40, 52, 55, 56, 57, 59, 50, //3728
41, 39, 37, 31, 19, 16, 16, 10, -2, -13, -17, -17, -25, -35, -39, -37, //3744
-35, -33, -24, -22, -18, -19, -28, -22, -22, -20, -11, -4, 5, 2, 0, 1, //3760
-9, -3, 1, 1, 3, 10, 10, 14, 19, 13, 12, 20, 17, 22, 31, 32, //3776
27, 10, 10, 8, -12, -31, -37, -34, -31, -28, -25, -23, -22, -16, -14, -8, //3792
1, 15, 32, 43, 57, 54, 54, 58, 48, 52, 44, 38, 39, 21, 4, -1, //3808
-4, -4, -12, -10, -13, -19, -16, -16, -12, -8, -12, -13, -17, -24, -36, -38, //3824
-32, -30, -30, -28, -15, -7, -7, -2, 1, 3, 8, 11, 20, 30, 39, 38, //3840
34, 29, 20, 14, 15, 10, 5, 4, 5, 1, -3, -5, -8, -12, -18, -23, //3856
-33, -33, -30, -32, -36, -35, -28, -21, -15, -13, -14, -15, -17, -15, -9, -1, //3872
2, 6, 5, -1, -6, -4, 3, -1, -1, -2, -4, -1, -1, -2, 1, 5, //3888
4, 2, 7, 14, 14, 15, 16, 9, -5, -15, -21, -22, -19, -21, -22, -17, //3904
-16, -6, 6, 19, 35, 48, 58, 63, 58, 51, 43, 34, 29, 21, 18, 20, //3920
14, 7, -6, -16, -25, -28, -23, -21, -19, -24, -29, -23, -16, -9, -10, -13, //3936
-20, -29, -31, -34, -33, -24, -20, -14, -13, -11, -2, 5, 11, 18, 15, 20, //3952
27, 23, 24, 24, 26, 27, 29, 31, 31, 29, 25, 16, 2, 3, 3, -1, //3968
-5, -16, -18, -17, -18, -20, -21, -20, -17, -14, -14, -16, -13, -7, -8, -12, //3984
-16, -18, -18, -16, -13, -9, -3, -1, 10, 13, 13, 12, 7, 1, -2, -2, //4000
0, -2, 0, 9, 8, 8, 8, 8, 6, -5, -16, -25, -24, -22, -26, -24, //4016
-20, -20, -23, -22, -7, 6, 17, 26, 33, 40, 52, 56, 59, 55, 41, 28, //4032
18, 9, 4, 3, 3, 1, -6, -15, -20, -23, -20, -21, -21, -14, -12, -14, //4048
-14, -11, -14, -16, -18, -24, -29, -28, -24, -22, -21, -16, -9, -2, 4, 9, //4064
13, 16, 28, 33, 34, 32, 30, 27, 22, 18, 18, 18, 20, 19, 14, 11, //4080
10, 9, 4, -7, -13, -17, -22, -30, -38, -38, -37, -36, -36, -36, -31, -26, //4096
-20, -16, -15, -16, -17, -17, -17, -15, -9, 4, 9, 11, 16, 22, 25, 28, //4112
29, 29, 30, 28, 22, 18, 11, 6, -1, -7, -10, -15, -19, -21, -24, -22, //4128
-20, -16, -9, -5, -2, 9, 14, 21, 26, 29, 35, 42, 45, 43, 40, 38, //4144
34, 27, 19, 12, 4, -4, -9, -15, -21, -22, -22, -23, -19, -17, -16, -18, //4160
-18, -15, -18, -20, -19, -20, -21, -26, -30, -30, -25, -19, -11, 0, 5, 7, //4176
10, 14, 19, 29, 35, 38, 38, 33, 28, 25, 21, 20, 16, 12, 10, 7, //4192
3, 0, -1, 2, 1, -5, -11, -15, -18, -27, -35, -40, -41, -36, -34, -37, //4208
-33, -28, -22, -19, -18, -14, -12, -8, -6, -7, -4, -3, -3, 1, 7, 11, //4224
11, 12, 15, 17, 19, 20, 19, 17, 16, 17, 16, 9, 5, -2, -9, -11, //4240
-14, -19, -19, -15, -14, -14, -9, -5, -2, 6, 15, 24, 31, 36, 37, 32, //4256
30, 25, 14, 9, 4, 1, 0, -5, -8, -12, -16, -17, -17, -14, -12, -11, //4272
-10, -12, -15, -13, -14, -13, -12, -14, -15, -19, -20, -16, -7, 2, 7, 6, //4288
7, 11, 16, 18, 14, 17, 20, 21, 23, 21, 19, 18, 14, 10, 7, 7, //4304
7, 6, 4, 2, -1, -2, -1, -1, 0, 3, 3, -1, -7, -9, -9, -10, //4320
-11, -15, -19, -19, -17, -19, -20, -18, -20, -21, -21, -16, -12, -7, -4, -4, //4336
-6, -6, -5, -4, 2, 9, 13, 14, 13, 10, 11, 13, 8, 4, 1, -4, //4352
-8, -8, -7, -9, -9, -10, -12, -11, -5, -3, 2, 8, 14, 18, 22, 27, //4368
31, 31, 26, 23, 18, 11, 4, -1, -2, -8, -12, -15, -16, -13, -9, -7, //4384
-9, -10, -11, -11, -6, -8, -10, -11, -14, -15, -16, -17, -16, -15, -15, -12, //4400
-9, -2, 5, 9, 13, 20, 20, 22, 24, 25, 25, 24, 23, 22, 19, 14, //4416
9, 6, 5, 3, -3, -7, -9, -12, -15, -19, -20, -16, -13, -14, -13, -10, //4432
-11, -12, -12, -12, -12, -10, -9, -11, -11, -8, -8, -10, -13, -12, -10, -9, //4448
-7, -6, -3, 2, 3, 6, 10, 13, 18, 19, 18, 19, 20, 16, 11, 6, //4464
4, 1, -3, -7, -9, -11, -11, -10, -8, -6, -4, -3, 1, 6, 11, 14, //4480
16, 17, 19, 20, 23, 23, 20, 17, 14, 10, 5, 3, 0, -3, -6, -8, //4496
-9, -7, -6, -7, -8, -11, -14, -15, -15, -15, -14, -16, -17, -19, -19, -16, //4512
-14, -14, -10, -4, -1, 2, 8, 12, 15, 17, 20, 21, 23, 22, 18, 16, //4528
14, 10, 7, 5, 6, 4, -1, -7, -9, -11, -12, -12, -11, -11, -11, -12, //4544
-14, -13, -10, -8, -4, -4, -5, -7, -8, -7, -6, -6, -3, -1, -3, -6, //4560
-8, -8, -7, -8, -7, -5, -3, -3, -1, 2, 4, 4, 4, 5, 5, 4, //4576
3, 2, 2, 2, 0, 1, 3, 2, 1, 0, 1, 4, 3, 3, 6, 7, //4592
8, 9, 9, 10, 12, 10, 8, 9, 10, 7, 6, 4, 2, 1, -2, -3, //4608
-8, -8, -9, -11, -12, -12, -9, -7, -7, -9, -10, -10, -11, -12, -11, -12, //4624
-14, -15, -16, -13, -11, -8, -3, 1, 5, 10, 12, 12, 14, 17, 19, 20, //4640
19, 18, 18, 16, 14, 10, 8, 6, 1, 1, 1, 0, -3, -7, -7, -4, //4656
-3, -4, -6, -7, -7, -6, -7, -5, -3, 0, -1, -4, -4, -4, -4, -1, //4672
-1, -2, -3, -4, -4, -6, -5, -4, -5, -6, -11, -8, -3, -1, 1, 0, //4688
-2, -4, -5, -4, -5, -4, -4, -6, -7, -7, -5, 0, 2, 3, 2, 2, //4704
5, 7, 7, 7, 6, 4, 5, 4, 4, 6, 8, 8, 5, 3, 3, 3, //4720
1, 0, -1, -2, -2, -2, -1, 0, 1, -1, -2, -4, -6, -5, -7, -6, //4736
-7, -7, -9, -10, -8, -8, -8, -6, -2, 1, 3, 5, 6, 9, 11, 10, //4752
10, 10, 11, 10, 8, 6, 5, 5, 5, 2, -1, -2, -2, -3, -4, -4, //4768
-3, -3, -4, -5, -5, -3, -4, -5, -5, -5, -4, -5, -5, -5, -5, -3, //4784
-2, -3, -2, -1, 0, 2, 2, 0, 0, 0, -1, -2, -3, -3, -2, -2, //4800
-2, 0, 0, 0, -2, -5, -5, -4, -3, -3, -2, 0, 0, 0, 0, 1, //4816
3, 5, 7, 8, 8, 8, 8, 7, 8, 7, 6, 4, 2, 0, -2, -3, //4832
-4, -4, -4, -4, -4, -5, -5, -3, -3, -2, -2, -1, -1, -1, -2, -3, //4848
-3, -3, -4, -3, -3, -2, -2, -1, 0, 2, 3, 3, 2, 2, 2, 2, //4864
1, 1, 2, 3, 4, 3, 2, 2, 1, 0, 0, 0, -1, -2, -3, -4, //4880
-4, -5, -5, -6, -6, -4, -4, -5, -5, -5, -5, -5, -5, -4, -3, -3, //4896
-1, 1, 2, 2, 2, 3, 3, 3, 2, 1, 1, 0, 0, -1, -1, -1, //4912
-1, -1, -2, -3, -3, -3, -4, -5, -5, -5, -5, -5, -5, -1, 1, 1, //4928
1, 1, 3, 5, 5, 5, 6, 6, 5, 5, 5, 6, 6, 3, 0, -2, //4944
-3, -4, -4, -4, -3, -3, -2, -1, -1, 0, 0, 0, -1, -2, -4, -5, //4960
-5, -4, -3, -3, -3, -1, 0, 0, 0, 0, 1, 2, 2, 1, 1, 1, //4976
1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 0, 0, //4992
-1, -1, -2, -3, -3, -3, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, //5008
-1, -2, -2, -1, -1, -2, -2, -1, 0, -1, -1, -1, 0, 0, 1, 1, //5024
0, 0, 0, 0, 0, -1, -2, -2, -3, -3, -3, -2, -2, -2, -2, -2, //5040
-2, -2, -1, 0, 1, 2, 2, 3, 3, 3, 2, 2, 2, 1, 1, 1, //5056
1, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -2, -2, -2, -2, //5072
-2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, //5088
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, //5104
0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -1, -1, //5120
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, };