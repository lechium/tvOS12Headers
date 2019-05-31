/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface CIMetalProcessor : CIImageProcessorKernel
+(void)setFilterParams:(id)arg1 arguments:(id)arg2 filter:(id)arg3 ;
+(void)setFilterParamsAndImages:(id)arg1 arguments:(id)arg2 filter:(id)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)synchronizeInputs;
+(BOOL)allowPartialOutputRegion;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(int)outputFormat;
@end

