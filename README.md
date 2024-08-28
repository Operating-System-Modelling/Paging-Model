
# <h1 align="center">💻 RAM and Secondary Storage Simulation Project</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white" alt="C Language"/>
  <img src="https://img.shields.io/badge/OS-Operating_System-2c3e50" alt="Operating Systems"/>
</p>

<p align="center">
  A detailed simulation of how RAM and secondary storage interact, focusing on page replacement algorithms and memory management techniques.
</p>

---

## 🌟 **Features**
- **🔄 Page Replacement Algorithms**: Implements various strategies including FIFO, LRU, etc., to manage memory efficiently.
- **📊 RAM and Storage Simulation**: Models the interaction between RAM and secondary storage, mimicking real-world memory management.
- **📈 Statistics Tracking**: Monitors key metrics such as page faults, hit/miss ratios, and overall performance.
- **⚙️ Modular Design**: Well-organized codebase with clear separation between core components like page replacement logic and statistical analysis.

---

## 🛠 **Tech Stack**
- **Programming Language**: <img src="https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white"/> C
- **Environment**: Linux-based development and testing.
- **Build System**: Makefile for easy compilation and execution.

---

## 🗂 **Project Structure**
1. **Page Replacement Algorithms**:
   - `page_fault.c`: Manages the detection and handling of page faults.
   - `page_replacement.c`: Implements various page replacement algorithms.
2. **Memory Management Simulation**:
   - `paging.c` & `paging.h`: Simulates the paging mechanism, handling memory allocation and management between RAM and secondary storage.
3. **Statistics Module**:
   - `stats.c` & `stats.h`: Tracks and reports on memory usage, page faults, and other relevant statistics.
4. **Simulation Control**:
   - `pagesim.c` & `pagesim.h`: Main driver that integrates all components to simulate RAM and storage interactions.

---

## 🚀 **Getting Started**

### Prerequisites
- GCC Compiler (or any C compiler)
- Linux environment (for development and testing)

### Installation
1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/RAM-Storage-Simulation.git

-- ECE_3058_Lab4
