/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVMutableComposition, Project, CALayer, AVMutableVideoComposition, AVMutableAudioMix;


@protocol MovieControllerExportProtocol <NSObject>
@property (nonatomic,readonly) AVMutableComposition * AVComposition; 
@property (retain) Project * project; 
@property (nonatomic,readonly) CALayer * compositionLayer; 
@property (nonatomic,retain) CALayer * playerLayer; 
@property (nonatomic,readonly) AVMutableVideoComposition * videoComposition; 
@property (nonatomic,readonly) AVMutableAudioMix * audioMix; 
@property (assign,nonatomic) BOOL supportArbitraryAspectRatio; 
@property (assign) CGSize size; 
@property (nonatomic,copy) id progressUpdateBlock; 
@property (assign,nonatomic) BOOL playAltClips; 
@optional
-(BOOL)playAltClips;
-(void)setPlayAltClips:(BOOL)arg1;
-(void)tearDownProjectDisplay;

@required
-(CALayer *)playerLayer;
-(AVMutableVideoComposition *)videoComposition;
-(void)updateComposition;
-(Project *)project;
-(void)setProject:(id)arg1;
-(void)setSupportArbitraryAspectRatio:(BOOL)arg1;
-(AVMutableComposition *)AVComposition;
-(AVMutableAudioMix *)audioMix;
-(CALayer *)compositionLayer;
-(void)setPlayerLayer:(id)arg1;
-(BOOL)supportArbitraryAspectRatio;
-(id)progressUpdateBlock;
-(void)setProgressUpdateBlock:(/*^block*/id)arg1;
-(CGSize)size;
-(void)setSize:(CGSize)arg1;

@end

