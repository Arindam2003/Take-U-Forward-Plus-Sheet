import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix
from sklearn.metrics import accuracy_score
from sklearn.metrics import precision_score
from sklearn.metrics import recall_score
from sklearn.metrics import f1_score
from sklearn.linear_model import LogisticRegression
from sklearn import preprocessing
from sklearn.preprocessing import LabelEncoder
path="C:/Users/UEM/OneDrive - University Of Engineering & Management/subject/AI/lab/2025/dataset/logistic_regression/dataset3/"
data=pd.read_csv(path+"Iris_Dataset.csv")
X=data.drop("species",axis=1)
data1=pd.read_csv(path+"Iris_Dataset.csv")
data1.drop(data1.iloc[:,0:4],axis=1, inplace=True)
Y=data1
le = LabelEncoder()
labels = le.fit_transform(Y)
print(Y)
print(labels)

X_train,X_test,Y_train,Y_test=train_test_split(X,labels,test_size=0.4,random_state=15)
print(X_train.shape)
print(Y_train.shape)
print(X_test.shape)
print(Y_test.shape)
#log_reg=LogisticRegression(max_iter=10000)
log_reg=LogisticRegression(multi_class='multinomial',max_iter=10)
log_reg.fit(X_train, Y_train)
Y_pred=log_reg.predict(X_test)
result=0
confusion_matrix = confusion_matrix(Y_test, Y_pred)
#f1_value=f1_score(Y_test,Y_pred)
acc=accuracy_score(Y_test,Y_pred)
#print("F1 score is: ",f1_value*100)
print("Accuracy using function is: ",acc*100)
print(confusion_matrix)





