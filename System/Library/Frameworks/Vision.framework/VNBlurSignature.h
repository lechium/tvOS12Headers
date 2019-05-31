/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNBlurSignature : NSObject {

	void* _signatureData;

}
+(id)computeBlurSignatureForGrayscaleImage:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithSignatureData:(void*)arg1 ;
-(void)setSignatureData:(void*)arg1 ;
-(void*)getSignatureData;
-(void)dealloc;
@end

