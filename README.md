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

## ⚠️ Limitations and Platform Support

### Platform Support
- **Currently Supported:** **macOS (Apple Silicon)** only.
- **Not Supported:** Ubuntu/Linux and Windows builds are currently **not functioning** or tested. Support for these platforms is planned for future updates.

### Security & Usage
- For **research and prototyping only**.
- **Not recommended** for production environments or for protecting sensitive data.
- We strongly recommend **hybrid cryptography** (combining PQC + classical algorithms such as RSA or ECDH).

> **🚧 Note on KpqC AVX2 Implementations**
>
> AVX2-optimized versions of the KpqC algorithms are currently **Work In Progress (WIP)**.
> Implementation is ongoing, and they are **not yet available for use**. 
> Please rely on the portable C implementations for now.

---

## 🚀 Quickstart

### macOS (Apple Silicon)

This guide follows the verified installation steps for **macOS Apple Silicon (arm64)**.

**1. Install Dependencies**
```bash
brew install cmake ninja openssl@3 git bc


**2. Install Dependencies**
# Clone with recursive to get all submodules
git clone --recursive [https://github.com/minjoo97/liboqs_KpqC.git](https://github.com/minjoo97/liboqs_KpqC.git)
cd liboqs_KpqC

**3. Configure Build (CMake) This configuration installs the library to /usr/local and explicitly targets arm64 architecture.
cmake -GNinja \
  -DCMAKE_INSTALL_PREFIX=/usr/local \
  -DCMAKE_OSX_ARCHITECTURES=arm64 \
  -S . -B build

**4. Build and Install
cmake --build build
sudo cmake --install build


📜 License
This project is licensed under the MIT License. See the LICENSE.txt file for details. The upstream liboqs project is also licensed under MIT. Please check the licenses of any third-party components included.

🙏 Acknowledgements
This project is a fork of the Open Quantum Safe (OQS) project’s liboqs. We thank all OQS contributors for their foundational work.

The OQS project is supported by the Post-Quantum Cryptography Alliance (PQCA) under the Linux Foundation
