/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CGRenderer.h>

@interface PNGRenderer : CGRenderer {

	CFURLRef fullURL;
	CGColorRef background;
	CGColorSpaceRef colorSpace;

}
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)flushRender;
-(CGImageRef)cgimage;
-(void)setFileURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

