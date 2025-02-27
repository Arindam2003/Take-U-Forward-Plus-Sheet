import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import train_test_split
path="C:/Users/UEM/OneDrive - University Of Engineering & Management/subject/AI/lab/2024/dataset/linear_regression/"
dataset=pd.read_csv(path+"headbrain.csv")
x=dataset['Head Size(cm^3)'].values
y=dataset['Brain Weight(grams)'].values
x = x.reshape(len(x), 1)
x_train, x_test, y_train, y_test = train_test_split(x,y,test_size=0.1)
reg = LinearRegression()
reg = reg.fit(x_train,y_train)

y_pred = reg.predict(x_test)
mean_sq_er=np.sqrt(mean_squared_error(y_test, y_pred))
r2_square = reg.score(x_test,y_test)

print (r2_square)