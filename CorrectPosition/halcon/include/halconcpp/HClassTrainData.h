/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 11.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HCLASSTRAINDATA
#define HCPP_HCLASSTRAINDATA

namespace HalconCpp
{

// Represents an instance of a training data management class.
class LIntExport HClassTrainData : public HToolBase
{

public:

  // Create an uninitialized instance
  HClassTrainData():HToolBase() {}

  // Copy constructor
  HClassTrainData(const HClassTrainData& source) : HToolBase(source) {}

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);

  // Deep copy of all data represented by this object instance
  HClassTrainData Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // read_class_train_data: Read the training data for classifiers from a file.
  explicit HClassTrainData(const HString& FileName);

  // read_class_train_data: Read the training data for classifiers from a file.
  explicit HClassTrainData(const char* FileName);

  // create_class_train_data: Create a handle for training data for classifiers.
  explicit HClassTrainData(Hlong NumDim);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Deserialize serialized training data for classifiers.
  void DeserializeClassTrainData(const HSerializedItem& SerializedItemHandle);

  // Serialize training data for classifiers.
  HSerializedItem SerializeClassTrainData() const;

  // Read the training data for classifiers from a file.
  void ReadClassTrainData(const HString& FileName);

  // Read the training data for classifiers from a file.
  void ReadClassTrainData(const char* FileName);

  // Save the training data for classifiers in a file.
  void WriteClassTrainData(const HString& FileName) const;

  // Save the training data for classifiers in a file.
  void WriteClassTrainData(const char* FileName) const;

  // Select certain features from training data to create  training data containing less features.
  HClassTrainData SelectSubFeatureClassTrainData(const HTuple& SubFeatureIndices) const;

  // Define subfeatures in training data.
  void SetFeatureLengthsClassTrainData(const HTuple& SubFeatureLength, const HTuple& Names) const;

  // Get the training data of a Gaussian Mixture Model (GMM).
  void GetClassTrainDataGmm(const HClassGmm& GMMHandle);

  // Add training data to a Gaussian Mixture Model (GMM).
  void AddClassTrainDataGmm(const HClassGmm& GMMHandle) const;

  // Get the training data of a multilayer perceptron (MLP).
  void GetClassTrainDataMlp(const HClassMlp& MLPHandle);

  // Add training data to a multilayer perceptron (MLP).
  void AddClassTrainDataMlp(const HClassMlp& MLPHandle) const;

  // Get the training data of a k-nearest neighbors (k-NN) classifier.
  void GetClassTrainDataKnn(const HClassKnn& KNNHandle);

  // Add training data to a k-nearest neighbors (k-NN) classifier.
  void AddClassTrainDataKnn(const HClassKnn& KNNHandle) const;

  // Get the training data of a support vector machine (SVM).
  void GetClassTrainDataSvm(const HClassKnn& SVMHandle);

  // Add training data to a support vector machine (SVM).
  void AddClassTrainDataSvm(const HClassSvm& SVMHandle) const;

  // Return the number of training samples stored in the training data.
  Hlong GetSampleNumClassTrainData() const;

  // Return a training sample from training data.
  HTuple GetSampleClassTrainData(Hlong IndexSample, Hlong* ClassID) const;

  // Clear all training data for classifiers.
  static void ClearAllClassTrainData();

  // Add a training sample to training data.
  void AddSampleClassTrainData(const HString& Order, const HTuple& Features, const HTuple& ClassID) const;

  // Add a training sample to training data.
  void AddSampleClassTrainData(const char* Order, const HTuple& Features, const HTuple& ClassID) const;

  // Create a handle for training data for classifiers.
  void CreateClassTrainData(Hlong NumDim);

  // Selects an optimal combination of features to classify the provided data.
  HClassMlp SelectFeatureSetMlp(const HString& SelectionMethod, const HTuple& GenParamNames, const HTuple& GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal combination of features to classify the provided data.
  HClassMlp SelectFeatureSetMlp(const HString& SelectionMethod, const HString& GenParamNames, double GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal combination of features to classify the provided data.
  HClassMlp SelectFeatureSetMlp(const char* SelectionMethod, const char* GenParamNames, double GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal combination of features to classify the provided data.
  HClassSvm SelectFeatureSetSvm(const HString& SelectionMethod, const HTuple& GenParamNames, const HTuple& GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal combination of features to classify the provided data.
  HClassSvm SelectFeatureSetSvm(const HString& SelectionMethod, const HString& GenParamNames, double GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal combination of features to classify the provided data.
  HClassSvm SelectFeatureSetSvm(const char* SelectionMethod, const char* GenParamNames, double GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal combination from a set of features to classify the  provided data.
  HClassGmm SelectFeatureSetGmm(const HString& SelectionMethod, const HTuple& GenParamNames, const HTuple& GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal combination from a set of features to classify the  provided data.
  HClassGmm SelectFeatureSetGmm(const HString& SelectionMethod, const HString& GenParamNames, double GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal combination from a set of features to classify the  provided data.
  HClassGmm SelectFeatureSetGmm(const char* SelectionMethod, const char* GenParamNames, double GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal subset from a set of features to solve a certain  classification problem.
  HClassKnn SelectFeatureSetKnn(const HString& SelectionMethod, const HTuple& GenParamNames, const HTuple& GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal subset from a set of features to solve a certain  classification problem.
  HClassKnn SelectFeatureSetKnn(const HString& SelectionMethod, const HString& GenParamNames, double GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

  // Selects an optimal subset from a set of features to solve a certain  classification problem.
  HClassKnn SelectFeatureSetKnn(const char* SelectionMethod, const char* GenParamNames, double GenParamValues, HTuple* SelectedFeatureIndices, HTuple* Score) const;

};

class LIntExport HClassTrainDataArray : public HToolArray
{
public:
  HClassTrainDataArray();
  HClassTrainDataArray(HClassTrainData* classes, Hlong length);
protected:
  virtual void CreateArray(Hlong length);
};

}

#endif
