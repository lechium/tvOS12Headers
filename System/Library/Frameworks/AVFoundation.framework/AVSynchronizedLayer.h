/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class AVSynchronizedLayerInternal, AVPlayerItem;

@interface AVSynchronizedLayer : CALayer {

	AVSynchronizedLayerInternal* _syncLayer;

}

@property (nonatomic,retain) AVPlayerItem * playerItem; 
+(id)synchronizedLayerWithPlayerItem:(id)arg1 ;
-(void)finalize;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)playerItem;
-(id)init;
-(void)dealloc;
@end

