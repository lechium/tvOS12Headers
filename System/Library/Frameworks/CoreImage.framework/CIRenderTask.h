/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIRenderTask : NSObject {

	void* _priv;

}
+(id)rendertaskWithInternalTask:(RenderTask*)arg1 ;
-(id)waitUntilCompletedAndReturnError:(id*)arg1 ;
-(id)_pdfDataRepresentation;
-(RenderTask*)internalRepresentation;
-(id)initWithInternalTask:(RenderTask*)arg1 ;
-(id)init;
-(void)dealloc;
@end

