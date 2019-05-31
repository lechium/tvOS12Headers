/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageLaplacian : MPSUnaryImageKernel {

	float _bias;

}

@property (assign,nonatomic) float bias;              //@synthesize bias=_bias - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setBias:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)bias;
@end

