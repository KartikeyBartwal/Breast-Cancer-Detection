![sps](https://github.com/user-attachments/assets/73321386-1616-4780-9daa-a9aa93a2aaf2)

# Breast Cancer Prediction Model

This repository contains a machine learning model for predicting breast cancer, along with the associated data files, notebooks, and preprocessed datasets.

- `breast-cancer.csv`: The primary dataset used for training and testing the breast cancer prediction model.
- `breast_cancer_model.pkl`: The serialized model file for the breast cancer prediction model.
- `Breast Cancer Prediction Model.ipynb`: Jupyter notebook containing the model training and evaluation code.
- `BreastCancer test.csv`: Test dataset for evaluating the model.
- `BreastCancer train.csv`: Training dataset for training the model.
- `df_test_preprocessed.csv`: Preprocessed test dataset.
- `df_train_preprocessed.csv`: Preprocessed training dataset.
- `Diabetes dataset info`: Additional information or dataset related to diabetes (not used in the current model).
- `EDA function.pkl`: Serialized exploratory data analysis (EDA) functions.
- `tempCodeRunnerFile.c` & `tempCodeRunnerFile.exe`: Temporary files from code execution (likely not needed for the project).
- `Untitled.ipynb`: Additional Jupyter notebook (possibly for exploratory analysis or development).

## Getting Started

### Prerequisites

- Python 3.x
- Jupyter Notebook
- Required Python packages listed in `requirements.txt`

### Installation

1. **Clone the repository:**
    ```bash
    git clone https://github.com/yourusername/breast-cancer-prediction.git
    cd breast-cancer-prediction
    ```

2. **Create a virtual environment and activate it:**
    ```bash
    python3 -m venv env
    source env/bin/activate
    ```

3. **Install the required packages:**
    ```bash
    pip install -r requirements.txt
    ```

### Usage

1. **Run the Jupyter Notebook:**
    ```bash
    jupyter notebook
    ```
    Open `Breast Cancer Prediction Model.ipynb` in your browser to view and run the code cells.

2. **Training the Model:**
    Follow the steps in `Breast Cancer Prediction Model.ipynb` to train the model using `BreastCancer train.csv`.

3. **Evaluating the Model:**
    Evaluate the model using the test dataset `BreastCancer test.csv`.

4. **Preprocessed Data:**
    The preprocessed training and test datasets are available as `df_train_preprocessed.csv` and `df_test_preprocessed.csv`.

### Model Deployment

The trained model is saved as `breast_cancer_model.pkl`. You can load this model for predictions as follows:

```python
import pickle

with open('breast_cancer_model.pkl', 'rb') as model_file:
    model = pickle.load(model_file)

# Example prediction
example_input = [...]  # Replace with actual input data
prediction = model.predict(example_input)
print("Prediction:", prediction)
