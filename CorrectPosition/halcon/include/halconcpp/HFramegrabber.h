/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 11.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HFRAMEGRABBER
#define HCPP_HFRAMEGRABBER

namespace HalconCpp
{

// Represents an instance of an image acquisition device.
class LIntExport HFramegrabber : public HToolBase
{

public:

  // Create an uninitialized instance
  HFramegrabber():HToolBase() {}

  // Copy constructor
  HFramegrabber(const HFramegrabber& source) : HToolBase(source) {}

  // Create HFramegrabber from handle, taking ownership
  explicit HFramegrabber(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // open_framegrabber: Open and configure an image acquisition device.
  explicit HFramegrabber(const HString& Name, Hlong HorizontalResolution, Hlong VerticalResolution, Hlong ImageWidth, Hlong ImageHeight, Hlong StartRow, Hlong StartColumn, const HString& Field, const HTuple& BitsPerChannel, const HTuple& ColorSpace, const HTuple& Generic, const HString& ExternalTrigger, const HTuple& CameraType, const HTuple& Device, const HTuple& Port, const HTuple& LineIn);

  // open_framegrabber: Open and configure an image acquisition device.
  explicit HFramegrabber(const HString& Name, Hlong HorizontalResolution, Hlong VerticalResolution, Hlong ImageWidth, Hlong ImageHeight, Hlong StartRow, Hlong StartColumn, const HString& Field, Hlong BitsPerChannel, const HString& ColorSpace, double Generic, const HString& ExternalTrigger, const HString& CameraType, const HString& Device, Hlong Port, Hlong LineIn);

  // open_framegrabber: Open and configure an image acquisition device.
  explicit HFramegrabber(const char* Name, Hlong HorizontalResolution, Hlong VerticalResolution, Hlong ImageWidth, Hlong ImageHeight, Hlong StartRow, Hlong StartColumn, const char* Field, Hlong BitsPerChannel, const char* ColorSpace, double Generic, const char* ExternalTrigger, const char* CameraType, const char* Device, Hlong Port, Hlong LineIn);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Query specific parameters of a image acquisition device.
  HTuple GetFramegrabberParam(const HTuple& Param) const;

  // Query specific parameters of a image acquisition device.
  HTuple GetFramegrabberParam(const HString& Param) const;

  // Query specific parameters of a image acquisition device.
  HTuple GetFramegrabberParam(const char* Param) const;

  // Set specific parameters of a image acquistion device.
  void SetFramegrabberParam(const HTuple& Param, const HTuple& Value) const;

  // Set specific parameters of a image acquistion device.
  void SetFramegrabberParam(const HString& Param, const HString& Value) const;

  // Set specific parameters of a image acquistion device.
  void SetFramegrabberParam(const char* Param, const char* Value) const;

  // Query callback function of an image acquisition device.
  void* GetFramegrabberCallback(const HString& CallbackType, void** UserContext) const;

  // Query callback function of an image acquisition device.
  void* GetFramegrabberCallback(const char* CallbackType, void** UserContext) const;

  // Register a callback function for an image acquisition device.
  void SetFramegrabberCallback(const HString& CallbackType, void* CallbackFunction, void* UserContext) const;

  // Register a callback function for an image acquisition device.
  void SetFramegrabberCallback(const char* CallbackType, void* CallbackFunction, void* UserContext) const;

  // Asynchronous grab of images and preprocessed image data from the specified image acquisition device.
  HImage GrabDataAsync(HRegion* Region, HXLDCont* Contours, double MaxDelay, HTuple* Data) const;

  // Asynchronous grab of images and preprocessed image data from the specified image acquisition device.
  HImage GrabDataAsync(HRegion* Region, HXLDCont* Contours, double MaxDelay, HString* Data) const;

  // Synchronous grab of images and preprocessed image data from the specified image acquisition device.
  HImage GrabData(HRegion* Region, HXLDCont* Contours, HTuple* Data) const;

  // Synchronous grab of images and preprocessed image data from the specified image acquisition device.
  HImage GrabData(HRegion* Region, HXLDCont* Contours, HString* Data) const;

  // Asynchronous grab of an image from the specified image acquisition device.
  HImage GrabImageAsync(double MaxDelay) const;

  // Start an asynchronous grab from the specified image acquisition device.
  void GrabImageStart(double MaxDelay) const;

  // Synchronous grab of an image from the specified image acquisition device.
  HImage GrabImage() const;

  // Open and configure an image acquisition device.
  void OpenFramegrabber(const HString& Name, Hlong HorizontalResolution, Hlong VerticalResolution, Hlong ImageWidth, Hlong ImageHeight, Hlong StartRow, Hlong StartColumn, const HString& Field, const HTuple& BitsPerChannel, const HTuple& ColorSpace, const HTuple& Generic, const HString& ExternalTrigger, const HTuple& CameraType, const HTuple& Device, const HTuple& Port, const HTuple& LineIn);

  // Open and configure an image acquisition device.
  void OpenFramegrabber(const HString& Name, Hlong HorizontalResolution, Hlong VerticalResolution, Hlong ImageWidth, Hlong ImageHeight, Hlong StartRow, Hlong StartColumn, const HString& Field, Hlong BitsPerChannel, const HString& ColorSpace, double Generic, const HString& ExternalTrigger, const HString& CameraType, const HString& Device, Hlong Port, Hlong LineIn);

  // Open and configure an image acquisition device.
  void OpenFramegrabber(const char* Name, Hlong HorizontalResolution, Hlong VerticalResolution, Hlong ImageWidth, Hlong ImageHeight, Hlong StartRow, Hlong StartColumn, const char* Field, Hlong BitsPerChannel, const char* ColorSpace, double Generic, const char* ExternalTrigger, const char* CameraType, const char* Device, Hlong Port, Hlong LineIn);

  // Query look-up table of the image acquisition device.
  void GetFramegrabberLut(HTuple* ImageRed, HTuple* ImageGreen, HTuple* ImageBlue) const;

  // Set look-up table of the image acquisition device.
  void SetFramegrabberLut(const HTuple& ImageRed, const HTuple& ImageGreen, const HTuple& ImageBlue) const;

};

class LIntExport HFramegrabberArray : public HToolArray
{
public:
  HFramegrabberArray();
  HFramegrabberArray(HFramegrabber* classes, Hlong length);
protected:
  virtual void CreateArray(Hlong length);
};

}

#endif
