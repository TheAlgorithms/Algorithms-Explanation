# Gradient Boosting Classifier

### Description
[Gradient Boosting Classifier](https://en.wikipedia.org/wiki/Gradient_boosting#:~:text=Gradient%20boosting%20is%20a%20machine,residuals%20used%20in%20traditional%20boosting.) is an ensemble learning algorithm that combines the predictions of multiple weak learners (usually decision trees) to create a robust and accurate predictive model. It builds a sequence of models, each correcting the errors of the previous one, and combines them to improve overall performance.

### Time Complexity
The time complexity of training a Gradient Boosting Classifier is influenced by the number of weak learners (n_estimators), the complexity of each weak learner, and the size of the training dataset.

### Space Complexity
The space complexity is primarily determined by the memory required to store the trained weak learners and the input features.

### Applications
Gradient Boosting Classifiers are widely used in various applications, including but not limited to:
- Classification tasks
- Regression tasks
- Anomaly detection
- Ranking problems

### Founder's Name
The algorithm's development is credited to Jerome Friedman, who introduced gradient boosting in 1999.

### Steps
1. **Initialization:** Set the number of weak learners (n_estimators) and learning rate.
2. **Training:** Iterate through the specified number of weak learners.
   - Calculate pseudo-residuals based on the negative gradient of the logistic loss.
   - Train a weak learner (Decision Tree with max depth 1) on the pseudo-residuals.
   - Update the model by adding the weak learner with a scaled learning rate.
3. **Prediction:** Combine predictions from all weak learners to make the final predictions.

### Maths Intuition

#### Objective:
Minimize a loss function by iteratively adding weak learners (typically decision trees) to the ensemble.

#### Ensemble Model:
$ F(x) = \sum_{m=1}^{M} \eta \cdot f_m(x) $

### Loss Function:
$ L(y, F(x)) = \sum_{i=1}^{N} L(y_i, F(x_i)) $

#### Steps:
1. **Initialization:** Start with an initial model $ F_0(x) $.
2. **Iteration:** For $ m = 1 $ to $ M $:
    - Compute negative gradient ($-\frac{\partial L(y, F_{m-1}(x))}{\partial F_{m-1}(x)}$) as pseudo-residuals.
    - Train a weak learner ($f_m(x)$) to predict the pseudo-residuals.
    - Update ensemble: $ F_m(x) = F_{m-1}(x) + \eta \cdot f_m(x) $.

#### Prediction:
$ F(x) = \sum_{m=1}^{M} \eta \cdot f_m(x) $

#### Regularization:
- Control learning rate ($\eta$).
- Limit weak learner complexity (e.g., shallow trees).
- Introduce shrinkage ($\eta < 1$) to prevent overfitting.

#### Outcome:
A robust predictive model combining the strengths of multiple weak learners.

### Example
Consider the following example using the Iris dataset:
```python
clf = GradientBoostingClassifier(n_estimators=100, learning_rate=0.1)
iris = load_iris()
X, y = iris.data, iris.target
clf.fit(X, y)
y_pred = clf.predict(X)
```

### Implementation
[Link to Gradient Boosting Classifier implementation](https://github.com/TheAlgorithms/Python/blob/master/machine_learning/gradient_boosting_classifier.py)

### Video URL
[Link to Video Explanation](https://youtu.be/StWY5QWMXCw?si=IHsnAYjbM6yD-Zdd)

### Wikipedia Page
[Gradient Boosting Wikipedia](https://en.wikipedia.org/wiki/Gradient_boosting#:~:text=Gradient%20boosting%20is%20a%20machine,residuals%20used%20in%20traditional%20boosting.)

### Summary
The Gradient Boosting Classifier is an ensemble learning algorithm that builds a sequence of weak learners to create a robust predictive model. It is widely used for classification and regression tasks, and its development is credited to Jerome Friedman. The algorithm's implementation can be found [here](https://github.com/TheAlgorithms/Python/blob/master/machine_learning/gradient_boosting_classifier.py), and additional details can be found in the [video explanation](https://youtu.be/StWY5QWMXCw?si=IHsnAYjbM6yD-Zdd). Contributions to translations or explanations are encouraged, following the outlined guidelines.