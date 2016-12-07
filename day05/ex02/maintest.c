// #include <stdio.h>

// int ft_atoi(char *str);

// int main()
// {
// 	char test[]= "+10A00ABCD";
// 	printf("%i\n", ft_atoi(test));
// }


#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);


int	main()
{

	char str1[] = "1000";
	char str2[] = "0000123";
	char str3[] = "   +42";
	char str4[] = "   -42";
	char str5[] = "+ 42";
	char str6[] = "- 42";
	char str7[] = "+-42";
	char str8[] = "\r\n\t\v42";
	char str9[] = "\\1";
	char str10[] = "+";
	char str11[] = "-";
	char str12[] = "-+";
	char str13[] = "+-";
	char str14[] = "2147483647";
	char str15[] = "2147483648";
	char str16[] = "2147483649";
	char str17[] = "-2147483647";
	char str18[] = "-2147483648";
	char str19[] = "-2147483649";
	char str20[] = "1789324638";
	char str21[] = "11221f11";
	char str22[] = "42 43 44 45 46";
        char str23[] = "9223372036854775807";
        char str24[] = "9223372036854775808";
        char str25[] = "9223372036854775809";
        char str26[] = "-9223372036854775807";
        char str27[] = "-9223372036854775808";
        char str28[] = "-9223372036854775809";
        char str29[] = "      9223372036854775809";
        char str30[] = "  \r\n\t\v\f    9223372036854775806";
        char str31[] = "10000000000000000000";
        char str32[] = "-10000000000000000000";
        char str33[] = "-33333333333333333333";
        char str34[] = "-333333333333333333333";

	int num1 = atoi(str1);
	int num2 = atoi(str2);
	int num3 = atoi(str3);
	int num4 = atoi(str4);
	int num5 = atoi(str5);
	int num6 = atoi(str6);
	int num7 = atoi(str7);
	int num8 = atoi(str8);
	int num9 = atoi(str9);
	int num10 = atoi(str10);
	int num11 = atoi(str11);
        int num12 = atoi(str12);
        int num13 = atoi(str13);
        int num14 = atoi(str14);
        int num15 = atoi(str15);
        int num16 = atoi(str16);
        int num17 = atoi(str17);
        int num18 = atoi(str18);
        int num19 = atoi(str19);
        int num20 = atoi(str20);
        int num21 = atoi(str21);
        int num22 = atoi(str22);
        int num23 = atoi(str23);
        int num24 = atoi(str24);
        int num25 = atoi(str25);
        int num26 = atoi(str26);
        int num27 = atoi(str27);
        int num28 = atoi(str28);
        int num29 = atoi(str29);
        int num30 = atoi(str30);
        int num31 = atoi(str31);
        int num32 = atoi(str32);
        int num33 = atoi(str33);
        int num34 = atoi(str34);

        int num_1 = ft_atoi(str1);
        int num_2 = ft_atoi(str2);
        int num_3 = ft_atoi(str3);
        int num_4 = ft_atoi(str4);
        int num_5 = ft_atoi(str5);
        int num_6 = ft_atoi(str6);
        int num_7 = ft_atoi(str7);
        int num_8 = ft_atoi(str8);
        int num_9 = ft_atoi(str9);
        int num_10 = ft_atoi(str10);
        int num_11 = ft_atoi(str11);
        int num_12 = ft_atoi(str12);
        int num_13 = ft_atoi(str13);
        int num_14 = ft_atoi(str14);
        int num_15 = ft_atoi(str15);
        int num_16 = ft_atoi(str16);
        int num_17 = ft_atoi(str17);
        int num_18 = ft_atoi(str18);
        int num_19 = ft_atoi(str19);
        int num_20 = ft_atoi(str20);
        int num_21 = ft_atoi(str21);
        int num_22 = ft_atoi(str22);
        int num_23 = ft_atoi(str23);
        int num_24 = ft_atoi(str24);
        int num_25 = ft_atoi(str25);
        int num_26 = ft_atoi(str26);
        int num_27 = ft_atoi(str27);
        int num_28 = ft_atoi(str28);
        int num_29 = ft_atoi(str29);
        int num_30 = ft_atoi(str30);
        int num_31 = ft_atoi(str31);
        int num_32 = ft_atoi(str32);
        int num_33 = ft_atoi(str33);
        int num_34 = ft_atoi(str34);

	if (num1  != num_1 )
		printf("TEST num1 has failed!");
	if (num2  != num_2 )
		printf("TEST num2 has failed!");
	if (num3  != num_3 )
		printf("TEST num3 has failed!");
	if (num4  != num_4 )
		printf("TEST num4 has failed!");
	if (num5  != num_5 )
		printf("TEST num5 has failed!");
	if (num6  != num_6 )
		printf("TEST num6 has failed!");
	if (num7  != num_7 )
		printf("TEST num7 has failed!");
	if (num8  != num_8 )
		printf("TEST num8 has failed!");
	if (num9  != num_9 )
		printf("TEST num9 has failed!");
	if (num10 != num_10)
		printf("TEST num10has failed!");
	if (num11 != num_11)
		printf("TEST num11has failed!");
        if (num12 != num_12)
                printf("TEST num12has failed!");
        if (num13 != num_13)
                printf("TEST num13has failed!");
        if (num14 != num_14)
                printf("TEST num14has failed!");
        if (num15 != num_15)
                printf("TEST num15has failed!");
        if (num16 != num_16)
                printf("TEST num16has failed!");
        if (num17 != num_17)
                printf("TEST num17has failed!");
        if (num18 != num_18)
                printf("TEST num18has failed!");
        if (num19 != num_19)
                printf("TEST num19has failed!");
        if (num20 != num_20)
                printf("TEST num20has failed!");
        if (num21 != num_21)
                printf("TEST num21has failed!");
        if (num22 != num_22)
                printf("TEST num22has failed!");
        if (num23 != num_23)
                printf("TEST num23has failed!");
        if (num24 != num_24)
                printf("TEST num24has failed!");
        if (num25 != num_25)
                printf("TEST num25has failed!");
        if (num26 != num_26)
                printf("TEST num26has failed!");
        if (num27 != num_27)
                printf("TEST num27has failed!");
        if (num28 != num_28)
                printf("TEST num28has failed!");
        if (num29 != num_29)
                printf("TEST num29has failed!");
        if (num30 != num_30)
                printf("TEST num30has failed!");
        if (num31 != num_31)
                printf("TEST num31has failed!");
        if (num32 != num_32)
                printf("TEST num32has failed!");
        if (num33 != num_33)
                printf("TEST num33has failed!");
        if (num34 != num_34)
                printf("TEST num34has failed!");
}
