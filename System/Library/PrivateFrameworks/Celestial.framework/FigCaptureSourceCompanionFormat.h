/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface FigCaptureSourceCompanionFormat : NSObject {

	int _formatIndex;
	SCD_Struct_BW13 _fesDimensions;
	SCD_Struct_BW13 _fesInputCropDimensions;
	SCD_Struct_BW13 _outputCropDimensionsWhenFesIsEnabled;
	SCD_Struct_BW13 _sensorCropDimensions;
	BOOL _sifrEnabled;

}

@property (readonly) int formatIndex;                                                   //@synthesize formatIndex=_formatIndex - In the implementation block
@property (readonly) SCD_Struct_BW13 fesDimensions;                                     //@synthesize fesDimensions=_fesDimensions - In the implementation block
@property (readonly) SCD_Struct_BW13 fesInputCropDimensions;                            //@synthesize fesInputCropDimensions=_fesInputCropDimensions - In the implementation block
@property (readonly) SCD_Struct_BW13 outputCropDimensionsWhenFesIsEnabled;              //@synthesize outputCropDimensionsWhenFesIsEnabled=_outputCropDimensionsWhenFesIsEnabled - In the implementation block
@property (readonly) SCD_Struct_BW13 sensorCropDimensions;                              //@synthesize sensorCropDimensions=_sensorCropDimensions - In the implementation block
@property (readonly) BOOL sifrEnabled;                                                  //@synthesize sifrEnabled=_sifrEnabled - In the implementation block
-(SCD_Struct_BW13)sensorCropDimensions;
-(int)formatIndex;
-(SCD_Struct_BW13)fesDimensions;
-(BOOL)sifrEnabled;
-(SCD_Struct_BW13)fesInputCropDimensions;
-(SCD_Struct_BW13)outputCropDimensionsWhenFesIsEnabled;
-(id)initWithCompanionFormatDictionary:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

