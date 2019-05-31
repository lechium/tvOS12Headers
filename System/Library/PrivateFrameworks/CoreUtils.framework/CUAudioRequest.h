/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioPlayer, NSString;

@interface CUAudioRequest : NSObject {

	AVAudioPlayer* _audioPlayer;
	/*^block*/id _completion;
	NSString* _label;

}

@property (nonatomic,retain) AVAudioPlayer * audioPlayer;              //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,copy) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * label;                           //@synthesize label=_label - In the implementation block
-(void)setAudioPlayer:(AVAudioPlayer *)arg1 ;
-(AVAudioPlayer *)audioPlayer;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end
