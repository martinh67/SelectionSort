/* in order to use the printf functionality */
#include <stdio.h>

/* in order to use clock functionality */
#include <time.h>

/* define the size of the array */
#define SIZE 1440

int main() {

	/* start the clock */
	clock_t begin = clock();

	/* print information regarding the program */
	printf("Using selection sort to order an array with 1440 elements\n");

	/* declare the variables required */
	int i, j, swap = 0, comparison = 0;
	double hold;

	/* declare the array */
	double array[SIZE] = {  8.1656,
							7.7099,
							7.1023,
							7.558,
							6.9721,
							7.8618,
							8.2524,
							8.9685,
							8.4694,
							9.0119,
							8.7949,
							9.1421,
							7.3627,
							8.7949,
							7.4278,
							8.4911,
							8.4477,
							8.9685,
							7.341,
							7.8835,
							7.0806,
							8.9034,
							10.357,
							9.7714,
							7.8835,
							8.86,
							10.618,
							9.4459,
							8.426,
							10.249,
							9.9667,
							9.2072,
							9.4459,
							10.032,
							9.7063,
							10.596,
							8.3392,
							7.6014,
							7.775,
							8.86,
							8.8817,
							8.8383,
							8.0788,
							7.8835,
							7.7967,
							8.5128,
							6.1258,
							7.9703,
							8.2958,
							7.3627,
							6.1041,
							6.6683,
							6.4079,
							9.2723,
							8.5996,
							8.2958,
							6.7551,
							8.3392,
							7.8184,
							6.6683,
							7.3844,
							7.124,
							6.5598,
							5.6918,
							5.8003,
							5.5399,
							6.7985,
							6.8202,
							8.5779,
							9.728,
							8.4911,
							8.8166,
							7.9486,
							9.6195,
							10.813,
							10.856,
							8.9251,
							7.8618,
							9.4459,
							10.379,
							9.8582,
							12.05,
							11.442,
							10.292,
							10.119,
							9.5978,
							8.2524,
							8.3826,
							9.0336,
							8.6213,
							7.9486,
							7.6448,
							7.1023,
							8.0571,
							7.1674,
							8.1222,
							7.1891,
							7.124,
							6.5381,
							6.0607,
							6.2343,
							5.9956,
							7.0372,
							7.124,
							6.9504,
							7.7316,
							6.8202,
							7.124,
							6.8853,
							6.473,
							6.8202,
							6.9938,
							6.2126,
							5.8654,
							5.8437,
							6.5164,
							6.5164,
							5.9956,
							6.1692,
							6.1041,
							6.039,
							6.473,
							5.9739,
							6.256,
							7.8401,
							7.6231,
							6.4947,
							7.4712,
							6.6249,
							5.9305,
							6.1041,
							6.907,
							7.0589,
							7.7316,
							7.3193,
							6.7985,
							6.0173,
							6.8202,
							7.124,
							8.2307,
							8.3392,
							9.5978,
							8.8166,
							7.7967,
							8.1656,
							7.341,
							6.1475,
							7.2108,
							7.4061,
							7.341,
							6.5164,
							6.9938,
							7.8401,
							8.4694,
							8.9902,
							6.9504,
							6.9504,
							8.1656,
							6.039,
							3.2831,
							4.3247,
							3.0661,
							2.5453,
							2.5453,
							2.8491,
							2.3717,
							4.303,
							4.7153,
							2.8925,
							3.2614,
							3.6303,
							2.3934,
							1.5905,
							1.3735,
							0.7225,
							1.6773,
							1.7424,
							2.1547,
							4.303,
							4.4983,
							3.869,
							3.2397,
							2.6972,
							1.5471,
							2.0679,
							2.133,
							0.8961,
							0.7225,
							1.4169,
							2.133,
							1.2216,
							0.6574,
							1.3518,
							1.8075,
							2.6321,
							1.8943,
							1.3518,
							1.9811,
							1.699,
							1.7641,
							1.8075,
							3.001,
							3.9124,
							4.4332,
							4.1511,
							4.2813,
							4.52,
							4.6719,
							4.9106,
							4.6285,
							4.954,
							4.9974,
							4.3681,
							5.2144,
							5.7786,
							5.1276,
							5.0625,
							5.5182,
							4.954,
							5.1927,
							5.2578,
							4.737,
							4.9323,
							4.6285,
							4.2813,
							4.4983,
							4.4115,
							3.5652,
							3.7171,
							3.5218,
							3.1529,
							3.2614,
							2.8274,
							2.4802,
							2.8925,
							3.869,
							3.8907,
							3.7822,
							3.6303,
							3.869,
							3.869,
							4.4766,
							4.6068,
							3.9992,
							2.9576,
							2.9142,
							2.6972,
							2.7189,
							2.6755,
							2.2415,
							2.0896,
							2.0245,
							1.9377,
							1.6556,
							1.8292,
							1.6339,
							1.5254,
							1.7858,
							2.2849,
							2.35,
							1.7641,
							1.8075,
							2.6538,
							2.1764,
							1.1565,
							2.2415,
							3.1312,
							3.218,
							3.5435,
							4.2813,
							3.3699,
							3.0444,
							2.9142,
							3.6737,
							2.9359,
							3.3699,
							3.1746,
							2.0679,
							2.0896,
							3.5652,
							2.8491,
							2.8274,
							3.1312,
							3.652,
							3.3482,
							2.0462,
							2.1981,
							2.0028,
							4.303,
							5.5182,
							4.8889,
							4.2813,
							3.435,
							2.6104,
							5.3446,
							4.6719,
							3.869,
							3.9992,
							4.2813,
							4.8021,
							3.3482,
							5.2578,
							3.652,
							6.039,
							4.2813,
							4.4983,
							6.2994,
							8.5128,
							5.8437,
							6.4947,
							7.5363,
							7.9703,
							5.7786,
							7.5363,
							6.907,
							4.7804,
							8.5128,
							9.3374,
							10.574,
							10.943,
							10.726,
							11.659,
							11.008,
							11.073,
							10.965,
							10.835,
							10.9,
							11.442,
							10.921,
							9.2506,
							8.9251,
							8.5779,
							8.86,
							8.86,
							8.3826,
							8.2741,
							9.1204,
							8.0788,
							7.992,
							7.8401,
							8.0571,
							7.7533,
							8.0571,
							7.2325,
							7.2325,
							7.3627,
							7.4495,
							7.7967,
							8.426,
							8.2741,
							8.9685,
							8.86,
							9.0119,
							8.9685,
							10.791,
							11.746,
							10.878,
							11.095,
							10.227,
							8.9685,
							9.4893,
							9.3808,
							10.357,
							10.227,
							9.3591,
							8.9902,
							9.3374,
							9.077,
							8.7515,
							8.4694,
							8.5562,
							8.1873,
							8.5996,
							8.9251,
							9.0119,
							7.9703,
							8.1222,
							8.3392,
							7.7099,
							6.7768,
							6.6683,
							6.8853,
							7.1674,
							7.1023,
							6.8853,
							6.8636,
							6.2126,
							6.473,
							6.69,
							5.9522,
							6.1041,
							6.5598,
							5.9522,
							7.6014,
							7.0372,
							7.2108,
							6.9938,
							6.7551,
							6.6249,
							6.8202,
							7.0155,
							7.4495,
							6.8853,
							7.0806,
							7.2325,
							7.4495,
							8.9034,
							9.1421,
							7.558,
							8.7515,
							7.4929,
							7.2325,
							8.3609,
							6.473,
							6.6466,
							6.6466,
							5.1276,
							4.8889,
							4.0643,
							5.9956,
							5.9088,
							5.3446,
							3.9124,
							3.7388,
							3.9558,
							4.086,
							2.9576,
							2.5236,
							1.7641,
							1.7641,
							1.699,
							1.4603,
							0.5706,
							0.7442,
							1.0046,
							1.699,
							2.1764,
							2.1113,
							2.2849,
							2.3934,
							1.8075,
							1.6556,
							1.7858,
							1.8292,
							1.8509,
							2.1764,
							2.133,
							1.8075,
							2.1113,
							2.1547,
							2.1764,
							2.35,
							2.2415,
							1.8943,
							2.1764,
							2.2849,
							2.35,
							2.5019,
							2.4585,
							2.8925,
							3.0661,
							3.3482,
							3.0444,
							3.0227,
							2.9142,
							3.4784,
							3.435,
							2.8274,
							3.0878,
							3.4567,
							3.3916,
							3.2831,
							3.218,
							3.5652,
							3.218,
							3.1746,
							4.0426,
							3.5435,
							3.3482,
							3.1529,
							3.2831,
							3.3699,
							3.2831,
							2.7623,
							2.8274,
							3.0227,
							2.7189,
							2.1764,
							2.8491,
							3.1746,
							2.6755,
							3.3482,
							3.0878,
							2.4151,
							1.8292,
							1.4386,
							2.3066,
							2.0245,
							2.133,
							1.4603,
							1.1565,
							2.3717,
							2.2415,
							3.3699,
							3.1312,
							2.8491,
							0.9395,
							0.9178,
							1.0697,
							1.7207,
							1.9811,
							1.8943,
							2.3934,
							2.1113,
							2.1981,
							2.2849,
							2.4802,
							2.2198,
							2.6538,
							2.4151,
							2.3066,
							2.0245,
							2.6972,
							2.8057,
							5.9739,
							7.0806,
							5.4531,
							4.9757,
							7.1023,
							6.6466,
							9.6195,
							8.6647,
							6.3211,
							6.6249,
							10.119,
							7.0372,
							10.227,
							9.2072,
							9.2506,
							8.9034,
							7.3627,
							10.791,
							10.596,
							10.01,
							8.5345,
							8.2524,
							8.6647,
							10.466,
							9.945,
							8.3392,
							7.6665,
							6.9721,
							8.0788,
							8.7515,
							7.5797,
							8.4043,
							8.209,
							8.2524,
							7.7099,
							6.6466,
							6.256,
							5.2578,
							6.7985,
							6.8636,
							5.5182,
							6.1041,
							9.8582,
							9.9016,
							9.3157,
							7.6665,
							7.2976,
							6.6466,
							10.661,
							10.639,
							7.9703,
							8.3392,
							9.945,
							10.856,
							9.3374,
							8.1005,
							12.462,
							11.052,
							8.3609,
							10.987,
							12.506,
							12.202,
							11.334,
							11.138,
							9.3374,
							10.487,
							12.05,
							11.355,
							10.791,
							8.5128,
							7.2108,
							8.7949,
							5.6918,
							8.0571,
							6.1041,
							11.334,
							9.4893,
							10.227,
							12.028,
							14.415,
							12.896,
							10.704,
							9.1855,
							7.9269,
							7.558,
							9.9884,
							6.5164,
							5.9739,
							4.9323,
							6.0607,
							6.5164,
							7.6231,
							10.14,
							10.77,
							8.9468,
							7.2976,
							8.5562,
							9.4676,
							8.7732,
							13.525,
							10.596,
							10.097,
							8.9468,
							8.0788,
							8.1439,
							7.558,
							4.6068,
							4.9757,
							5.4314,
							8.209,
							6.907,
							7.8401,
							9.2072,
							8.5996,
							8.7081,
							6.5598,
							6.2994,
							6.3211,
							5.9739,
							4.6502,
							4.3681,
							3.8473,
							4.3898,
							5.0191,
							4.9757,
							3.8907,
							3.2614,
							5.2795,
							6.1258,
							5.0625,
							4.9106,
							3.7605,
							2.9793,
							2.9576,
							1.9594,
							1.1348,
							1.7858,
							1.6556,
							2.4802,
							3.6086,
							4.2162,
							4.5634,
							3.6086,
							4.1294,
							3.4133,
							4.2596,
							3.4133,
							4.6719,
							3.3482,
							3.8039,
							3.5435,
							3.9558,
							3.7171,
							3.9341,
							3.5435,
							3.5001,
							5.0408,
							4.5417,
							4.4766,
							3.6086,
							3.5652,
							2.9142,
							2.8274,
							3.9341,
							3.9775,
							3.5652,
							3.9341,
							3.4133,
							4.7804,
							4.4115,
							5.1276,
							3.3265,
							3.9992,
							4.3681,
							3.4567,
							4.2379,
							3.9124,
							3.4567,
							3.5652,
							5.1059,
							4.4549,
							3.6303,
							3.7822,
							3.3699,
							2.3066,
							3.4133,
							3.8256,
							3.3482,
							4.5417,
							4.3247,
							4.0426,
							3.9124,
							3.9992,
							4.9974,
							5.0842,
							3.1312,
							4.1294,
							4.086,
							4.8021,
							4.52,
							3.6737,
							3.869,
							4.0426,
							3.9558,
							4.2596,
							3.652,
							3.5435,
							3.3265,
							2.1113,
							2.2198,
							1.7424,
							2.2198,
							2.1981,
							2.4151,
							2.9576,
							2.9793,
							3.1095,
							2.6321,
							2.7406,
							2.784,
							1.8292,
							1.9811,
							2.0679,
							2.5453,
							2.5887,
							2.7406,
							2.4802,
							2.8708,
							3.2397,
							3.1746,
							2.5453,
							2.8708,
							3.0661,
							2.3066,
							2.133,
							2.35,
							2.6972,
							3.7171,
							3.9341,
							4.0209,
							4.1294,
							5.0191,
							4.737,
							4.3247,
							3.9341,
							3.9341,
							3.8039,
							3.3482,
							2.8491,
							2.9576,
							2.3717,
							2.6972,
							2.6538,
							2.8708,
							2.8708,
							3.1529,
							2.6321,
							2.5236,
							2.2415,
							2.3717,
							2.8274,
							2.8274,
							2.0245,
							2.0462,
							1.8292,
							1.5471,
							1.482,
							1.482,
							3.3699,
							3.9558,
							3.4567,
							3.6086,
							3.0444,
							2.2415,
							1.5254,
							1.3518,
							1.6339,
							1.7858,
							2.567,
							3.3048,
							4.7587,
							4.5851,
							3.8256,
							3.5869,
							3.8256,
							3.3482,
							2.9359,
							2.4585,
							3.5652,
							4.6068,
							3.9341,
							2.784,
							1.3952,
							2.6755,
							2.7406,
							1.9594,
							1.9594,
							2.2849,
							3.0661,
							2.3934,
							2.9142,
							3.1312,
							3.4133,
							2.6538,
							3.435,
							4.4766,
							3.4567,
							3.1963,
							3.3916,
							3.7388,
							3.7605,
							2.5453,
							2.8925,
							5.1276,
							6.69,
							6.69,
							6.7334,
							6.5164,
							5.6267,
							4.4549,
							4.8672,
							2.8925,
							4.3464,
							2.784,
							3.3916,
							3.0878,
							3.0227,
							4.303,
							3.652,
							3.1095,
							2.8925,
							2.8925,
							2.6321,
							3.1312,
							3.3265,
							4.7804,
							4.8455,
							2.9793,
							3.7822,
							3.5435,
							4.1511,
							3.5652,
							2.0462,
							1.5688,
							1.3735,
							2.5236,
							3.0227,
							2.6104,
							2.6104,
							2.3717,
							2.2849,
							2.784,
							3.2831,
							3.5652,
							3.8473,
							3.3048,
							3.1963,
							3.0661,
							3.3048,
							4.303,
							3.869,
							3.5218,
							2.133,
							1.7641,
							0.831,
							2.2632,
							2.4368,
							2.8274,
							2.3066,
							3.0227,
							3.1529,
							2.8274,
							2.8491,
							2.1764,
							2.3717,
							2.9142,
							3.2614,
							3.9124,
							3.1095,
							1.6556,
							2.9142,
							2.7189,
							3.7605,
							3.0878,
							2.133,
							1.5037,
							0.3319,
							3.9341,
							3.7171,
							2.2415,
							1.6773,
							2.5887,
							3.9124,
							4.6502,
							4.1294,
							3.0444,
							2.8925,
							3.2831,
							3.2614,
							2.6538,
							3.218,
							3.6954,
							3.7605,
							3.0878,
							3.1963,
							4.8672,
							5.4314,
							5.7135,
							7.992,
							9.2072,
							8.9251,
							6.4079,
							7.2976,
							7.2976,
							5.9956,
							5.0842,
							4.9757,
							4.2379,
							5.9956,
							8.0354,
							8.4477,
							5.6484,
							9.945,
							9.2506,
							10.336,
							7.7533,
							6.473,
							9.8582,
							10.77,
							6.6032,
							7.0155,
							9.945,
							9.4459,
							8.7732,
							9.9233,
							8.426,
							9.511,
							9.2289,
							9.2289,
							8.643,
							9.9016,
							9.7931,
							10.748,
							11.898,
							8.3392,
							9.8799,
							10.292,
							8.0354,
							6.4079,
							5.6701,
							6.1692,
							6.6466,
							9.294,
							8.3609,
							7.2542,
							5.5616,
							6.7985,
							6.6249,
							6.1041,
							6.4947,
							4.6285,
							4.8889,
							5.4097,
							5.2578,
							4.7587,
							4.1511,
							3.5652,
							3.6737,
							3.9124,
							4.3464,
							3.218,
							3.8039,
							3.8907,
							4.1945,
							3.2831,
							4.2596,
							3.218,
							4.7804,
							5.7135,
							5.6701,
							4.9323,
							3.1312,
							2.6755,
							3.0878,
							3.6086,
							3.6737,
							3.4567,
							2.4802,
							2.5019,
							3.0444,
							3.435,
							4.5851,
							4.5634,
							3.8039,
							3.8473,
							3.8907,
							3.1746,
							3.218,
							3.7388,
							3.3916,
							3.8039,
							4.3681,
							4.5417,
							4.52,
							4.6719,
							4.8889,
							4.2813,
							3.652,
							4.2162,
							4.3681,
							3.0444,
							2.0245,
							2.35,
							3.3048,
							3.7605,
							3.3482,
							3.3482,
							3.1963,
							2.5019,
							2.3717,
							3.1095,
							3.3265,
							3.9124,
							3.435,
							3.652,
							3.3699,
							2.9142,
							2.1981,
							2.0028,
							2.4151,
							1.9594,
							2.0245,
							2.133,
							2.7406,
							2.4151,
							2.0028,
							1.3952,
							1.6122,
							1.7641,
							1.916,
							1.916,
							1.482,
							1.1348,
							1.1782,
							0.8527,
							0.7659,
							0.5706,
							0.614,
							0.397,
							0.3319,
							0.9178,
							1.7424,
							1.6122,
							1.5688,
							1.5037,
							1.3301,
							1.0697,
							0.8961,
							0.6357,
							0.3102,
							0.3753,
							0.5706,
							0.4187,
							0.3102,
							0.397,
							0.3102,
							0.5706,
							0.9395,
							1.5471,
							1.6339,
							0.6574,
							0.3102,
							0.6357,
							1.0046,
							0.6357,
							0.6574,
							0.3319,
							0.3102,
							0.3102,
							0.7225,
							1.0697,
							1.0697,
							1.265,
							2.5887,
							2.9142,
							2.6755,
							2.1764,
							3.7388,
							4.7153,
							3.7822,
							2.9793,
							2.6972,
							2.6538,
							3.1529,
							3.1963,
							3.218,
							5.1276,
							4.4983,
							4.1945,
							3.8256,
							5.3663,
							4.737,
							2.7406,
							3.5218,
							3.6954,
							3.3699,
							4.9757,
							5.0191,
							4.5417,
							4.0426,
							3.6303,
							3.435,
							3.9124,
							3.6086,
							3.7388,
							3.9341,
							3.4567,
							3.6303,
							3.652,
							3.6737,
							3.6303,
							3.8907,
							3.9558,
							4.1294,
							3.435,
							3.869,
							3.652,
							3.4784,
							2.8057,
							2.6972,
							2.5887,
							3.0444,
							3.1746,
							2.6972,
							3.0444,
							3.3699,
							3.869,
							4.2813,
							4.4983,
							4.7804,
							4.5417,
							4.7587,
							4.4332,
							4.0426,
							4.4332,
							4.303,
							4.3247,
							3.6303,
							4.1945,
							4.1945,
							4.1945,
							3.9558,
							3.7822,
							3.5435,
							3.5435,
							3.5001,
							3.5869,
							3.6737,
							3.9775,
							4.1294,
							3.7171,
							4.2596,
							4.8455,
							4.8238,
							4.4332,
							5.2795,
							5.2144,
							5.1927,
							5.2795,
							5.1059,
							5.1493,
							5.4748,
							5.5616,
							5.4531,
							5.1276,
							5.0191,
							4.4983,
							5.1276,
							5.171,
							4.8021,
							5.6918,
							6.0607,
							5.7569,
							5.6701,
							6.2994,
							5.8437,
							5.7352,
							5.8003,
							5.3229,
							5.2795,
							5.9305,
							6.3428,
							6.3645,
							6.1909,
							5.5399,
							5.5616,
							5.7569,
							4.3681,
							5.4748,
							5.5182,
							6.5815,
							6.2994,
							5.2144,
							5.5399,
							5.0408,
							4.4115,
							3.9341,
							4.086,
							4.3681,
							4.8238,
							4.5417,
							4.3681,
							3.8039,
							3.3265,
							3.3699,
							3.9775,
							3.6303,
							3.869,
							3.7171,
							3.3265,
							3.3916,
							3.5218,
							3.6954,
							4.0209,
							4.2379,
							4.1728,
							4.1511,
							4.3464,
							4.1294,
							3.7171,
							4.1945,
							4.3681,
							4.3681,
							4.1728,
							4.1294,
							3.8907,
							4.2813,
							4.737,
							5.0408,
							5.3446,
							5.3229,
							6.2777,
							7.124,
							6.2777,
							5.6918,
							6.8419,
							6.256,
							6.2777,
							6.2994,
							5.7786,
							5.9088,
							5.7135,
							5.6701,
							5.6701,
							5.7135,
							5.4748,
							5.822,
							6.4296,
							6.4079,
							6.9504,
							6.9938,
							6.8419,
							7.124,
							6.8853,
							6.7334,
							6.9287,
							6.9938,
							7.2759,
							7.0589,
							7.2325,
							7.3193,
							7.3193,
							7.1457,
							7.1023,
							6.9287,
							6.9504,
							7.2108,
							7.1891,
							7.3193,
							7.1891,
							7.0806,
							7.0372,
							6.8853,
							6.7985,
							6.7334,
							6.5598,
							6.4947,
							6.4513,
							6.3862,
							6.3645,
							5.8654,
							5.6267,
							5.8003,
							5.9305,
							5.5399,
							5.605,
							5.5399,
							5.388,
							5.3446,
							5.0408,
							4.8455,
							5.1493,
							5.2361,
							5.3012,
							4.8238,
							4.8889,
							4.6068,
							4.3681,
							4.3247,
							4.7153,
							4.4766,
							4.52,
							4.954,
							4.7587,
							4.9974,
							5.1276,
							4.9323,
							5.0625,
							4.9106,
							5.1276,
							5.1493,
							4.8021,
							5.2144,
							5.3663,
							4.8889,
							4.9974,
							5.4748,
							5.5182,
							5.9088,
							5.8003,
							5.8871,
							6.2126,
							6.0607,
							6.256,
							5.7135,
							6.256,
							5.8437,
							5.3446,
							5.6484,
							5.2361,
							5.4965,
							5.2578,
							5.388,
							5.4531,
							6.2777,
							6.3428,
							6.1041,
							6.4947,
							6.4513,
							6.6032,
							6.4079,
							6.039,
							5.8654,
							5.5399,
							6.473,
							6.2126,
							5.6267,
							5.822,
							6.7334,
							6.7985,
							6.7768,
							7.3193,
							7.6231,
							7.8835,
							7.6882,
							7.2759,
							7.1457,
							6.473,
							8.7081,
							9.4893,
							9.3591,
							9.2723,
							8.3392,
							7.6014,
							8.8166,
							8.0354,
							8.1439,
							7.4061,
							7.6231,
							6.8636,
							6.8202,
							6.69,
							6.8636,
							6.8853,
							6.256,
							6.7985,
							5.9522,
							6.6466,
							6.4296,
							5.605,
							6.3428,
							6.7117,
							6.4947,
							6.4079,
							6.5598,
							6.2777,
							5.7135,
							5.605,
							5.8871,
							6.1909,
							6.1909,
							6.2777,
							6.1692,
							6.0173,
							6.1475,
							5.9956,
							5.5182,
							5.2795,
							5.4314,
							5.7135,
							5.6918,
							5.3012,
							5.5616,
							4.9106,
							5.3446,
							5.4097,
	};

	/* print the unsorted array */
	printf("\nThe unsorted array is: \n");

	for (i = 0; i < SIZE; i = i + 1)
	{
		printf("%.4lf ", array[i]);
	}

	printf("\n");

	/* sorting the array using selection sort */

	for (j = 0; j < SIZE - 1; j = j + 1) {
		int i_min = j;

		for (i = j + 1; i < SIZE; i = i + 1) {
			if (array[i] < array[i_min]) {
				i_min = i;
				comparison = comparison + 1;

			}
		} if (i_min != j) {
			hold = array[j];
			array[j] = array[i_min];
			array[i_min] = hold;
			swap = swap + 1;
		}

	}

	/* print the selection sorted elements */
	printf("\nSorting the elements using selection sort: \n");
	for (i = 0; i < SIZE; i = i + 1)
	{
		printf("%.4lf ", array[i]);
	}

	printf("\n");

	/* end the clock */
	clock_t end = clock();

	/* calculate the time */
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	/* print the result */
	printf("\nThe time taken to sort is %f seconds\n", time_spent);

	/* print the number of swaps */
	printf("\nSwaps %d\n", swap);

	/* print the number of comparisons */
	printf("\nComparisons %d\n", comparison);

	return 0;
}