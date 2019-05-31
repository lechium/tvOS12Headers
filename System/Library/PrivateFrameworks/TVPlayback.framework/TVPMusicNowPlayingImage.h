/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage;


@protocol TVPMusicNowPlayingImage <NSObject,NSCopying>
@property (assign,nonatomic) CGSize desiredImageSize; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) UIImage * image; 
@required
-(void)loadWithCompletionHandler:(/*^block*/id)arg1;
-(void)setDesiredImageSize:(CGSize)arg1;
-(CGSize)desiredImageSize;
-(UIImage *)image;
-(BOOL)isLoading;

@end
