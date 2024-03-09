# %% PROGRAMLAMAYA GİRİŞ : Yasin Tosun, Genç Ekonomistler Kulübü, 2022
/*
                            PROGRAMLAMAYA GİRİŞ 

                                Yasin Tosun
                                
                       Genç Ekonomistler Kulübü, 2022
*/
/* C++ GİRİŞ */ 


    
#include <iostream>

int main() {
    std::cout << "Merhaba" << std::endl;
    return 0;
}

#include <iostream>
#include <string>

int main() {
    if (5 > 2) {
        std::cout << "Beş büyüktür ikiden" << std::endl;
    } else {
        std::cout << "Beş ikiden büyük değildir!" << std::endl;
    }
    
    if (5 > 2) {
        std::cout << "Beş büyüktür ikiden" << std::endl;
    } else {
        std::cout << "Beş ikiden büyük değildir!" << std::endl;
    }
    
    int a = 5;
    int b = 10;
    int toplam = a + b;
    std::cout << "Toplam: " << toplam << std::endl;
    
    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::cout << "C++ ile Uygulamalı İstatistik" << std::endl;

    std::string isim = "İsmet";

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string x = "Elma";
    std::string y = "Armut";
    std::string z = "Çilek";

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    x = y = z = "Karpuz";

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    return 0;
}

#include <iostream>

std::string y = "Pırasa";

void ornekFonksiyon() {
    std::cout << y << std::endl;
}

int main() {
    ornekFonksiyon();
    std::cout << y << std::endl;

    int result1 = 10 + 15;
    int result2 = 60 - 30;
    int result3 = 80 / 4;
    int result4 = 15 * 5;

    int a = 24;
    int b = 16;
    int toplam = 10 + a + b;
    std::cout << "Toplam: " << toplam << std::endl;
    std::cout << "Veri Tipi: " << typeid(toplam).name() << std::endl;

    int toplamMisket = 120;
    int mustafa = 16 * 2;
    int mehmet = 15 * 2;
    int zehra = 14 * 2;
    int kalanMisket = toplamMisket - mustafa - mehmet - zehra;
    std::cout << "Kutuda kalan misket sayısı: " << kalanMisket << std::endl;

    double ondalikliSayi = 1.25;
    double muzFiyati = 1.75;

    double musteriA = 2.5;
    double musteriB = 2;
    double musteriC = 4.25;

    double kazancA = musteriA * muzFiyati;
    double kazancB = musteriB * muzFiyati;
    double kazancC = musteriC * muzFiyati;

    double toplamKazanc = kazancA + kazancB + kazancC;
    std::cout << "Manavın Kazancı: " << toplamKazanc << " TL" << std::endl;
    std::cout << "Veri tipi: " << typeid(toplamKazanc).name() << std::endl;

    int a = 10;
    int b = 2;
    std::cout << "Sonuç: " << a / b << std::endl;

    return 0;
}

/*
  Toplama (Addition)
*/

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> arr1 = {10, 11, 12, 13, 14, 15};
    std::vector<int> arr2 = {20, 21, 22, 23, 24, 25};
    
    std::vector<int> newarr(arr1.size());
    std::transform(arr1.begin(), arr1.end(), arr2.begin(), newarr.begin(), std::plus<int>());

    for (int num : newarr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
 Çıkarma (Subtraction)
*/

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> arr1 = {10, 20, 30, 40, 50, 60};
    std::vector<int> arr2 = {20, 21, 22, 23, 24, 25};
    
    std::vector<int> newarr(arr1.size());
    std::transform(arr1.begin(), arr1.end(), arr2.begin(), newarr.begin(), std::minus<int>());

    for (int num : newarr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


/*  Çarpma (Multiplication) */

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> arr1 = {10, 20, 30, 40, 50, 60};
    std::vector<int> arr2 = {20, 21, 22, 23, 24, 25};
    
    std::vector<int> newarr(arr1.size());
    std::transform(arr1.begin(), arr1.end(), arr2.begin(), newarr.begin(), std::multiplies<int>());

    for (int num : newarr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


/* Bölme (Division) */


#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> arr1 = {10, 20, 30, 40, 50, 60};
    std::vector<double> arr2 = {3, 5, 10, 8, 2, 33};
    
    std::vector<double> newarr(arr1.size());
    std::transform(arr1.begin(), arr1.end(), arr2.begin(), newarr.begin(), std::divides<double>());

    for (double num : newarr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


//****************** Merkezi Eğilim (Central Tendency) ******************

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <map>

int main() {
    std::vector<int> yas = {1, 2, 3, 5, 6, 7, 7, 10, 12, 13};

    // Ortalama (Mean)
    double mean_yas = std::accumulate(yas.begin(), yas.end(), 0.0) / yas.size();
    std::cout << "Ortalama: " << mean_yas << std::endl;

    // Medyan (Median)
    std::sort(yas.begin(), yas.end());
    double median_yas;
    if (yas.size() % 2 == 0) {
        median_yas = (yas[yas.size() / 2 - 1] + yas[yas.size() / 2]) / 2.0;
    } else {
        median_yas = yas[yas.size() / 2];
    }
    std::cout << "Medyan: " << median_yas << std::endl;

    // Mod (Mode)
    std::map<int, int> frequency;
    for (int num : yas) {
        frequency[num]++;
    }
    int max_freq = 0;
    int mode_yas = 0;
    for (const auto& pair : frequency) {
        if (pair.second > max_freq) {
            max_freq = pair.second;
            mode_yas = pair.first;
        }
    }
    std::cout << "Mod: " << mode_yas << std::endl;

    return 0;
}

//**************** Dağılım ****************

//range
std::vector<int> yas = {1, 2, 3, 5, 6, 7, 7, 10, 12, 13};
int range = *std::max_element(yas.begin(), yas.end()) - *std::min_element(yas.begin(), yas.end());
std::cout << "Range: " << range << std::endl;

//varyans
double variance = 0.0;
for (int i = 0; i < yas.size(); ++i) {
    variance += pow(yas[i] - std::accumulate(yas.begin(), yas.end(), 0) / yas.size(), 2);
}
variance /= yas.size();
std::cout << "Varyans: " << variance << std::endl;

//standart sapma
double stdDev = sqrt(variance);
std::cout << "Standart Sapma: " << stdDev << std::endl;


// Zar örneği
std::vector<int> a(60000);
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> dis(1, 6);

for (int i = 0; i < 60000; ++i) {
    a[i] = dis(gen);
}

std::set<int> unique_values(a.begin(), a.end());
std::cout << "Örnek uzay: ";
for (int val : unique_values) {
    std::cout << val << " ";
}
std::cout << std::endl;

// Histogram oluşturma
std::map<int, int> histogram;
for (int val : a) {
    histogram[val]++;
}

for (const auto& pair : histogram) {
    std::cout << pair.first << " sayısının çıkma sayısı: " << pair.second << std::endl;
}

// Standart Sapma, Varyans

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<double> s1 = {14.67230258, 14.5984991, 14.99997003, 14.83541808, 15.42533116, 15.42023888, 15.0614731, 14.43906856, 15.40888636, 
                              14.87811941, 14.93932134, 15.04271942, 14.96311939, 14.0379782, 14.10980817, 15.23184029};
    
    double mean1 = 0.0;
    for (const auto& num : s1) {
        mean1 += num;
    }
    mean1 /= s1.size();
    
    double variance1 = 0.0;
    for (const auto& num : s1) {
        variance1 += pow(num - mean1, 2);
    }
    variance1 /= s1.size();
    
    double stdDeviation1 = sqrt(variance1);
    
    std::cout << "mean 1: " << mean1 << std::endl;
    std::cout << "standart deviation 1: " << stdDeviation1 << std::endl;
    std::cout << "variance 1: " << variance1 << std::endl;

    std::vector<double> s2 = {15.23688167, 15.30058977, 15.49836851, 15.03712277, 14.72393502, 14.97462198, 15.0381114, 15.18667258, 15.5914418,
                              15.44854406, 15.54645152, 14.89288726, 15.36069141, 15.18758271, 14.48270754, 15.28841374};
    
    double mean2 = 0.0;
    for (const auto& num : s2) {
        mean2 += num;
    }
    mean2 /= s2.size();
    
    double variance2 = 0.0;
    for (const auto& num : s2) {
        variance2 += pow(num - mean2, 2);
    }
    variance2 /= s2.size();
    
    double stdDeviation2 = sqrt(variance2);
    
    std::cout << "mean 2: " << mean2 << std::endl;
    std::cout << "standart deviation 2: " << stdDeviation2 << std::endl;
    std::cout << "variance 2: " << variance2 << std::endl;

    return 0;
}

double t_val = std::abs(std::mean(s1) - std::mean(s2)) / std::sqrt((std::var(s1) / s1.size()) + (std::var(s2) / s2.size()));
std::cout << "t-değeri: " << t_val << std::endl;