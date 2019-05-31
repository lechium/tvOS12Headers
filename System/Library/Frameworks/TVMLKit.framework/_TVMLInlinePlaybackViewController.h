/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVPlayerViewController.h>

@class _TVMLPlayer;

@interface _TVMLInlinePlaybackViewController : AVPlayerViewController {

	_TVMLPlayer* _tvmlPlayer;

}

@property (nonatomic,readonly) _TVMLPlayer * tvmlPlayer;              //@synthesize tvmlPlayer=_tvmlPlayer - In the implementation block
-(id)initWithPlayer:(id)arg1 ;
-(_TVMLPlayer *)tvmlPlayer;
-(void)_updateAVPlayer;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
