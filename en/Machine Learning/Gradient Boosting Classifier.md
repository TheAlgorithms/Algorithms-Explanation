# Gradient Boosting Classifier

## Overview

[Gradient Boosting Classifier](https://en.wikipedia.org/wiki/Gradient_boosting#:~:text=Gradient%20boosting%20is%20a%20machine,residuals%20used%20in%20traditional%20boosting.) is a powerful ensemble learning algorithm devised by Jerome Friedman in 1999. This method integrates multiple weak learners, typically decision trees, to build a robust predictive model. The algorithm follows an iterative process, correcting errors of the preceding models to enhance overall predictive performance.

## Complexity

The time complexity of training a Gradient Boosting Classifier depends on factors such as the number of weak learners (n_estimators), the complexity of each learner, and the size of the training dataset. The space complexity is mainly influenced by the memory required to store trained weak learners and input features.

## Applications

Widely employed in various scenarios, Gradient Boosting Classifiers find applications in tasks such as classification, regression, anomaly detection, and ranking problems.

## Mathematical Foundation

### Objective:
The primary goal is to minimize a loss function by sequentially adding weak learners to the ensemble.

### Ensemble Model:
$$ F(x) = \sum_{m=1}^{M} \eta \cdot f_m(x) $$

### Loss Function:
$$ L(y, F(x)) = \sum_{i=1}^{N} L(y_i, F(x_i)) $$

### Steps:
1. **Initialization:** Begin with an initial model $ F_0(x) $.
2. **Iteration:** For $ m = 1 $ to $ M $:
    - Compute negative gradient ($-\frac{\partial L(y, F_{m-1}(x))}{\partial F_{m-1}(x)}$) as pseudo-residuals.
    - Train a weak learner ($f_m(x)$) to predict the pseudo-residuals.
    - Update ensemble: $ F_m(x) = F_{m-1}(x) + \eta \cdot f_m(x) $.

### Prediction:
$$ F(x) = \sum_{m=1}^{M} \eta \cdot f_m(x) $$

### Regularization:
- Control learning rate ($\eta$).
- Limit weak learner complexity (e.g., shallow trees).
- Introduce shrinkage ($\eta < 1$) to prevent overfitting.

### Outcome:
A robust predictive model combining the strengths of multiple weak learners.

## Example

Consider the following example using the Iris dataset:

```python
clf = GradientBoostingClassifier(n_estimators=100, learning_rate=0.1)
iris = load_iris()
X, y = iris.data, iris.target
clf.fit(X, y)
y_pred = clf.predict(X)
```

## Contribution Guidelines

Contributions to translations or explanations are encouraged, following the outlined guidelines. However, it's crucial to maintain clarity and organization in explanations to align with the project's scope. If further formalization is needed, it should be done concisely without exceeding the project's limitations.

## References

- [Gradient Boosting Wikipedia](https://en.wikipedia.org/wiki/Gradient_boosting#:~:text=Gradient%20boosting%20is%20a%20machine,residuals%20used%20in%20traditional%20boosting.)
- [Gradient Boosting Classifier implementation](https://github.com/TheAlgorithms/Python/blob/master/machine_learning/gradient_boosting_classifier.py)
- [Video Explanation](https://youtu.be/StWY5QWMXCw?si=IHsnAYjbM6yD-Zdd)

## Summary

In summary, the Gradient Boosting Classifier, developed by Jerome Friedman, is an ensemble learning algorithm that iteratively improves predictive models. It is widely applicable and finds use in diverse tasks such as classification and regression. For a comprehensive understanding, refer to the provided [implementation](https://github.com/TheAlgorithms/Python/blob/master/machine_learning/gradient_boosting_classifier.py) and [video explanation](https://youtu.be/StWY5QWMXCw?si=IHsnAYjbM6yD-Zdd).
