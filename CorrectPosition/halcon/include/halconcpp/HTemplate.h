/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 11.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HTEMPLATE
#define HCPP_HTEMPLATE

namespace HalconCpp
{

// Represents an instance of a template for gray value matching.
class LIntExport HTemplate : public HToolBase
{

public:

  // Create an uninitialized instance
  HTemplate():HToolBase() {}

  // Copy constructor
  HTemplate(const HTemplate& source) : HToolBase(source) {}

  // Create HTemplate from handle, taking ownership
  explicit HTemplate(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);

  // Deep copy of all data represented by this object instance
  HTemplate Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // create_template_rot: Preparing a pattern for template matching with rotation.
  explicit HTemplate(const HImage& Template, Hlong NumLevel, double AngleStart, double AngleExtend, double AngleStep, const HString& Optimize, const HString& GrayValues);

  // create_template_rot: Preparing a pattern for template matching with rotation.
  explicit HTemplate(const HImage& Template, Hlong NumLevel, double AngleStart, double AngleExtend, double AngleStep, const char* Optimize, const char* GrayValues);

  // create_template: Preparing a pattern for template matching.
  explicit HTemplate(const HImage& Template, Hlong FirstError, Hlong NumLevel, const HString& Optimize, const HString& GrayValues);

  // create_template: Preparing a pattern for template matching.
  explicit HTemplate(const HImage& Template, Hlong FirstError, Hlong NumLevel, const char* Optimize, const char* GrayValues);

  // read_template: Reading a template from file.
  explicit HTemplate(const HString& FileName);

  // read_template: Reading a template from file.
  explicit HTemplate(const char* FileName);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Preparing a pattern for template matching with rotation.
  void CreateTemplateRot(const HImage& Template, Hlong NumLevel, double AngleStart, double AngleExtend, double AngleStep, const HString& Optimize, const HString& GrayValues);

  // Preparing a pattern for template matching with rotation.
  void CreateTemplateRot(const HImage& Template, Hlong NumLevel, double AngleStart, double AngleExtend, double AngleStep, const char* Optimize, const char* GrayValues);

  // Preparing a pattern for template matching.
  void CreateTemplate(const HImage& Template, Hlong FirstError, Hlong NumLevel, const HString& Optimize, const HString& GrayValues);

  // Preparing a pattern for template matching.
  void CreateTemplate(const HImage& Template, Hlong FirstError, Hlong NumLevel, const char* Optimize, const char* GrayValues);

  // Serialize a template.
  HSerializedItem SerializeTemplate() const;

  // Deserialize a serialized template.
  void DeserializeTemplate(const HSerializedItem& SerializedItemHandle);

  // Writing a template to file.
  void WriteTemplate(const HString& FileName) const;

  // Writing a template to file.
  void WriteTemplate(const char* FileName) const;

  // Reading a template from file.
  void ReadTemplate(const HString& FileName);

  // Reading a template from file.
  void ReadTemplate(const char* FileName);

  // Gray value offset for template.
  void SetOffsetTemplate(Hlong GrayOffset) const;

  // Define reference position for a matching template.
  void SetReferenceTemplate(double Row, double Column) const;

  // Adapting a template to the size of an image.
  void AdaptTemplate(const HImage& Image) const;

  // Searching all good grayvalue matches in a pyramid.
  HRegion FastMatchMg(const HImage& Image, double MaxError, const HTuple& NumLevel) const;

  // Searching all good grayvalue matches in a pyramid.
  HRegion FastMatchMg(const HImage& Image, double MaxError, Hlong NumLevel) const;

  // Searching the best grayvalue matches in a pre generated pyramid.
  void BestMatchPreMg(const HImage& ImagePyramid, double MaxError, const HString& SubPixel, Hlong NumLevels, const HTuple& WhichLevels, double* Row, double* Column, double* Error) const;

  // Searching the best grayvalue matches in a pre generated pyramid.
  void BestMatchPreMg(const HImage& ImagePyramid, double MaxError, const HString& SubPixel, Hlong NumLevels, Hlong WhichLevels, double* Row, double* Column, double* Error) const;

  // Searching the best grayvalue matches in a pre generated pyramid.
  void BestMatchPreMg(const HImage& ImagePyramid, double MaxError, const char* SubPixel, Hlong NumLevels, Hlong WhichLevels, double* Row, double* Column, double* Error) const;

  // Searching the best grayvalue matches in a pyramid.
  void BestMatchMg(const HImage& Image, double MaxError, const HString& SubPixel, Hlong NumLevels, const HTuple& WhichLevels, double* Row, double* Column, double* Error) const;

  // Searching the best grayvalue matches in a pyramid.
  void BestMatchMg(const HImage& Image, double MaxError, const HString& SubPixel, Hlong NumLevels, Hlong WhichLevels, double* Row, double* Column, double* Error) const;

  // Searching the best grayvalue matches in a pyramid.
  void BestMatchMg(const HImage& Image, double MaxError, const char* SubPixel, Hlong NumLevels, Hlong WhichLevels, double* Row, double* Column, double* Error) const;

  // Searching all good matches of a template and an image.
  HRegion FastMatch(const HImage& Image, double MaxError) const;

  // Searching the best matching of a template and a pyramid with rotation.
  void BestMatchRotMg(const HImage& Image, double AngleStart, double AngleExtend, double MaxError, const HString& SubPixel, Hlong NumLevels, HTuple* Row, HTuple* Column, HTuple* Angle, HTuple* Error) const;

  // Searching the best matching of a template and a pyramid with rotation.
  void BestMatchRotMg(const HImage& Image, double AngleStart, double AngleExtend, double MaxError, const HString& SubPixel, Hlong NumLevels, double* Row, double* Column, double* Angle, double* Error) const;

  // Searching the best matching of a template and a pyramid with rotation.
  void BestMatchRotMg(const HImage& Image, double AngleStart, double AngleExtend, double MaxError, const char* SubPixel, Hlong NumLevels, double* Row, double* Column, double* Angle, double* Error) const;

  // Searching the best matching of a template and an image with rotation.
  void BestMatchRot(const HImage& Image, double AngleStart, double AngleExtend, double MaxError, const HString& SubPixel, HTuple* Row, HTuple* Column, HTuple* Angle, HTuple* Error) const;

  // Searching the best matching of a template and an image with rotation.
  void BestMatchRot(const HImage& Image, double AngleStart, double AngleExtend, double MaxError, const HString& SubPixel, double* Row, double* Column, double* Angle, double* Error) const;

  // Searching the best matching of a template and an image with rotation.
  void BestMatchRot(const HImage& Image, double AngleStart, double AngleExtend, double MaxError, const char* SubPixel, double* Row, double* Column, double* Angle, double* Error) const;

  // Searching the best matching of a template and an image.
  void BestMatch(const HImage& Image, double MaxError, const HString& SubPixel, HTuple* Row, HTuple* Column, HTuple* Error) const;

  // Searching the best matching of a template and an image.
  void BestMatch(const HImage& Image, double MaxError, const HString& SubPixel, double* Row, double* Column, double* Error) const;

  // Searching the best matching of a template and an image.
  void BestMatch(const HImage& Image, double MaxError, const char* SubPixel, double* Row, double* Column, double* Error) const;

};

class LIntExport HTemplateArray : public HToolArray
{
public:
  HTemplateArray();
  HTemplateArray(HTemplate* classes, Hlong length);
protected:
  virtual void CreateArray(Hlong length);
};

}

#endif
