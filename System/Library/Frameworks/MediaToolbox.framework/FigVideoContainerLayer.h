/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class CALayer;

@interface FigVideoContainerLayer : FigBaseCALayer {

	CALayer* _videoLayer;
	BOOL _shouldResizeVideoLayer;

}

@property (nonatomic,retain) CALayer * videoLayer;                     //@synthesize videoLayer=_videoLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeVideoLayer;              //@synthesize shouldResizeVideoLayer=_shouldResizeVideoLayer - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(BOOL)shouldResizeVideoLayer;
-(void)setShouldResizeVideoLayer:(BOOL)arg1 ;
-(CALayer *)videoLayer;
-(void)setVideoLayer:(CALayer *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)actionForKey:(id)arg1 ;
-(void)layoutSublayers;
@end
