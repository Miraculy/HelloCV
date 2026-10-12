## 单位转换器UnitConverter

基于 C++ 制作，使用 CMake 进行构建。

基于自研单位转换库进行单位转换

### 关于单位转换库

在头文件中定义了六个函数来分别处理需求的情况。

```
double C2F(double x);     // 摄氏度转华氏度
double F2C(double x);     // 华氏度转摄氏度
double Ft2M(double x);    // 英尺转米
double M2Ft(double x);    // 米转英尺
double Lb2Kg(double x);   // 磅转千克
double Kg2Lb(double x);   // 千克转磅
```

函数的详细实现参照源码。