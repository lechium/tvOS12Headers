/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageSpecifier.h>

@interface _VNPixelBufferSpecifier : VNImageSpecifier {

	CVBufferRef _pixelBuffer;

}
-(CVBufferRef)pixelBuffer;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(id)newImageBufferWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)description;
@end

