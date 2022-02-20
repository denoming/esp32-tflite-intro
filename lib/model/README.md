# Install

## Install nodejs

```shell
$ wget -qO- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.1/install.sh | bash
$ source ~/.bashrc
$ nvm install v16.13.2
```

## Install conda

```shell
$ cd ~/Downloads
$ wget https://repo.anaconda.com/archive/Anaconda3-2021.11-Linux-x86_64.sh
$ chmod +x Anaconda3-2021.11-Linux-x86_64.sh
$ ./Anaconda3-2021.11-Linux-x86_64.sh
$ conda update --all
$ conda update conda
```

## Install jupyter

```shell
$ conda create -n tf tensorflow
(tf) $ conda install -c conda-forge ipympl
(tf) $ conda install -c conda-forge jupyterlab
(tf) $ jupyter labextension install @jupyter-widgets/jupyterlab-manager
(tf) $ jupyter labextension install jupyter-matplotlib
```

# Train

Run jupyer in terminal window:
```shell
$ cd <root-folder-of-example>
$ conda activate tf
$ jupyter lab
```

Open train.ipynb file in jupyter notebook and train model.
Then export model to appropriate format:
```shell
$ xxd -i -C model.tflite > model.cc
```

