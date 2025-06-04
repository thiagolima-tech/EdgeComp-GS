# 🚨 Sistema de Monitoramento de Enchentes com Arduino

Este projeto utiliza um sensor ultrassônico, LEDs, buzzer e um display LCD para monitorar o nível da água e alertar sobre risco de enchentes. Foi desenvolvido e simulado na plataforma [Wokwi](https://wokwi.com/).

## 🔧 Componentes Utilizados

- Arduino Uno
- Sensor Ultrassônico (HC-SR04)
- Display LCD 16x2 com módulo I2C
- LED Vermelho
- LED Amarelo
- Buzzer
- Jumpers e protoboard

## 🖼️ Imagens do Projeto (simulação Wokwi)

### 1. Projeto Desligado

![Projeto Desligado](./images/wokwiDesligado.png)

---

### 2. Nível Seguro

![Nível Seguro](./images/nivelSeguro.png)

---

### 3. Nível Alto

![Nível Alto](./images/nivelAlto.png)
![Nível Alto - Led](./images/ledAmarelo.png)

---

### 4. Perigo de Enchente

_(nível de água abaixo de 150 cm, acionando alarme sonoro e LED vermelho)_  
![Perigo de Enchente](./images/perigoEnchente.png)
![Perigo de Enchente - Led e Buzzer](./images/ledVermelho-Buzzer.png)

---

## 🧠 Lógica do Sistema

O sistema funciona da seguinte forma:

- Mede a distância do sensor ao nível da água usando o sensor ultrassônico.
- Classifica a situação de acordo com a distância:
  - **> 200 cm**: Nível seguro
  - **150–200 cm**: Nível alto (LED amarelo aceso)
  - **< 150 cm**: Perigo de enchente (LED vermelho + alarme sonoro)
- Exibe informações no display LCD em tempo real.

## ▶️ Como Simular o Projeto

Acesse o simulador com o link do projeto:
[Link para o simulador Wokiwi](https://wokwi.com/projects/432782066990787585)

## 👥 Integrantes do Grupo

<table>
  <tr>
    <td align="center">
      <img src="./images/Vitor.png" width="100px;" alt="Foto Vitor"/>
      <br>
      <sub>Vitor Alcantara</sub>
      <br>
      RM: 565885
      <br><a href="https://github.com/VitorAlcantara-tech" target="_blank">GitHub</a>
      • <a href="https://www.linkedin.com/in/vitor-alcantara" target="_blank">LinkedIn</a>
    </td>
    
  <td align="center">
      <img src="./images/Thiago.png" width="100px;" alt="Foto Thiago"/>
      <br>
      <sub>Thiago Lima</sub>
      <br>
      RM: 563416
      <br><a href="https://github.com/thiagolima-tech" target="_blank">GitHub</a>
      • <a href="https://www.linkedin.com/in/thiago-lima-cavalcanti-8446bb317/" target="_blank">LinkedIn</a>
    </td>
    
  <td align="center">
      <img src="./images/Matheus.png" width="100px;" alt="Foto Matheus"/>
      <br>
      <sub>Matheus Vasques</sub>
      <br>
      RM: 563309
      <br><a href="https://github.com/maatvasques" target="_blank">GitHub</a>
      • <a href="https://www.linkedin.com/in/matheus-vasques-santos-21a187357/">LinkedIn</a>
    </td>
