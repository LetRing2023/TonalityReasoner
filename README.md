# Tonality Reasoner

Tonality Reasoner 是一个用于分析音调的C++项目。通过输入一组音符，该项目可以分析出音符所在的调性（大调或小调）及其调号。

## 功能介绍

Tonality Reasoner 提供了以下功能：

- 添加音符进行分析
- 分析音符所属的调性及调号
- 清除已添加的音符数据
- 输出分析结果

## 编译环境

- C++11 或更高版本
- CMake 3.10 或更高版本

## 部署方法

1. 克隆此仓库：
```bash
git clone https://github.com/LetRing2023/TonalityReasoner.git
```

2. 使用 CMake 构建项目：
```bash
cd tonality-reasoner
mkdir build && cd build
cmake ..
make
```

## Documentation

### Enum: MusicalInterval

Enumeration representing musical intervals. Possible values are:

- PerfectUnison
- MinorSecond
- MajorSecond
- MinorThird
- MajorThird
- PerfectFourth
- DiminishedFifth
- PerfectFifth
- MinorSixth
- MajorSixth
- MinorSeventh
- MajorSeventh
- PerfectOctave
- ...

### Enum: MusicalSignature

Enumeration representing musical signatures. Possible values are:

- C
- CsDb
- D
- DsEb
- E
- F
- FsGb
- G
- GsAb
- A
- AsBb
- B

### Class: MusicalNote

A class representing a musical note. Includes the following methods:

- Constructor: Creates a musical note object based on the note name
- getSignature: Retrieves the signature of the note
- getInterval: Calculates the interval between two notes
- toString: Converts the musical note object to a string representation

### Class: TonalityReasoner

A class for analyzing tonality. Includes the following methods:

- Constructor: Creates a TonalityReasoner object
- add: Adds a note for analysis
- update: Manually performs tonality analysis
- clear: Clears the added note data
- output: Outputs the analysis results
