/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageThresholdToZero : MPSUnaryImageKernel {

	SCD_Struct_MP18 filterInfo;

}

@property (nonatomic,readonly) float thresholdValue; 
@property (nonatomic,readonly) const float* transform; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithDevice:(id)arg1 thresholdValue:(float)arg2 linearGrayColorTransform:(const float*)arg3 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(float)thresholdValue;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(const float*)transform;
@end

