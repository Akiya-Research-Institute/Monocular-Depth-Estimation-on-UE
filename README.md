# Monocular-Depth-Estimation-on-UE4
UE4 project using NNEngine and [MiDaS](https://github.com/isl-org/MiDaS), monocular depth estimation AI

## Environments

- Unreal Engine 4.26.2
- [NNEngine plugin](https://www.unrealengine.com/marketplace/product/74892c770dc149b1b5c4e872804e6ade)
- Windows 10 64bit or Ubuntu 18.04.6 Desktop 64bit   
    - On Ubuntu, the large model does not work on TensorRT.

## Large model

If you want to use the large (whose input image size is 384x384) model, download from [here (GitHub Release page)](https://github.com/KenjiAsaba/Monocular-Depth-Estimation-on-UE4/releases/download/v1.1/midas_1x384x384xBGRxByte.onnx) or [here (Google Drive)](https://drive.google.com/file/d/1ml45494AGppnSZ3ivhw-HPi9CE8hxY2J/view?usp=sharing) and place it under `Source\ThirdParty\Models`.
