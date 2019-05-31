/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVErrorResolverDelegate;
@interface MPAVErrorResolver : NSObject {

	id<MPAVErrorResolverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPAVErrorResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)resolveError:(id)arg1 ;
-(void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2 ;
-(void)setDelegate:(id<MPAVErrorResolverDelegate>)arg1 ;
-(id<MPAVErrorResolverDelegate>)delegate;
@end

