# ESP32 TFLITE Intro

## Train model (optional)

Follow instruction in `model/README.md`.

## Dependencies

* Platform.io toolkit
* ESP-IDF (ver. 5.1)
* TensorFlow Lite Micro (git submodule)
* ESP-NN (git submodule)

## Build

* Clone
```shell
$ git clone <url>
$ cd esp32-tflite-intro
$ git submodule update --init --recursive
```
* Build
```shell
$ pio run -t menuconfig
$ pio run
```
* Upload
```shell
$ pio run -t upload
```
* Connect
```shell
$ pio run -t monitor
```