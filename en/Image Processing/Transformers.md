# Vision Transformer in Deep Learning

## "An Image is Worth 16x16 Words: Transformers for Image Recognition at Scale"

## Introduction:
The Vision Transformer (ViT) paper demonstrated that a pure transformer-based architecture, without any convolutional layers, could achieve state-of-the-art results on large-scale image classification benchmarks. While initially applied to tasks like image classification, ViT has since been adapted for a wide range of computer vision tasks, including object detection and segmentation.

## Note:
The explanation uses a standard image size=224x224x3.

## Explanation:
1) Given image of size 224x224x3 divide into non-overlapping patches of size 16x16x3 which give 14x14=196 patches.
2) Each patch is flattened into a vector via learnable linear projection which gives seqquence of patch embeddings.
3) Adding a position embedding to each patch embedding(learnable) to retain the spatial information of image.
4) Prepending a class token to (patch+position) embedding of the image.
5) Input of Transformer Encoder is class+(patch+position) embeddings and the Self-Attention in encoder learns relationship among patches.
6) Only the class token from output of Transformer Encoder is passed through MLP(Multi layer perceptron) aka classifier.
## Why:
Ex: There is Dog image, the output of Transformer Encoder gives class token along with patch and position embeddings but the necessary features of Dog are captured in class embedding to classify the Dog image.
7) The output of MLP is fed to softmax layer which gives the probability vector->class label(based on high probability index).

## Reference:

AN IMAGE IS WORTH 16X16 WORDS: TRANSFORMERS FOR IMAGE RECOGNITION AT SCALE
For reference on how the attention mechanism(Transformer Encoder in ViT) works check: Attention Is All You Need









