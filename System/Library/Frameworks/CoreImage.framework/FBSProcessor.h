/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface FBSProcessor : CIImageProcessorKernel
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)synchronizeInputs;
+(BOOL)allowPartialOutputRegion;
+(BOOL)skipFormatChecks;
+(int)outputFormat;
@end

