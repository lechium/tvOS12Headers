/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayer;

@interface _AVPlayerLayerThumbnailView : UIView

@property (nonatomic,retain) AVPlayer * player; 
+(Class)layerClass;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(id)init;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
