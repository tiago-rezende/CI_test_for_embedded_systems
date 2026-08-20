# STM32 PlatformIO Integration Test

Uma prova de conceito para integração do **STM32CubeMX** com o **PlatformIO** no VS Code, utilizando uma arquitetura de pastas modular e limpa.

![PlatformIO](https://img.shields.io/badge/PlatformIO-VS%20Code-orange?style=for-the-badge&logo=platformio)
![STM32](https://img.shields.io/badge/STM32-Blue%20Pill-blue?style=for-the-badge&logo=stmicroelectronics)
![Framework](https://img.shields.io/badge/Framework-STM32Cube%20HAL-green?style=for-the-badge)

---

### Arquitetura & Estrutura

<p align="center">
  <img src="https://github.com/user-attachments/assets/6896b2fd-cc3b-4f67-8707-101bdcd04367" width="450" alt="Estrutura de Pastas do Projeto" />
</p>

---

### Destaques da Configuração

* **Estrutura Modular**: Separação clara entre o código gerado pelo CubeMX e as configurações do PlatformIO.
* **Redirecionamento Dinâmico**: Mapeamento direto de `src_dir` e `include_dir` via `platformio.ini`.
* **Hardware Alvo**: STM32F103C8T6 (*Blue Pill*) via gravador ST-Link V2.

---

### Como Compilar e Gravar

1. **Clonar o Repositório**:
   ```bash
   git clone [https://github.com/seu-usuario/platformio_test.git](https://github.com/seu-usuario/platformio_test.git)
