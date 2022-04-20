# TensorFlow Lite Micro Intro

## Train model (optional)

Follow instruction in `model/README.md`.

## Prepare

### Clone TensorFlowLite micro components:

```sh
$ git clone --recurse-submodules https://github.com/espressif/tflite-micro-esp-examples.git $HOME/tflite-micro
$ cd <project-path>
$ mkdir -p components
$ ln -s $HOME/tflite-micro/components/tflite-lib tflite-lib
$ ln -s $HOME/tflite-micro/components/esp-nn esp-nn
```
