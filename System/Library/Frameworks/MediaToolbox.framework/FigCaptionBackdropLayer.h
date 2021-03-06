/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CABackdropLayer.h>

@class CAFilter;

@interface FigCaptionBackdropLayer : CABackdropLayer {

	CAFilter* backdropFilter;

}
+(unsigned char)isSupported;
+(void)initialize;
-(void)insertBackdropAsSublayerToLayer:(id)arg1 below:(id)arg2 ;
-(void)removeBackdropFromSuperLayer;
-(void)applyRoundedCorners:(CGPathRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)configure;
@end

