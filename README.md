# Monocular Depth estimation on UE4

Example UE4 project for depth estimation using a single RGB camera.  

## Environment

- OS: Windows 10 64bit
- Unreal Engine: 4.26.2
- [NNEngine plugin](https://www.unrealengine.com/marketplace/product/74892c770dc149b1b5c4e872804e6ade)

## Download

Demo project is available on [GitHub](https://github.com/Akiya-Research-Institute/Monocular-Depth-Estimation-on-UE4).  
Please download from the [release](https://github.com/Akiya-Research-Institute/Monocular-Depth-Estimation-on-UE4/releases) page.

## Run the demo

1. Extract the downloaded zip file and double-click `MonoDepthEstimation.uproject`.  
2. After launching, click `Play` on the editor to start the demo that performs AI estimation for the pre-recorded video.
3. To run on your webcam, specify the webcam you want to use in `/Content/Common/MediaPlayer_webcam.uasset`.

## Display camera image to the preview mesh

By switching the base color pin of `/Content/DepthEstimation/Grayscale_WPO.uasset`, you can 
display camera image to the preview mesh.

## Model details

See the following pages for the details of the model used in this project.

- [Towards Robust Monocular Depth Estimation: Mixing Datasets for Zero-shot Cross-dataset Transfer](https://arxiv.org/abs/1907.01341)
- [GitHub](https://github.com/isl-org/MiDaS)
