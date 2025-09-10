# KpqC-liboqs

**KpqC-liboqs** is a C library for quantum-safe cryptographic algorithms, forked from the original [liboqs](https://github.com/open-quantum-safe/liboqs) of the [Open Quantum Safe (OQS)](https://openquantumsafe.org) project.

This fork retains all the quantum-safe algorithms and features from upstream `liboqs` while extending its capabilities with **four Korean Post-Quantum Cryptography (KpqC) algorithms**.

The goal is to provide a comprehensive library that includes both the leading NIST PQC algorithms and selected Korean PQC candidates, offering a broader range of options for developers and researchers.

---

## 🌟 Features

- **Full `liboqs` Algorithm Suite**: Includes all KEMs and signature schemes from upstream.
- **KpqC Integration**: Adds support for four Korean PQC algorithms: SMAUG-T, NTRU+, AIMer, and HAETAE.
- **Unified API**: Provides a common C API for all supported algorithms.
- **Testing & Benchmarking**: Contains a full test harness and benchmarking utilities.

---

## 🛡️ Supported Algorithms

This library supports all algorithms from upstream `liboqs`, with the addition of the KpqC schemes.

### 🇰🇷 KpqC (Korean Post-Quantum Cryptography)

**KEMs**
- **SMAUG-T**: `smaug_t1`, `smaug_t3`, `smaug_t5`
- **NTRU+**: `ntru_plus_kem576`, `ntru_plus_kem768`, `ntru_plus_kem864`, `ntru_plus_kem1152`

**Signatures**
- **AIMer**: `AIMer128f`, `AIMer12f`, `AIMer192f`, `AIMer192s`, `AIMer256f`, `AIMer256s`
- **HAETAE**: `HAETAE2`, `HAETAE3`, `HAETAE5`

### 🌍 Upstream liboqs Algorithms

- **KEMs**: BIKE, Classic McEliece, FrodoKEM, HQC, Kyber (ML-KEM), NTRU-Prime
- **Signatures**: CROSS, Dilithium (ML-DSA), Falcon, MAYO, SNOVA, SPHINCS+, UOV, XMSS, LMS

*(For the complete list of algorithm variants, please refer to the upstream liboqs documentation.)*

---

## ⚠️ Limitations and Security

- For **research and prototyping only**.
- **Not recommended** for production environments or for protecting sensitive data.
- Please follow the security guidelines of the upstream `liboqs` project.
- We strongly recommend **hybrid cryptography** (combining PQC + classical algorithms such as RSA or ECDH).

> **Note on KpqC AVX2 Implementations**
>
> AVX2-optimized versions of the KpqC algorithms are included in this library.
> However, these implementations are **experimental and not fully validated**.
> They are provided only for **research and performance evaluation**.
> **Do not rely on them for security-critical applications.**

---

## 🚀 Quickstart

### Linux & macOS

1.  **Install Dependencies**

    * **On Ubuntu:**
        ```bash
        sudo apt install astyle cmake gcc ninja-build libssl-dev python3-pytest python3-pytest-xdist unzip xsltproc doxygen graphviz python3-yaml valgrind
        ```
    * **On macOS (with Homebrew):**
        ```bash
        brew install cmake ninja openssl@3 wget doxygen graphviz astyle valgrind
        pip3 install pytest pytest-xdist pyyaml
        ```

2.  **Clone and Build**
    ```bash
    git clone -b main <your-repo-url>
    cd KpqC-liboqs
    mkdir build && cd build
    cmake -GNinja ..
    ninja
    ```

3.  **Run Tests**
    ```bash
    ninja run_tests
    ```

### Windows

You can build the library using **Visual Studio 2019 (or newer)** with the "Desktop development with C++" and "CMake" workloads installed.

1.  **Clone** the repository.
2.  **Open the folder in Visual Studio**. It will automatically detect the `CMakeLists.txt` and configure the project.
3.  **Build** the `ALL_BUILD` target from the Solution Explorer.

---

## 📜 License

This project is licensed under the **MIT License**. See the `LICENSE.txt` file for details. The upstream `liboqs` project is also licensed under MIT. Please check the licenses of any third-party components included.

---

## 🙏 Acknowledgements

This project is a fork of the Open Quantum Safe (OQS) project’s `liboqs`. We thank all OQS contributors for their foundational work.

The OQS project is supported by the [Post-Quantum Cryptography Alliance (PQCA)](https://pqca.org/) under the Linux Foundation.
