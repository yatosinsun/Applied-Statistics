# PROGRAMLAMAYA GİRİŞ 

# Yasin Tosun

# Genç Ekonomistler Kulübü, 2022

# C++ GİRİŞ

cat("Merhaba\n")

if (5 > 2) {
  cat("Beş büyüktür ikiden\n")
} else {
  cat("Beş ikiden büyük değildir!\n")
}

if (5 > 2) {
  cat("Beş büyüktür ikiden\n")
} else {
  cat("Beş ikiden büyük değildir!\n")
}

a <- 5
b <- 10
toplam <- a + b
cat("Toplam: ", toplam, "\n")

cat("C++ ile Uygulamalı İstatistik\n")

isim <- "İsmet"

x <- "Elma"
y <- "Armut"
z <- "Çilek"

cat(x, "\n")
cat(y, "\n")
cat(z, "\n")

x <- y <- z <- "Karpuz"

cat(x, "\n")
cat(y, "\n")
cat(z, "\n")

y <- "Pırasa"

ornekFonksiyon <- function() {
  cat(y, "\n")
}

ornekFonksiyon()
cat(y, "\n")

result1 <- 10 + 15
result2 <- 60 - 30
result3 <- 80 / 4
result4 <- 15 * 5

a <- 24
b <- 16
toplam <- 10 + a + b
cat("Toplam: ", toplam, "\n")
cat("Veri Tipi: ", typeof(toplam), "\n")

toplamMisket <- 120
mustafa <- 16 * 2
mehmet <- 15 * 2
zehra <- 14 * 2
kalanMisket <- toplamMisket - mustafa - mehmet - zehra
cat("Kutuda kalan misket sayısı: ", kalanMisket, "\n")

ondalikliSayi <- 1.25
muzFiyati <- 1.75

musteriA <- 2.5
musteriB <- 2
musteriC <- 4.25

kazancA <- musteriA * muzFiyati
kazancB <- musteriB * muzFiyati
kazancC <- musteriC * muzFiyati

toplamKazanc <- kazancA + kazancB + kazancC
cat("Manavın Kazancı: ", toplamKazanc, " TL\n")
cat("Veri tipi: ", typeof(toplamKazanc), "\n")

a <- 10
b <- 2
cat("Sonuç: ", a / b, "\n")

# Toplama (Addition)

arr1 <- c(10, 11, 12, 13, 14, 15)
arr2 <- c(20, 21, 22, 23, 24, 25)

newarr <- arr1 + arr2

cat(newarr, "\n")

# Çıkarma (Subtraction)

arr1 <- c(10, 20, 30, 40, 50, 60)
arr2 <- c(20, 21, 22, 23, 24, 25)

newarr <- arr1 - arr2

cat(newarr, "\n")

# Çarpma (Multiplication)

arr1 <- c(10, 20, 30, 40, 50, 60)
arr2 <- c(20, 21, 22, 23, 24, 25)

newarr <- arr1 * arr2

cat(newarr, "\n")

# Bölme (Division)

arr1 <- c(10, 20, 30, 40, 50, 60)
arr2 <- c(3, 5, 10, 8, 2, 33)

newarr <- arr1 / arr2

cat(newarr, "\n")

# MERKEZİ EĞİLİM

yas <- c(1, 2, 3, 5, 6, 7, 7, 10, 12, 13)

# Ortalama (Mean)
mean_yas <- mean(yas)
cat("Ortalama: ", mean_yas, "\n")

# Medyan (Median)
median_yas <- median(yas)
cat("Medyan: ", median_yas, "\n")

# Mod (Mode)
mode_yas <- names(table(yas))[table(yas) == max(table(yas))]
cat("Mod: ", mode_yas, "\n")

# HISTOGRAM & DAĞILIM

yas <- c(1, 2, 3, 5, 6, 7, 7, 10, 12, 13)

# Range
range_yas <- max(yas) - min(yas)
cat("Range: ", range_yas, "\n")

# Varyans
variance_yas <- var(yas)
cat("Varyans: ", variance_yas, "\n")

# Standart Sapma
stdDev_yas <- sqrt(variance_yas)
cat("Standart Sapma: ", stdDev_yas, "\n")

# Zar örneği
a <- sample(1:6, 60000, replace = TRUE)
unique_values <- unique(a)
cat("Örnek uzay: ", unique_values, "\n")

# Histogram oluşturma
histogram <- table(a)
cat("Sayıların çıkma sayısı: \n")
print(histogram)

# STANDART SAPMA, VARYANS, ORTALAMA

s1 <- c(14.67230258, 14.5984991, 14.99997003, 14.83541808, 15.42533116, 15.42023888, 15.0614731, 14.43906856, 15.40888636, 
        14.87811941, 14.93932134, 15.04271942, 14.96311939, 14.0379782, 14.10980817, 15.23184029)

mean1 <- mean(s1)
variance1 <- var(s1)
stdDeviation1 <- sd(s1)

cat("mean 1: ", mean1, "\n")
cat("standart deviation 1: ", stdDeviation1, "\n")
cat("variance 1: ", variance1, "\n")

s2 <- c(15.23688167, 15.30058977, 15.49836851, 15.03712277, 14.72393502, 14.97462198, 15.0381114, 15.18667258, 15.5914418,
        15.44854406, 15.54645152, 14.89288726, 15.36069141, 15.18758271, 14.48270754, 15.28841374)

mean2 <- mean(s2)
variance2 <- var(s2)
stdDeviation2 <- sd(s2)

cat("mean 2: ", mean2, "\n")
cat("standart deviation 2: ", stdDeviation2, "\n")
cat("variance 2: ", variance2, "\n")

t_val <- abs(mean(s1) - mean(s2)) / sqrt((var(s1) / length(s1)) + (var(s2) / length(s2)))
cat("t-değeri: ", t_val, "\n")