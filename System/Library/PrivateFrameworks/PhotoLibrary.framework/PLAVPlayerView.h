/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayerLayer, AVPlayer;

@interface PLAVPlayerView : UIView {

	long long _scaleMode;

}

@property (nonatomic,retain,readonly) AVPlayerLayer * layer; 
@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic) long long scaleMode;                         //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) CGRect videoRect; 
+(Class)layerClass;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(CGRect)videoRect;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(id)initWithFrame:(CGRect)arg1 ;
@end

