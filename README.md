# 计算机伟大思想大作业—量子密钥
组员：谢家烨 付长睿 任德厚
## 目录



## 代码结构
GREAT-IDEA-LAB-QKD/
├── src/
│   ├── quantum_lib/        #量子相关功能
│   │   ├── Qubit.h        
│   │   └── Qubit.cpp      
│   ├── actors/             #模拟密文发送过程的人员
│   │   ├── sender.h
│   │   ├── sender.cpp
│   │   ├── receiver.h
│   │   ├── receiver.cpp
│   │   ├── listener.h
│   │   └── listener.cpp
│   ├── CMakeLists.txt     
│   ├── build              
│   └── main.cpp           
└── tests/                 
    └── test_quantum_lib.cpp
