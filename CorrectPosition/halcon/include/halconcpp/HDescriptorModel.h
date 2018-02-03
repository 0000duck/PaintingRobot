/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 11.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HDESCRIPTORMODEL
#define HCPP_HDESCRIPTORMODEL

namespace HalconCpp
{

// Represents an instance of a descriptor model.
class LIntExport HDescriptorModel : public HToolBase
{

public:

  // Create an uninitialized instance
  HDescriptorModel():HToolBase() {}

  // Copy constructor
  HDescriptorModel(const HDescriptorModel& source) : HToolBase(source) {}

  // Create HDescriptorModel from handle, taking ownership
  explicit HDescriptorModel(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);

  // Deep copy of all data represented by this object instance
  HDescriptorModel Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // read_descriptor_model: Read a descriptor model from a file.
  explicit HDescriptorModel(const HString& FileName);

  // read_descriptor_model: Read a descriptor model from a file.
  explicit HDescriptorModel(const char* FileName);

  // create_calib_descriptor_model: Create a descriptor model for calibrated perspective matching.
  explicit HDescriptorModel(const HImage& Template, const HTuple& CamParam, const HPose& ReferencePose, const HString& DetectorType, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, Hlong Seed);

  // create_calib_descriptor_model: Create a descriptor model for calibrated perspective matching.
  explicit HDescriptorModel(const HImage& Template, const HTuple& CamParam, const HPose& ReferencePose, const char* DetectorType, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, Hlong Seed);

  // create_uncalib_descriptor_model: Prepare a descriptor model for interest point matching.
  explicit HDescriptorModel(const HImage& Template, const HString& DetectorType, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, Hlong Seed);

  // create_uncalib_descriptor_model: Prepare a descriptor model for interest point matching.
  explicit HDescriptorModel(const HImage& Template, const char* DetectorType, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, Hlong Seed);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Deserialize a descriptor model.
  void DeserializeDescriptorModel(const HSerializedItem& SerializedItemHandle);

  // Serialize a descriptor model.
  HSerializedItem SerializeDescriptorModel() const;

  // Read a descriptor model from a file.
  void ReadDescriptorModel(const HString& FileName);

  // Read a descriptor model from a file.
  void ReadDescriptorModel(const char* FileName);

  // Write a descriptor model to a file.
  void WriteDescriptorModel(const HString& FileName) const;

  // Write a descriptor model to a file.
  void WriteDescriptorModel(const char* FileName) const;

  // Find the best matches of a calibrated descriptor model in an image and return their 3D pose.
  HPoseArray FindCalibDescriptorModel(const HImage& Image, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, const HTuple& MinScore, Hlong NumMatches, const HTuple& CamParam, const HTuple& ScoreType, HTuple* Score) const;

  // Find the best matches of a calibrated descriptor model in an image and return their 3D pose.
  HPose FindCalibDescriptorModel(const HImage& Image, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, double MinScore, Hlong NumMatches, const HTuple& CamParam, const HString& ScoreType, double* Score) const;

  // Find the best matches of a calibrated descriptor model in an image and return their 3D pose.
  HPose FindCalibDescriptorModel(const HImage& Image, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, double MinScore, Hlong NumMatches, const HTuple& CamParam, const char* ScoreType, double* Score) const;

  // Find the best matches of a descriptor model in an image.
  HHomMat2DArray FindUncalibDescriptorModel(const HImage& Image, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, const HTuple& MinScore, Hlong NumMatches, const HTuple& ScoreType, HTuple* Score) const;

  // Find the best matches of a descriptor model in an image.
  HHomMat2D FindUncalibDescriptorModel(const HImage& Image, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, double MinScore, Hlong NumMatches, const HString& ScoreType, double* Score) const;

  // Find the best matches of a descriptor model in an image.
  HHomMat2D FindUncalibDescriptorModel(const HImage& Image, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, double MinScore, Hlong NumMatches, const char* ScoreType, double* Score) const;

  // Query the interest points of the descriptor model or the last processed search image.
  void GetDescriptorModelPoints(const HString& Set, const HTuple& Subset, HTuple* Row, HTuple* Column) const;

  // Query the interest points of the descriptor model or the last processed search image.
  void GetDescriptorModelPoints(const HString& Set, Hlong Subset, HTuple* Row, HTuple* Column) const;

  // Query the interest points of the descriptor model or the last processed search image.
  void GetDescriptorModelPoints(const char* Set, Hlong Subset, HTuple* Row, HTuple* Column) const;

  // Return the parameters of a descriptor model.
  HString GetDescriptorModelParams(HTuple* DetectorParamName, HTuple* DetectorParamValue, HTuple* DescriptorParamName, HTuple* DescriptorParamValue) const;

  // Create a descriptor model for calibrated perspective matching.
  void CreateCalibDescriptorModel(const HImage& Template, const HTuple& CamParam, const HPose& ReferencePose, const HString& DetectorType, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, Hlong Seed);

  // Create a descriptor model for calibrated perspective matching.
  void CreateCalibDescriptorModel(const HImage& Template, const HTuple& CamParam, const HPose& ReferencePose, const char* DetectorType, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, Hlong Seed);

  // Prepare a descriptor model for interest point matching.
  void CreateUncalibDescriptorModel(const HImage& Template, const HString& DetectorType, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, Hlong Seed);

  // Prepare a descriptor model for interest point matching.
  void CreateUncalibDescriptorModel(const HImage& Template, const char* DetectorType, const HTuple& DetectorParamName, const HTuple& DetectorParamValue, const HTuple& DescriptorParamName, const HTuple& DescriptorParamValue, Hlong Seed);

  // Query alphanumerical results that were accumulated during descriptor-based matching.
  HTuple GetDescriptorModelResults(const HTuple& ObjectID, const HString& ResultNames) const;

  // Query alphanumerical results that were accumulated during descriptor-based matching.
  HTuple GetDescriptorModelResults(Hlong ObjectID, const HString& ResultNames) const;

  // Query alphanumerical results that were accumulated during descriptor-based matching.
  HTuple GetDescriptorModelResults(Hlong ObjectID, const char* ResultNames) const;

  // Return the origin of a descriptor model.
  void GetDescriptorModelOrigin(HTuple* Row, HTuple* Column) const;

  // Return the origin of a descriptor model.
  void GetDescriptorModelOrigin(double* Row, double* Column) const;

  // Sets the origin of a descriptor model.
  void SetDescriptorModelOrigin(const HTuple& Row, const HTuple& Column) const;

  // Sets the origin of a descriptor model.
  void SetDescriptorModelOrigin(double Row, double Column) const;

};

class LIntExport HDescriptorModelArray : public HToolArray
{
public:
  HDescriptorModelArray();
  HDescriptorModelArray(HDescriptorModel* classes, Hlong length);
protected:
  virtual void CreateArray(Hlong length);
};

}

#endif
